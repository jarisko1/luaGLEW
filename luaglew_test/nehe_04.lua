require("iuplua")
require("iupluagl")
require("luaglew")
require("luaglu")

iup.key_open()

rtri = 0
rquad = 0

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}

timer = iup.timer{time=10}

function timer:action_cb()
  rtri = rtri + 0.2             -- Increase The Rotation Variable For The Triangle ( NEW )
  rquad = rquad - 0.15          -- Decrease The Rotation Variable For The Quad     ( NEW )
  iup.Update(cnv)
end

function cnv:resize_cb(width, height)
  iup.GLMakeCurrent(self)
  luaglew.glViewport(0, 0, width, height)

  luaglew.glMatrixMode(GL_PROJECTION)   -- Select The Projection Matrix
  luaglew.glLoadIdentity()             -- Reset The Projection Matrix

  if height == 0 then           -- Calculate The Aspect Ratio Of The Window
    height = 1
  end

  glu.Perspective(80, width / height, 1, 5000)

  luaglew.glMatrixMode(GL_MODELVIEW)    -- Select The Model View Matrix
  luaglew.glLoadIdentity()             -- Reset The Model View Matrix
end

function cnv:action(x, y)
  iup.GLMakeCurrent(self)
  luaglew.glClear(GL_COLOR_BUFFER_BIT) -- Clear Screen And Depth Buffer
  luaglew.glClear(GL_DEPTH_BUFFER_BIT)

  luaglew.glLoadIdentity()             -- Reset The Current Modelview Matrix
  luaglew.glTranslated(-1.5, 0, -6)     -- Move Left 1.5 Units And Into The Screen 6.0
  luaglew.glRotated(rtri, 0, 1, 0)      -- Rotate The Triangle On The Y axis ( NEW )

  luaglew.glBegin(GL_TRIANGLES)         -- Drawing Using Triangles
    luaglew.glColor3d ( 1, 0, 0)         -- Set The Color To Red
	luaglew.glVertex2d( 0, 1, 0)         -- Move Up One Unit From Center (Top Point)
    luaglew.glColor3d ( 0, 1, 0)         -- Set The Color To Green
    luaglew.glVertex2d(-1,-1, 0)         -- Left And Down One Unit (Bottom Left)
    luaglew.glColor3d ( 0, 0, 1)         -- Set The Color To Blue
    luaglew.glVertex2d( 1,-1, 0)         -- Right And Down One Unit (Bottom Right)
  luaglew.glEnd()                      -- Done Drawing A Triangle

  luaglew.glLoadIdentity()             -- Reset The Current Modelview Matrix
  luaglew.glTranslated(1.5, 0, -7)      -- Move Right And Into The Screen
  luaglew.glRotated(rquad, 1, 0, 0)     -- Rotate The Quad On The X axis ( NEW )

  luaglew.glColor3d (0.5, 0.5, 1)        -- Set The Color To Blue One Time Only
  luaglew.glBegin(GL_QUADS)             -- Draw A Quad
    luaglew.glVertex2d(-1, 1, 0)         -- Top Left
    luaglew.glVertex2d( 1, 1, 0)         -- Top Right
    luaglew.glVertex2d( 1,-1, 0)         -- Bottom Right
    luaglew.glVertex2d(-1,-1, 0)         -- Bottom Left
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
  luaglew.glShadeModel(GL_SMOOTH)            -- Enable Smooth Shading
  luaglew.glClearColor(0, 0, 0, 0.5)        -- Black Background
  luaglew.glClearDepth(1.0)                 -- Depth Buffer Setup
  luaglew.glEnable(GL_DEPTH_TEST)            -- Enables Depth Testing
  luaglew.glDepthFunc(GL_LEQUAL)             -- The Type Of Depth Testing To Do
  luaglew.glEnable(GL_COLOR_MATERIAL)
  luaglew.glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST)

end

dlg = iup.dialog{cnv; title="LuaGL Test Application 04"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation
timer.run = "YES"

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
