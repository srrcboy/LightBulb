#ifndef LIGHTBULB_H
#define LIGHTBULB_H

#include <QtWidgets/QWidget>
#include "ui_lightbulb.h"
#include <QWidget>
#include <QImage>
#include <QFileDialog>
#include <QTimer>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

//namespace Ui {
//class Widget;
//}

class LightBulb : public QWidget
{
	Q_OBJECT

public:
	LightBulb(QWidget *parent = 0);
	~LightBulb();

private slots:
	void on_openButton_clicked();
	//void displayMat(const cv::Mat &image);
    void displayMat(Mat image);
	//double CalcMean(Mat image);

private:
	Ui::LightBulbClass ui;
	cv::Mat image;
};

#endif // LIGHTBULB_H
