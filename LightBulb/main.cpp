#include "lightbulb.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LightBulb w;
	w.show();
	return a.exec();
}
