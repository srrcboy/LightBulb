#ifndef LIGHTBULB_H
#define LIGHTBULB_H

#include <QtWidgets/QWidget>
#include "ui_lightbulb.h"

class LightBulb : public QWidget
{
	Q_OBJECT

public:
	LightBulb(QWidget *parent = 0);
	~LightBulb();

private:
	Ui::LightBulbClass ui;
};

#endif // LIGHTBULB_H
