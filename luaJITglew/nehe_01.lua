local ffi  = require( "ffi" )
local gl   = require( "luaglew" )
local glu  = require( "glu" )
local iup = require( "iuplua" )

--require("iupluagl")


iup.key_open()

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}

function cnv:resize_cb(width, height)
  iup.GLMakeCurrent(self)
  gl.glViewport(0, 0, width, height)

  gl.glMatrixMode('PROJECTION')   -- Select The Projection Matrix
  gl.glLoadIdentity()             -- Reset The Projection Matrix

  if height == 0 then height = 1 end       -- Avoid division by zero
  glu.gluPerspective(80, width / height, 1, 5000) -- Calculate The Aspect Ratio And Set The Clipping Volume

  gl.glMatrixMode('MODELVIEW')    -- Select The Model View Matrix
  gl.glLoadIdentity()             -- Reset The Model View Matrix
end

function cnv:action(x, y)
  iup.GLMakeCurrent(self)
  gl.glClear('COLOR_BUFFER_BIT,DEPTH_BUFFER_BIT') -- Clear Screen And Depth Buffer
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
  gl.glShadeModel('SMOOTH')            -- Enable Smooth Shading
  gl.glClearColor(0, 0, 0, 0.5)        -- Black Background
  gl.glClearDepth(1.0)                 -- Depth Buffer Setup
  gl.glEnable('DEPTH_TEST')            -- Enables Depth Testing
  gl.glDepthFunc('LEQUAL')             -- The Type Of Depth Testing To Do
  gl.glEnable('COLOR_MATERIAL')
  gl.glHint('PERSPECTIVE_CORRECTION_HINT','NICEST')
end

dlg = iup.dialog{cnv; title="LuaGL Test Application 01"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
