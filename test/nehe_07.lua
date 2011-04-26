require("iuplua")
require("iupluagl")
require("luaglew")
require("luaglu")
require("LoadTGA")

iup.key_open()

light = false             -- Lighting ON / OFF
lp = false                -- L Pressed?
fp = false                -- F Pressed?

xrot = 0                  -- X Rotation
yrot = 0                  -- Y Rotation
xspeed = 0                -- X Rotation Speed
yspeed = 0                -- Y Rotation Speed
z = -5                    -- Depth Into The Screen

LightAmbient = {0.5, 0.5, 0.5, 1}    -- Ambient Light Values ( NEW )
LightDiffuse = {1, 1, 1, 1}          -- Diffuse Light Values ( NEW )
LightPosition = {0, 0, 2, 1}         -- Light Position ( NEW )

filter = 1                           -- Which Filter To Use
texture = 0                          -- Storage for the textures

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}

timer = iup.timer{time=10}

function timer:action_cb()
	xrot = xrot + xspeed
	yrot = yrot + yspeed
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
	luaglew.glTranslated(0,0,z)           -- Translate Into/Out Of The Screen By z

	luaglew.glRotated(xrot,1,0,0)
	luaglew.glRotated(yrot,0,1,0)

  luaglew.glBindTexture(GL_TEXTURE_2D, texture[filter])

  luaglew.glBegin(GL_QUADS)

    -- Front Face
    luaglew.glNormal3d( 0, 0, 1)                      -- Normal Pointing Towards Viewer
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d(-1, -1,  1)  -- Point 1 (Front)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d( 1, -1,  1)  -- Point 2 (Front)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d( 1,  1,  1)  -- Point 3 (Front)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d(-1,  1,  1)  -- Point 4 (Front)

    -- Back Face
    luaglew.glNormal3d( 0, 0,-1)                      -- Normal Pointing Away From Viewer
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d(-1, -1, -1)  -- Point 1 (Back)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d(-1,  1, -1)  -- Point 2 (Back)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d( 1,  1, -1)  -- Point 3 (Back)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d( 1, -1, -1)  -- Point 4 (Back)

    -- Top Face
    luaglew.glNormal3d( 0, 1, 0)                      -- Normal Pointing Up
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d(-1,  1, -1)  -- Point 1 (Top)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d(-1,  1,  1)  -- Point 2 (Top)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d( 1,  1,  1)  -- Point 3 (Top)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d( 1,  1, -1)  -- Point 4 (Top)

    -- Bottom Face
    luaglew.glNormal3d( 0,-1, 0)                      -- Normal Pointing Down
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d(-1, -1, -1)  -- Point 1 (Bottom)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d( 1, -1, -1)  -- Point 2 (Bottom)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d( 1, -1,  1)  -- Point 3 (Bottom)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d(-1, -1,  1)  -- Point 4 (Bottom)

    -- Right face
    luaglew.glNormal3d( 1, 0, 0)                      -- Normal Pointing Right
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d( 1, -1, -1)  -- Point 1 (Right)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d( 1,  1, -1)  -- Point 2 (Right)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d( 1,  1,  1)  -- Point 3 (Right)
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d( 1, -1,  1)  -- Point 4 (Right)

    -- Left Face
    luaglew.glNormal3d(-1, 0, 0)                      -- Normal Pointing Left
    luaglew.glTexCoord2d(0, 0) luaglew.glVertex3d(-1, -1, -1)  -- Point 1 (Left)
    luaglew.glTexCoord2d(1, 0) luaglew.glVertex3d(-1, -1,  1)  -- Point 2 (Left)
    luaglew.glTexCoord2d(1, 1) luaglew.glVertex3d(-1,  1,  1)  -- Point 3 (Left)
    luaglew.glTexCoord2d(0, 1) luaglew.glVertex3d(-1,  1, -1)  -- Point 4 (Left)

  luaglew.glEnd()

  iup.GLSwapBuffers(self)
end

function cnv:k_any(c)
  if c == iup.K_q or c == iup.K_ESC then
    return iup.CLOSE
  end

  if c == iup.K_F1 then
    if fullscreen then
      fullscreen = false
      dlg.fullscreen = "No"
    else
      fullscreen = true
      dlg.fullscreen = "Yes"
    end
    iup.SetFocus(cnv)
  end

  if c == iup.K_l then   -- L Key Being Pressed ?
    if (light) then
      luaglew.glDisable(GL_LIGHTING)
      light = false
    else
      luaglew.glEnable(GL_LIGHTING)
      light = true
    end
  end

  if c == iup.K_f then   -- F Key Being Pressed ?
    filter = filter + 1
    if filter > 3 then
      filter = 1
    end
  end

  if c == iup.K_PGUP then  z = z - 2 end   -- Is Page Up Being Pressed? If So, Move Into The Screen.
  if c == iup.K_PGDN then  z = z + 2 end   -- Is Page Down Being Pressed? If So, Move Towards The Viewer.

  if c == iup.K_UP then  xspeed = xspeed - 0.01 end -- Is Up Arrow Being Pressed? If So, Decrease xspeed.
  if c == iup.K_DOWN then  xspeed = xspeed + 0.01 end -- Is Down Arrow Being Pressed? If So, Increase xspeed.

  if c == iup.K_LEFT then  yspeed = yspeed - 0.01 end -- Is Left Arrow Being Pressed? If So, Decrease yspeed.
  if c == iup.K_RIGHT then  yspeed = yspeed + 0.01 end -- Is Right Arrow Being Pressed? If So, Increase yspeed.

end

function LoadGLTextures()
  texture = luaglew.glGenTextures(3)   -- Create The Textures

  -- Create Nearest Filtered Texture
  luaglew.glBindTexture(GL_TEXTURE_2D, texture[1])
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST)
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST)

  crate = LoadTGA('crate.tga')

  luaglew.glTexImage2D(GL_TEXTURE_2D, 0, 4, crate.width, crate.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, crate)

  -- Create Linear Filtered Texture
  luaglew.glBindTexture(GL_TEXTURE_2D, texture[2])
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR)
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR)

  luaglew.glTexImage2D(GL_TEXTURE_2D, 0, 4, crate.width, crate.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, crate)

  -- Create MipMapped Texture
  luaglew.glBindTexture(GL_TEXTURE_2D, texture[3])
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_NEAREST)
  luaglew.glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR)

  glu.Build2DMipmaps(crate)

end

function cnv:map_cb()
  iup.GLMakeCurrent(self)
  luaglew.glEnable(GL_TEXTURE_2D)            -- Enable Texture Mapping ( NEW )

  LoadGLTextures()

  luaglew.glShadeModel(GL_SMOOTH)            -- Enable Smooth Shading
  luaglew.glClearColor(0, 0, 0, 0.5)        -- Black Background
  luaglew.glClearDepth(1.0)                 -- Depth Buffer Setup
  luaglew.glEnable(GL_DEPTH_TEST)            -- Enables Depth Testing
  luaglew.glDepthFunc(GL_LEQUAL)             -- The Type Of Depth Testing To Do
  luaglew.glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST)

  luaglew.glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient)        -- Setup The Ambient Light
  luaglew.glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse)        -- Setup The Diffuse Light
  luaglew.glLightfv(GL_LIGHT1, GL_POSITION, LightPosition)      -- Position The Light

  luaglew.glEnable(GL_LIGHT1)

  ret = luaglew.glGetDoublev(GL_CURRENT_RASTER_COLOR)


end

dlg = iup.dialog{cnv; title="LuaGL Test Application 07"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation
timer.run = "YES"

if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
