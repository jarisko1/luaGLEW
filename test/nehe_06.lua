require("iuplua")
require("iupluagl")
require("luaglew")
require("luaglu")
require("LoadTGA")

iup.key_open()

xrot = 0
yrot = 0
zrot = 0
texture = 0

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}

timer = iup.timer{time=100}

function timer:action_cb()
	xrot = xrot + 0.3
	yrot = yrot + 0.2
	zrot = zrot + 0.4
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
	luaglew.glTranslated(0,0,-5)

	luaglew.glRotated(xrot,1,0,0)
	luaglew.glRotated(yrot,0,1,0)
	luaglew.glRotated(zrot,0,0,1)

  luaglew.glBindTexture(GL_TEXTURE_2D, texture[1])

  luaglew.glBegin(GL_QUADS)
    -- Front Face
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d(-1, -1,  1)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d( 1, -1,  1)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d( 1,  1,  1)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d(-1,  1,  1)
    -- Back Face
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d(-1, -1, -1)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d(-1,  1, -1)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d( 1,  1, -1)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d( 1, -1, -1)
    -- Top Face
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d(-1,  1, -1)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d(-1,  1,  1)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d( 1,  1,  1)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d( 1,  1, -1)
    -- Bottom Face
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d(-1, -1, -1)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d( 1, -1, -1)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d( 1, -1,  1)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d(-1, -1,  1)
    -- Right face
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d( 1, -1, -1)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d( 1,  1, -1)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d( 1,  1,  1)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d( 1, -1,  1)
    -- Left Face
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d(-1, -1, -1)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d(-1, -1,  1)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d(-1,  1,  1)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d(-1,  1, -1)
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

function LoadGLTextures()
  texture = luaglew.glGenTextures(1)  -- Create The Texture

  -- Typical Texture Generation Using Data From The Bitmap
  luaglew.glBindTexture(GL_TEXTURE_2D, texture[1])
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR)
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR)

  img = LoadTGA('nehe.tga')
  luaglew.glTexImage2D(GL_TEXTURE_2D, 0, 4, img.width, img.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, img)

end

function cnv:map_cb()
  iup.GLMakeCurrent(self)
  luaglew.glEnable(GL_TEXTURE_2D)            -- Enable Texture Mapping ( NEW )

  if LoadGLTextures() == false then      -- Jump To Texture Loading Routine ( NEW )
    return false
  end

  luaglew.glShadeModel(GL_SMOOTH)            -- Enable Smooth Shading
  luaglew.glClearColor(0, 0, 0, 0.5)        -- Black Background
  luaglew.glClearDepth(1.0)                 -- Depth Buffer Setup
  luaglew.glEnable(GL_DEPTH_TEST)            -- Enables Depth Testing
  luaglew.glDepthFunc(GL_LEQUAL)             -- The Type Of Depth Testing To Do
  luaglew.glEnable(GL_COLOR_MATERIAL)
  luaglew.glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST)
end

dlg = iup.dialog{cnv; title="LuaGL Test Application 06"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation
timer.run = "YES"

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
