LightBulb
=========

Use VS2012&amp;Qt5.3.1&amp;Opencv2.4.9 to build the project which take a HDR photo of a LED bulb and get the result.

Download pages:
VS2012: http://www.microsoft.com/zh-cn/download/details.aspx?id=30678
	File Name: [VS2012_ULT_chs.iso]

Qt: http://qt-project.org/downloads
	Qt 5.3.1 for Windows 32-bit (VS 2012, OpenGL, 553 MB)
	File Name: [qt-opensource-windows-x86-msvc2012_opengl-5.3.1.exe]
	Visual Studio Add-in 1.2.3 for Qt5
	File Name: [qt-vs-addin-1.2.3-opensource.exe]

Opencv: http://opencv.org/
	Opencv 2.4.9
	File Name: [opencv-2.4.9.exe]

Visual Studio Add-in have to be installed after VS2012 was installed.

我英文编不下去了。。。
VS2012和Qt安装的时候直接下一步就行。
Opencv安装的时候其实是一个自解压的压缩包，我是解压到C盘根目录下，如果解压到自定义的目录下，记住这个目录在哪里。

打开Visual Studio，装好Visual Studio Add-in就应该在菜单栏里面有个QT5的选项，点QT5-->Qt Options弹出一个对话框。
左边没有内容的话点Add，在Path中点到Qt安装的目录，我是C:\Qt\Qt5.3.1\5.3\msvc2012_opengl，Version name会自动填上，单击确定，然后再点确定就行。

下面设置Opencv。
我解压到了C盘根目录下面。右击计算机-->属性-->高级系统设置-->环境变量，弹出对话框的下部分系统变量中找到"Path"，双击，在结尾加上";C:\opencv\build\x86\vc11\bin"双引号不要加进去，不要忘记路径最左边的英文";"如果opencv在解压的时候解压到了不同的地方就改成相应的路径。

project中也有相应设置，不过我已经做好了你们直接打开应该就能用了。

项目的使用方式：双击LightBulb.sln即可。运行时按F5就行。Github使用方式就不在这里写了。不太懂的话群上说。
