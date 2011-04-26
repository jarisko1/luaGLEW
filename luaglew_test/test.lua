require("iuplua")
require("iupluagl")
require("luaglew")
require("luaglu")

iup.key_open()

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}


function cnv:resize_cb(width, height)
  iup.GLMakeCurrent(self)
  luaglew.glViewport(0, 0, width, height)

  luaglew.glMatrixMode('GL_PROJECTION')   -- Select The Projection Matrix
  luaglew.glLoadIdentity()             -- Reset The Projection Matrix

  if height == 0 then height = 1 end       -- Avoid division by zero
  glu.Perspective(80, width / height, 1, 5000) -- Calculate The Aspect Ratio And Set The Clipping Volume

  luaglew.glMatrixMode('GL_MODELVIEW')    -- Select The Model View Matrix
  luaglew.glLoadIdentity()             -- Reset The Model View Matrix
end

function cnv:action(x, y)
  iup.GLMakeCurrent(self)
  -- Clear Screen And Depth Buffer
  luaglew.glClear('GL_COLOR_BUFFER_BIT')
  luaglew.glClear('GL_DEPTH_BUFFER_BIT')
  iup.GLSwapBuffers(self)
end

function cnv:k_any(c)
  if c == iup.K_q or c == iup.K_ESC then
    return iup.CLOSE
  elseif c == iup.K_F1 then
    if fullscreen then
      fullscreen = false
      dlg.fullscreen = "No"
    else
      fullscreen = true
      dlg.fullscreen = "Yes"
    end
    iup.SetFocus(cnv)
  end
end

function cnv:map_cb()
  iup.GLMakeCurrent(self)

  luaglew.glShadeModel('GL_SMOOTH')            -- Enable Smooth Shading
  luaglew.glClearColor(0, 0, 0, 0.5)        -- Black Background
  luaglew.glClearDepth(1.0)                 -- Depth Buffer Setup
  luaglew.glEnable('GL_DEPTH_TEST')            -- Enables Depth Testing
  luaglew.glDepthFunc('GL_LEQUAL')             -- The Type Of Depth Testing To Do
  luaglew.glEnable('GL_COLOR_MATERIAL')
  luaglew.glHint('GL_PERSPECTIVE_CORRECTION_HINT','GL_NICEST')
  print(luaglew.glCreateShader('GL_VERTEX_SHADER'))
end

dlg = iup.dialog{cnv; title="LuaGL Test Application 01"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
