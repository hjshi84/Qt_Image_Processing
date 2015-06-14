#ifndef QTTEST_H
#define QTTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_qttest.h"
#include <Mylabel.h>


class qttest : public QMainWindow
{
	Q_OBJECT

public: 
	qttest(QWidget *parent = 0);
	~qttest();
	QImage transGSC(QImage temp,int value);
	QImage histogram(QImage temp,int value);
	int OSTU(QImage temp);
	int gethdata(QImage temp);
	int Entropy(QImage temp);
	QString getfile();
	QImage RobertImg(QImage temp);
	QImage PrewittImg(QImage temp);
	QImage SobelImg(QImage temp);
	QImage MedianImg(QImage temp);
	QImage GaussImg(QImage temp);
	QImage ConvolImg(QImage temp);
	double getGauss(int n,double arg,double *a);
	QImage erosion(QImage temp,int value);
	QImage dilation(QImage temp,int value);
	QImage opening(QImage temp,int value);
	QImage closing(QImage temp,int value);
	bool issame(QImage temp,QImage temp1);
	QImage drawerodis(QImage pro,QImage &dis,int value);
	QImage drawskeleton(QImage pro,QImage &dis,int &maxvalue,bool &value);
	QImage drawskeleton2(QImage pic,QImage &dis,QImage &recon,bool &value);
	void skelrecon(QImage &skegray,int &value,QImage &recopic);
	void picolor(QImage &pic,int value);
	void getskel(QImage skebin,QImage& skegray);
	void fastskel(QImage &pic);
	int getmaxvalue(QImage ske);
	QImage reconstruction(QImage mask,QImage marker,bool &stable);
	QImage getMark(QImage proimage,QImage aftimage);
	QImage boundetect(QImage temp,int type);
	QImage graygradient(QImage temp,int type);
	QImage Imgmultiple(QImage a,int times);
	QImage Imgminus(QImage a,QImage b);
	void setstruct(unsigned char gray[3][3],unsigned char binary[3][3]);
	QImage dis2skel(QImage dis);

public slots:
	void on_pushButton_5_clicked();
	void on_pushButton_6_clicked();
	void on_pushButton_7_clicked();
	void on_pushButton_clicked();
	void on_pushButton_4_clicked();
	void updatepicture3();
	void setostu();
	void setentropy();
	void on_pushButton_2_clicked();
	void OnNotify(QImage a,QImage b);
	void OnNotify(QImage a);
	void setedgedect();
	void on_pushButton_3_clicked();
	void basicoper();
	void advoper();
	void setboundAgradient();
	void setstruct();
	void convolop();
signals:
	void stop();

private:
	Ui::qttestClass ui;
	QImage primage;
	QImage primage2;
	QImage primage3;
	QImage primage4;
	Mylabel *mylabel;
	int hdata[256];
	struct Point{
	int x;
	int y;
	};
	//…Ë÷√¿‡
	unsigned char graystruct[3][3];
	unsigned char binarystruct[3][3];
	unsigned char convolstruct[3][3];
	unsigned char gaussstruct;
	int boundAgradient;
};

#endif // QTTEST_H
