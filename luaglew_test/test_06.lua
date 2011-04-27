require("iuplua")
require("iupluagl")
require("luaglu")
require("loadtga")
luaglew = require("luaglew")

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

  luaglew.glMatrixMode(luaglew.GL_PROJECTION)   -- Select The Projection Matrix
  luaglew.glLoadIdentity()             -- Reset The Projection Matrix

  if height == 0 then           -- Calculate The Aspect Ratio Of The Window
    height = 1
  end

  glu.Perspective(80, width / height, 1, 5000)

  luaglew.glMatrixMode(luaglew.GL_MODELVIEW)    -- Select The Model View Matrix
  luaglew.glLoadIdentity()             -- Reset The Model View Matrix
end

function cnv:action(x, y)
  iup.GLMakeCurrent(self)

  luaglew.glClear(luaglew.GL_COLOR_BUFFER_BIT) -- Clear Screen And Depth Buffer
  luaglew.glClear(luaglew.GL_DEPTH_BUFFER_BIT)

  luaglew.glLoadIdentity()             -- Reset The Current Modelview Matrix
	luaglew.glTranslated(0,0,-5)

	luaglew.glRotated(xrot,1,0,0)
	luaglew.glRotated(yrot,0,1,0)
	luaglew.glRotated(zrot,0,0,1)

  luaglew.glBindTexture(luaglew.GL_TEXTURE_2D, texture[1])

  luaglew.glBegin(luaglew.GL_QUADS)
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
  luaglew.glBindTexture(luaglew.GL_TEXTURE_2D, texture[1])
  luaglew.glTexParameterf(luaglew.GL_TEXTURE_2D,luaglew.GL_TEXTURE_MIN_FILTER,luaglew.GL_LINEAR)
  luaglew.glTexParameterf(luaglew.GL_TEXTURE_2D,luaglew.GL_TEXTURE_MAG_FILTER,luaglew.GL_LINEAR)

  img = LoadTGA('nehe.tga')
  luaglew.glTexImage2D(luaglew.GL_TEXTURE_2D, 0, 4, img.width, img.height, 0, luaglew.GL_RGBA, luaglew.GL_UNSIGNED_BYTE, img)

end

function cnv:map_cb()
  iup.GLMakeCurrent(self)
  luaglew.glEnable(luaglew.GL_TEXTURE_2D)            -- Enable Texture Mapping ( NEW )

  if LoadGLTextures() == false then      -- Jump To Texture Loading Routine ( NEW )
    return false
  end

  luaglew.glShadeModel(luaglew.GL_SMOOTH)            -- Enable Smooth Shading
  luaglew.glClearColor(0, 0, 0, 0.5)        -- Black Background
  luaglew.glClearDepth(1.0)                 -- Depth Buffer Setup
  luaglew.glEnable(luaglew.GL_DEPTH_TEST)            -- Enables Depth Testing
  luaglew.glDepthFunc(luaglew.GL_LEQUAL)             -- The Type Of Depth Testing To Do
  luaglew.glEnable(luaglew.GL_COLOR_MATERIAL)
  luaglew.glHint(luaglew.GL_PERSPECTIVE_CORRECTION_HINT,luaglew.GL_NICEST)
end

dlg = iup.dialog{cnv; title="luaglew test 6"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation
timer.run = "YES"

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
