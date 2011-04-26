require("iuplua")
require("iupluagl")
require("luaglew")
require("luaglu")

iup.key_open()

t=0
x=0

cnv = iup.glcanvas{buffer="DOUBLE", rastersize = "640x480"}

timer = iup.timer{time=10}

function timer:action_cb()
	t = t + 0.001
	iup.Update(cnv)
end

function cnv:resize_cb(width, height)
	iup.GLMakeCurrent(self)
	luaglew.glViewport(0, 0, width, height);
	luaglew.glClearColor(0, 0, 0, 0);
	luaglew.glClear('GL_COLOR_BUFFER_BIT');

	luaglew.glMatrixMode('GL_PROJECTION');
	luaglew.glLoadIdentity();
	glu.Perspective(65, width / height, 1, 100);

	luaglew.glMatrixMode('GL_MODELVIEW');
	luaglew.glLoadIdentity();
end


function cnv:action(x, y)
	iup.GLMakeCurrent(self)
	-- Clear Screen And Depth Buffer

	luaglew.glClear('GL_COLOR_BUFFER_BIT');
	luaglew.glLoadIdentity()
	glu.LookAt(
		0,  1, 0,   -- Eye-position
		0, 20, 0,   -- View-point
		0,  0, 1    -- Up Vector
	);
	luaglew.glTranslatef(0, 14, 0);
	luaglew.glRotatef(0.3 * x + t * 100, 0, 0, 1);

	luaglew.glBegin('GL_TRIANGLES');
		luaglew.glColor3f(1, 0, 0);
		luaglew.glVertex3f(-5, 0, -4);
		luaglew.glColor3f(0, 1, 0);
		luaglew.glVertex3f(5, 0, -4);
		luaglew.glColor3f(0, 0, 1);
		luaglew.glVertex3f(0, 0, 6);
	luaglew.glEnd();
	iup.GLSwapBuffers(self)
end

function cnv:map_cb()
  iup.GLMakeCurrent(self)
  luaglew.glShadeModel('GL_SMOOTH')
  luaglew.glClearColor(0, 0, 0, 0);
end

dlg = iup.dialog{cnv; title="LuaGL Test Application 01"}

dlg:show()
cnv.rastersize = nil -- reset minimum limitation
timer.run = "YES"


if (not iup.MainLoopLevel or iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
