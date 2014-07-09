#include "lightbulb.h"
#include <QtWidgets/QApplication>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LightBulb w;
	
	//Mat img = imread("pablo-picasso.jpg");
	//namedWindow("image",CV_WINDOW_AUTOSIZE);  
	//imshow("image",img);  
	//cv::waitKey(); 
	w.show();
	return a.exec();
}
