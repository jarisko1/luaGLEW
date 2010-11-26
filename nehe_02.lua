require("iuplua")
require("iupluagl")
require("luaglew")

iup.key_open()

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}

function cnv:resize_cb(width, height)
  iup.GLMakeCurrent(self)

  luaglew.glViewport(0,0,width,height)

  --gl.MatrixMode('PROJECTION')   -- Select The Projection Matrix
  luaglew.glMatrixMode()

  luaglew.glLoadIdentity()

  if height == 0 then           -- Calculate The Aspect Ratio Of The Window
    height = 1
  end

  --gl.MatrixMode('MODELVIEW')    -- Select The Model View Matrix
  --gl.LoadIdentity()             -- Reset The Model View Matrix
end

function cnv:action(x, y)
  iup.GLMakeCurrent(self)
  --gl.Clear('COLOR_BUFFER_BIT') -- Clear Screen And Depth Buffer
  luaglew.glClear()

  luaglew.glLoadIdentity()


  --gl.Begin('TRIANGLES')          -- Drawing Using Triangles
  luaglew.glBegin('GL_QUADS')
    luaglew.glVertex( 0,  1, 0)         -- Top
    luaglew.glVertex(-1, -1, 0)         -- Bottom Left
    luaglew.glVertex( 1, -1, 0)         -- Bottom Right
	luaglew.glVertex(1, 0, 0)
  luaglew.glEnd()


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
  --gl.ShadeModel('SMOOTH')            -- Enable Smooth Shading
  luaglew.glShadeModel()
  luaglew.glClearColor(0, 0, 0, 0.5)

end

dlg = iup.dialog{cnv; title="LuaGL Test Application 02"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
