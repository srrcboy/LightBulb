#include "lightbulb.h"
#include <qdebug.h>
LightBulb::LightBulb(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

LightBulb::~LightBulb()
{

}

void LightBulb::on_openButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"),
                                ".",tr("Image Files (*.png *.jpg *.bmp)"));
    qDebug()<<"filenames:"<<fileName;
    image = cv::imread(fileName.toLatin1().data());
//    cv::namedWindow((fileName.toAscii().data()),CV_WINDOW_AUTOSIZE);    //display use a new window
//    cv::imshow((fileName.toAscii().data()), image);
    displayMat(image);                      //display by the label
}

//void Widget::displayMat(const cv::Mat &image)
void LightBulb::displayMat(Mat image)
{
    Mat rgb;
    QImage img;
    if(image.channels()==3)
    {
        //cvt Mat BGR 2 QImage RGB
        cvtColor(image,rgb,CV_BGR2RGB);
        img =QImage((const unsigned char*)(rgb.data),
                    rgb.cols,rgb.rows,
                    rgb.cols*rgb.channels(),
                    QImage::Format_RGB888);
    }
    else
    {
        img =QImage((const unsigned char*)(image.data),
                    image.cols,image.rows,
                    image.cols*image.channels(),
                    QImage::Format_RGB888);
    }

    ui.imagelabel->setPixmap(QPixmap::fromImage(img));
    ui.imagelabel->resize(ui.imagelabel->pixmap()->size());
}