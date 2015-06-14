#include "qttest.h"
#include <stdio.h>
#include <QFileDialog.h>
#include <qmessagebox.h>
#include <qpainter.h>
#include <math.h>
#include <mythread.h>
#include <qmap.h>
#include <Mylabel.h>

qttest::qttest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	QPalette p = palette();
	p.setColor(QPalette::Window,QColor(193,210,240));
    setPalette(p);

	//ui.tabWidget->setStyleSheet("QTabWidget:pane {border-top:0px solid #e8f3f9;background: blue; }QTabBar::tab:pane {width: 38px;height: 130px;background: transparent;}QTabBar::tab:hover {border-image: url(:/images/cloud_source_hovering.png);width: 38px;height: 130px;background: transparent;position: absolute;}QTabBar::tab:selected {border-image: url(:/images/cloud_source.png);width: 38px;height: 130px;background: transparent;position: absolute;}QTabBar::tab:!selected {border: 0px solid black;width: 38px;height: 130px;background: transparent;position: absolute;position: absolute;}");
	memset(graystruct,1,sizeof(graystruct));
	memset(binarystruct,1,sizeof(binarystruct));
	memset(convolstruct,2,sizeof(convolstruct));

	boundAgradient=1;
	gaussstruct=3;

	ui.textEdit->setText("1");
	ui.textEdit_2->setText("1");
	ui.textEdit_3->setText("1");
	ui.textEdit_6->setText("1");
	ui.textEdit_5->setText("1");
	ui.textEdit_4->setText("1");
	ui.textEdit_9->setText("1");
	ui.textEdit_8->setText("1");
	ui.textEdit_7->setText("1");

	ui.textEdit_17->setText("1");
	ui.textEdit_14->setText("1");
	ui.textEdit_10->setText("1");
	ui.textEdit_13->setText("1");
	ui.textEdit_11->setText("1");
	ui.textEdit_12->setText("1");
	ui.textEdit_16->setText("1");
	ui.textEdit_18->setText("1");
	ui.textEdit_15->setText("1");
	ui.textEdit_19->setText("3");

	ui.textEdit_20->setText("2");
	ui.textEdit_21->setText("2");
	ui.textEdit_22->setText("2");
	ui.textEdit_23->setText("2");
	ui.textEdit_24->setText("2");
	ui.textEdit_25->setText("2");
	ui.textEdit_26->setText("2");
	ui.textEdit_27->setText("2");
	ui.textEdit_28->setText("2");

	mylabel = new Mylabel(ui.tab_4);
    mylabel->setObjectName(QStringLiteral("label_13"));
    mylabel->setGeometry(QRect(160, 0, 581, 461));
    mylabel->setAlignment(Qt::AlignCenter);
    mylabel->setWordWrap(false);
    mylabel->setMargin(0);
	mylabel->setText("显示区域");
	//mylabel->setText("");

	ui.radioButton_3->setVisible(false);
	ui.radioButton_18->setVisible(false);

	connect(ui.pushButton_2,SIGNAL(clicked()),ui.label, SLOT(on_pushButton_2_clicked()));
	connect(ui.pushButton, SIGNAL(clicked()), ui.label, SLOT(on_pushButton_clicked()));
	connect(ui.pushButton_3,SIGNAL(clicked()),ui.label,SLOT(on_pushButton_3_clicked()));
	connect(ui.pushButton_4,SIGNAL(clicked()),ui.label,SLOT(on_pushButton_4_clicked()));
	connect(ui.pushButton_5,SIGNAL(clicked()),ui.label,SLOT(on_pushButton_5_clicked()));
	connect(ui.pushButton_6,SIGNAL(clicked()),ui.label,SLOT(on_pushButton_6_clicked()));
	connect(ui.pushButton_7,SIGNAL(clicked()),ui.label,SLOT(on_pushButton_7_clicked()));

	connect(ui.horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(updatepicture3()));
	connect(ui.radioButton,SIGNAL(pressed()),this,SLOT(setostu()));
	connect(ui.radioButton_2,SIGNAL(pressed()),this,SLOT(setentropy()));

	connect(ui.radioButton_4,SIGNAL(clicked()),this,SLOT(setedgedect()));
	connect(ui.radioButton_5,SIGNAL(clicked()),this,SLOT(setedgedect()));
	connect(ui.radioButton_6,SIGNAL(clicked()),this,SLOT(setedgedect()));
	connect(ui.radioButton_7,SIGNAL(clicked()),this,SLOT(setedgedect()));
	connect(ui.radioButton_8,SIGNAL(clicked()),this,SLOT(setedgedect()));

	connect(ui.radioButton_12,SIGNAL(clicked()),this,SLOT(basicoper()));
	connect(ui.radioButton_13,SIGNAL(clicked()),this,SLOT(basicoper()));
	connect(ui.radioButton_14,SIGNAL(clicked()),this,SLOT(basicoper()));
	connect(ui.radioButton_15,SIGNAL(clicked()),this,SLOT(basicoper()));

	connect(ui.radioButton_16,SIGNAL(clicked()),this,SLOT(advoper()));
	connect(ui.radioButton_17,SIGNAL(clicked()),this,SLOT(advoper()));

	connect(ui.radioButton_9,SIGNAL(clicked()),this,SLOT(setboundAgradient()));
	connect(ui.radioButton_10,SIGNAL(clicked()),this,SLOT(setboundAgradient()));
	connect(ui.radioButton_11,SIGNAL(clicked()),this,SLOT(setboundAgradient()));

	connect(ui.textEdit,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_10,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_11,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_12,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_13,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_14,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_15,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_16,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_17,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_18,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_2,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_3,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_4,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_5,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_6,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_7,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_8,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_9,SIGNAL(textChanged()),this,SLOT(setstruct()));

	connect(ui.textEdit_19,SIGNAL(textChanged()),this,SLOT(setstruct()));

	connect(ui.textEdit_20,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_21,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_22,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_23,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_24,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_25,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_26,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_27,SIGNAL(textChanged()),this,SLOT(setstruct()));
	connect(ui.textEdit_28,SIGNAL(textChanged()),this,SLOT(setstruct()));

	connect(ui.checkBox_2,SIGNAL(clicked()),this,SLOT(convolop()));
}

void qttest::on_pushButton_clicked()
{
	emit stop();

	ui.label->setScaledContents(true);
	ui.label_2->setScaledContents(true);
	ui.label_3->setScaledContents(true);
	ui.label_4->setScaledContents(true);
	QString filename=getfile();
	if (filename=="") return;
	QImage image(filename);
	primage=image;

	QPixmap *pixmap=new QPixmap();	
	pixmap->convertFromImage(image);
	ui.label->setPixmap(*pixmap);
	ui.label->update();
	pixmap->~QPixmap();

	QPixmap *pixmap1=new QPixmap();	
	pixmap1->convertFromImage(transGSC(image,-1));
	ui.label_2->setPixmap(*pixmap1);
	ui.label_2->update();
	pixmap1->~QPixmap();

	QPixmap *pixmap2=new QPixmap();
	pixmap2->convertFromImage(transGSC(image,ui.horizontalSlider->value()));
	ui.label_3->setPixmap(*pixmap2);
	ui.label_3->update();
	pixmap2->~QPixmap();

	QPixmap *pixmap3=new QPixmap();
	pixmap3->convertFromImage(histogram(image,ui.horizontalSlider->value()));
	ui.label_4->setPixmap(*pixmap3);
	ui.label_4->update();
	pixmap3->~QPixmap();
}

QString qttest::getfile(){
	QString filename = QFileDialog::getOpenFileName(
   this,
   "Open Picture",
   QDir::currentPath(),
   "Document files (*.bmp *.jpg *.png *.tif)");
	if(filename.length() == 0) { 
                QMessageBox::information(NULL, tr("msg"), tr("You didn't select any picture.")); 
				return "";
        } else { 
                QMessageBox::information(NULL, tr("msg"), tr("You selected ") + filename); 
				
        } 
	return filename;
}

QImage qttest::transGSC(QImage temp,int values)
{
	QSize size=temp.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	int width = size.width();
	int height = size.height();
	for(int i = 0; i < size.width(); i++)
	{
		for(int j=0;j<size.height();j++)
		{
			QRgb pixel=temp.pixel(i,j);
			int r=qRed(pixel)*0.3;
			int g=qGreen(pixel)*0.59;
			int b=qBlue(pixel)*0.11;
			int rgb=r+g+b;
			//二值化用
			if((values!=-1)&&(values>-1)&&(values<256))
			{
				if (rgb>values)
				{
					rgb=255;
				}
				else
				{
					rgb=0;
				}
			}
			binaryImage.setPixel(i,j,qRgb(rgb,rgb,rgb));
		}
	}
	return binaryImage;
}

void qttest::updatepicture3()
{
	ui.radioButton_3->setChecked(true);
	QPixmap *pixmaps=new QPixmap();	
	int a=ui.horizontalSlider->value();
	pixmaps->convertFromImage(transGSC(primage,a));
	ui.label_3->setPixmap(*pixmaps);
	pixmaps->~QPixmap();

	QPixmap *pixmap=new QPixmap();
	pixmap->convertFromImage(histogram(primage,ui.horizontalSlider->value()));
	ui.label_4->setPixmap(*pixmap);
	pixmap->~QPixmap();
}

QImage qttest::histogram(QImage temp,int value)
{
	if (!((value<256)&(value>-1))) value=-1;

	QSize ss(266,110);
	QImage binaryImage(ss, QImage::Format_RGB32);
	picolor(binaryImage,255);
	float htgdata[256]={0};
	int total=0;
	total= gethdata(temp);
	float max=0;
	for(int i=0;i<256;i++)
	{
		htgdata[i]=(float)hdata[i]/(float)total;
		if (max<htgdata[i]) max=htgdata[i];
	}

	//QPixmap pix(new QSize(256,100));//以此为参数创建一位图变量
	QPainter painter(&binaryImage);

	painter.drawLine(4,106,4,4);
	painter.drawLine(4,106,261,106);
	if(value!=-1){
		painter.drawLine(value+5,105,value+5,105-htgdata[value]*100/max);
		QString a;a.setNum(hdata[value]);
		if (((105-htgdata[value]*100/max)>15)&(value>a.length()*5)&(value<256-a.length()*5))
		{painter.drawText(value,100-htgdata[value]*100/max,a);}
			else if (((105-htgdata[value]*100/max)>15)&(value>a.length()*5)&(value>256-a.length()*5))
		{painter.drawText(value-a.length()*5,110-htgdata[value]*100/max,a);}
			else if (((105-htgdata[value]*100/max)>15)&(value<a.length()*5)&(value<256-a.length()*5))
		{painter.drawText(value+a.length()*2,100-htgdata[value]*100/max,a);}
		else if (((105-htgdata[value]*100/max)<15)&(value>a.length()*5)&(value<256-a.length()*5))
		{painter.drawText(value,110-htgdata[value]*100/max,a);}
			else if (((105-htgdata[value]*100/max)<15)&(value>a.length()*5)&(value>256-a.length()*5))
		{painter.drawText(value-a.length()*5,110-htgdata[value]*100/max,a);}
			else if (((105-htgdata[value]*100/max)<15)&(value<a.length()*5)&(value<256-a.length()*5))
		{painter.drawText(value+a.length()*2,110-htgdata[value]*100/max,a);}
	}
	painter.setRenderHint(QPainter::Antialiasing, true); 
    QLinearGradient linearGradient(133, 110, 133, 0); 
    linearGradient.setColorAt(0.1, Qt::green); 
    linearGradient.setColorAt(0.5, Qt::yellow); 
    linearGradient.setColorAt(1.0, Qt::black); 
	painter.setPen(QPen(QBrush(linearGradient), 1));
	//画XYZ轴
	for(int i=0;i<256;i++)//画直方图
	{
		painter.drawLine(i+5,105,i+5,105-htgdata[i]*100/max);
	}

	
	return binaryImage;
}

int qttest::gethdata(QImage temp){
	int total=0;
	QSize size=temp.size();
	memset(hdata,0,256*sizeof(int));
	for(int i = 0; i < size.width(); i++)
	{
		for(int j=0;j<size.height();j++)
		{
			total++;
			QRgb pixel=temp.pixel(i,j);
			int r=qRed(pixel)*0.3;
			int g=qGreen(pixel)*0.59;
			int b=qBlue(pixel)*0.11;
			int rgb=r+g+b;
			hdata[rgb]++;
		}
	}
	return total;
}

int qttest::OSTU(QImage temp){
	gethdata(temp);
	unsigned int ip1, ip2, is1, is2=0; 
	double w0, w1=0; 
	double mean1, mean2=0;
	double g[256]={0}; 
	double gmax=0; 
	unsigned char th=0; 
	int sum=0;
	for(int i=0;i<256;i++)
	{
		sum+=hdata[i];
	}

	for(int i=0;i<256;i++)
	{
		ip1=0; ip2=0; is1=0; is2=0;
		w0=0; w1=0;

		for(int j=0; j<i; j++)
		{
			ip1+=hdata[j]*j;
			is1+=hdata[j];
		}
		if (is1==0) continue;
		mean1=ip1/is1;
		w0=double(is1)/double(sum);
		for (int j=i; j<256; j++)
		{
			ip2+=hdata[j]*j; is2+=hdata[j];
		}
		if (is2==0) break;
		mean2=ip2/is2;
		w1=1-w0;
		g[i]=w0*w1*(mean1-mean2)*(mean1-mean2);
	}
	gmax=g[0];
	for(int i=0;i<256;i++){
		if(gmax<g[i])
		{
			gmax=g[i];
			th=i;
		}
	}
	return th;
}

int qttest::Entropy(QImage temp){
	int total=gethdata(temp);
	double h[256]={0};
	double hb=0,hw=0;
	int th=0,totalleft=0,totalright=0;
	for(int i=0;i<256;i++)
	{
		for(int j=0;j<i;j++)
		{
			totalleft+=hdata[j];
		}
		if (totalleft==0) continue;
		totalright=total-totalleft;
		for(int j=0;j<i;j++)
		{
			if (hdata[j]==0) continue;
			hb+=(-(double)hdata[j]/(double)totalleft)*(log((double)hdata[j]/(double)totalleft));
		}

		for(int j=i;j<256;j++)
		{
			if (hdata[j]==0) continue;
			hw+=(-(double)hdata[j]/(double)totalright)*(log((double)hdata[j]/(double)totalright));
		}

		h[i]=hb+hw;
		hb=0;
		hw=0;
		totalleft=0;
		totalright=0;
	}
	double hmax=h[0];
	for(int i=0;i<256;i++){
		if(hmax<h[i])
		{
			hmax=h[i];
			th=i;
		}
	}
	return th;
}

void qttest::setostu(){
	ui.horizontalSlider->setValue(OSTU(primage));
}

void qttest::setentropy(){
	ui.horizontalSlider->setValue(Entropy(primage));
}

void qttest::on_pushButton_2_clicked(){

	emit stop();

	ui.label_5->setScaledContents(true);
	ui.label_6->setScaledContents(true);
	ui.label_7->setScaledContents(true);
	ui.label_8->setScaledContents(true);

	QString filename=getfile();
	if (filename=="") return;
	QImage image(filename);
	primage2=image;

	
	/*mythread *my=new mythread(primage2,0);
	connect(my,SIGNAL(notify(QImage,QImage)),this,SLOT(OnNotify(QImage,QImage)));  
	connect(this,SIGNAL(stop()),my,SLOT(stop()));
	my->start();*/

	QPixmap *pixmap3=new QPixmap();
	pixmap3->convertFromImage(primage2);
	ui.label_6->setPixmap(*pixmap3);
	ui.label_6->update();
	pixmap3->~QPixmap();

	QPixmap *pixmap=new QPixmap();
	pixmap->convertFromImage(RobertImg(primage2));
	ui.label_5->setPixmap(*pixmap);
	ui.label_5->update();
	pixmap->~QPixmap();

	QPixmap *pixmap1=new QPixmap();
	pixmap1->convertFromImage(GaussImg(primage2));
	ui.label_7->setPixmap(*pixmap1);
	ui.label_7->update();
	pixmap1->~QPixmap();

	QPixmap *pixmap2=new QPixmap();
	pixmap2->convertFromImage(RobertImg(GaussImg(primage2)));
	ui.label_8->setPixmap(*pixmap2);
	ui.label_8->update();
	pixmap2->~QPixmap();
}

void qttest::setedgedect(){
	emit stop();
	QPixmap *pixmap1=new QPixmap();
	QPixmap *pixmap2=new QPixmap();
	QPixmap *pixmap3=new QPixmap();
	int result=0;

	if (ui.radioButton_4->isChecked()==true) result=1;
	if (ui.radioButton_5->isChecked()==true) result=2;
	if (ui.radioButton_6->isChecked()==true) result=3;

	if (ui.radioButton_7->isChecked()==true) result=result*1;
	if (ui.radioButton_8->isChecked()==true) result=result*4;

	switch (result){
	case 1:
		
		pixmap1->convertFromImage(RobertImg(primage2));
		ui.label_5->setPixmap(*pixmap1);
		ui.label_5->update();
		pixmap1->~QPixmap();

		
		pixmap2->convertFromImage(GaussImg(primage2));
		ui.label_7->setPixmap(*pixmap2);
		ui.label_7->update();
		pixmap2->~QPixmap();

		pixmap3->convertFromImage(RobertImg(GaussImg(primage2)));
		ui.label_8->setPixmap(*pixmap3);
		ui.label_8->update();
		pixmap3->~QPixmap();
		break;
	case 2:

		pixmap1->convertFromImage(PrewittImg(primage2));
		ui.label_5->setPixmap(*pixmap1);
		ui.label_5->update();
		pixmap1->~QPixmap();

		pixmap2->convertFromImage(GaussImg(primage2));
		ui.label_7->setPixmap(*pixmap2);
		ui.label_7->update();
		pixmap2->~QPixmap();

		pixmap3->convertFromImage(PrewittImg(GaussImg(primage2)));
		ui.label_8->setPixmap(*pixmap3);
		ui.label_8->update();
		pixmap3->~QPixmap();
		break;
	case 3:
		pixmap1->convertFromImage(SobelImg(primage2));
		ui.label_5->setPixmap(*pixmap1);
		ui.label_5->update();
		pixmap1->~QPixmap();

		pixmap2->convertFromImage(GaussImg(primage2));
		ui.label_7->setPixmap(*pixmap2);
		ui.label_7->update();
		pixmap2->~QPixmap();

		pixmap3->convertFromImage(SobelImg(GaussImg(primage2)));
		ui.label_8->setPixmap(*pixmap3);
		ui.label_8->update();
		pixmap3->~QPixmap();
		break;
	case 4:
		pixmap1->convertFromImage(RobertImg(primage2));
		ui.label_5->setPixmap(*pixmap1);
		ui.label_5->update();
		pixmap1->~QPixmap();

		pixmap2->convertFromImage(MedianImg(primage2));
		ui.label_7->setPixmap(*pixmap2);
		ui.label_7->update();
		pixmap2->~QPixmap();

		pixmap3->convertFromImage(RobertImg(MedianImg(primage2)));
		ui.label_8->setPixmap(*pixmap3);
		ui.label_8->update();
		pixmap3->~QPixmap();
		break;
	case 8:
		pixmap1->convertFromImage(PrewittImg(primage2));
		ui.label_5->setPixmap(*pixmap1);
		ui.label_5->update();
		pixmap1->~QPixmap();

		pixmap2->convertFromImage(MedianImg(primage2));
		ui.label_7->setPixmap(*pixmap2);
		ui.label_7->update();
		pixmap2->~QPixmap();

		pixmap3->convertFromImage(PrewittImg(MedianImg(primage2)));
		ui.label_8->setPixmap(*pixmap3);
		ui.label_8->update();
		pixmap3->~QPixmap();
		break;
	case 12:
		pixmap1->convertFromImage(SobelImg(primage2));
		ui.label_5->setPixmap(*pixmap1);
		ui.label_5->update();
		pixmap1->~QPixmap();

		pixmap2->convertFromImage(MedianImg(primage2));
		ui.label_7->setPixmap(*pixmap2);
		ui.label_7->update();
		pixmap2->~QPixmap();

		pixmap3->convertFromImage(SobelImg(MedianImg(primage2)));
		ui.label_8->setPixmap(*pixmap3);
		ui.label_8->update();
		pixmap3->~QPixmap();
		break;
	}

}

void qttest::OnNotify(QImage a,QImage b){
	QPixmap *pixmap=new QPixmap();
	pixmap->convertFromImage(a);
	ui.label_11->setPixmap(*pixmap);
	ui.label_11->update();
	pixmap->~QPixmap();

	QPixmap *pixmap1=new QPixmap();
	pixmap1->convertFromImage(b);
	ui.label_12->setPixmap(*pixmap1);
	ui.label_12->update();
	pixmap1->~QPixmap();
}//消息收到的回调

QImage qttest::RobertImg(QImage temp){
	QImage pic=transGSC(temp,-1);
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	int ar;
	for(int j = 0;j<size.height()-1;++j)
	{
		for(int i = 0; i < size.width() -1; ++i)
		{
			ar=sqrt((double)(qRed(pic.pixel(i+1,j+1))-qRed(pic.pixel(i,j)))*(qRed(pic.pixel(i+1,j+1))-qRed(pic.pixel(i,j)))
				+(qRed(pic.pixel(i,j+1))-qRed(pic.pixel(i+1,j)))*(qRed(pic.pixel(i,j+1))-qRed(pic.pixel(i+1,j))));
			ar>255?255:ar;
			QRgb newpixel=qRgb(ar,ar,ar);
			binaryImage.setPixel(i,j,newpixel);
		}
	}
	
	return binaryImage;
}

QImage qttest::PrewittImg(QImage temp){
	QImage pic=transGSC(temp,-1);
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	int ar=0,dx=0,dy=0;
	for(int j = 1;j<size.height()-1;++j)
	{
		for(int i = 1; i < size.width() -1; ++i)
		{
			dx=qRed(pic.pixel(i-1,j+1))+qRed(pic.pixel(i,j+1))+qRed(pic.pixel(i+1,j+1))-(qRed(pic.pixel(i-1,j-1))+qRed(pic.pixel(i,j-1))+qRed(pic.pixel(i+1,j-1)));
			dy=qRed(pic.pixel(i+1,j-1))+qRed(pic.pixel(i+1,j))+qRed(pic.pixel(i+1,j+1))-(qRed(pic.pixel(i-1,j-1))+qRed(pic.pixel(i-1,j))+qRed(pic.pixel(i-1,j+1)));
			ar=sqrt((double)(dx*dx
				+dy*dy));
			ar>255?255:ar;
			ar<0?0:ar;
			QRgb newpixel=qRgb(ar,ar,ar);
			binaryImage.setPixel(i,j,newpixel);
		}
	}
	return binaryImage;
}
	
QImage qttest::SobelImg(QImage temp){
	QImage pic=transGSC(temp,-1);
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	int ar=0,dx=0,dy=0;
	for(int j = 1;j<size.height()-1;++j)
	{
		for(int i = 1; i < size.width() -1; ++i)
		{
			dx=qRed(pic.pixel(i-1,j+1))+2*qRed(pic.pixel(i,j+1))+qRed(pic.pixel(i+1,j+1))-(qRed(pic.pixel(i-1,j-1))+2*qRed(pic.pixel(i,j-1))+qRed(pic.pixel(i+1,j-1)));
			dy=qRed(pic.pixel(i+1,j-1))+2*qRed(pic.pixel(i+1,j))+qRed(pic.pixel(i+1,j+1))-(qRed(pic.pixel(i-1,j-1))+2*qRed(pic.pixel(i-1,j))+qRed(pic.pixel(i-1,j+1)));
			ar=sqrt((double)(dx*dx
				+dy*dy));
			ar>255?255:ar;
			ar<0?0:ar;
			QRgb newpixel=qRgb(ar,ar,ar);
			binaryImage.setPixel(i,j,newpixel);
		}
	}
	return binaryImage;
}

QImage qttest::ConvolImg(QImage temp){
	QImage pic=transGSC(temp,-1);
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	int ar;
	int m,n;
	int total=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			total+=convolstruct[i][j];
		}

	for(int j = 0;j<size.height()-1;++j)
	{
		for(int i = 0; i < size.width() -1; ++i)
		{
			ar=0;
			for(m=-1;m<2;m++)
				for(n=-1;n<2;n++){
					ar+=qRed(pic.pixel(i-n,j+m))*convolstruct[m+1][n+1];
				}
			ar=ar/total;
			ar>255?255:ar;
			QRgb newpixel=qRgb(ar,ar,ar);
			binaryImage.setPixel(i,j,newpixel);
		}
	}
	
	return binaryImage;
}

QImage qttest::MedianImg(QImage temp){
	QImage pic=transGSC(temp,-1);
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	int ar=0;
	for(int j = 1;j<size.height()-1;++j)
	{
		for(int i = 1; i < size.width() -1; ++i)
		{
			int tr[9]={qRed(pic.pixel(i-1,j-1)),qRed(pic.pixel(i-1,j+1)),qRed(pic.pixel(i-1,j)),qRed(pic.pixel(i,j-1)),qRed(pic.pixel(i,j)),qRed(pic.pixel(i,j+1))
				,qRed(pic.pixel(i+1,j-1)),qRed(pic.pixel(i+1,j)),qRed(pic.pixel(i+1,j+1))};
			for (int m = 0; m < 5; ++m)  
            {  
                int min = m;  
                for (int n = m + 1; n < 9; ++n)  
                    if (tr[n] < tr[min])  
                        min = n;  
                unsigned char temps = tr[m];  
                tr[m] = tr[min];  
                tr[min] = temps;  
            }  
			ar=tr[4];
			ar>255?255:ar;
			QRgb newpixel=qRgb(ar,ar,ar);
			binaryImage.setPixel(i,j,newpixel);
		}
	}
	return binaryImage;
}

QImage qttest::GaussImg(QImage temp){
		int numb=gaussstruct;
		if (numb%2==0) numb++;
		double *a=new double[numb*numb];
		double total;
		total=getGauss(numb,1/sqrt((double)2),a);
		
		QImage pic=transGSC(temp,-1);
		QSize size=pic.size();
		QImage binaryImage(size, QImage::Format_RGB32);
		double ar=0;
		for(int j = (1+numb)/2-1;j<size.height()-(1+numb)/2+1;++j)
		{
			for(int i = (1+numb)/2-1; i < size.width() -(1+numb)/2+1; ++i)
			{
				for(int n=-(1+numb)/2+1;n<=1+numb/2-1;n++)
				{
					for(int m=-(1+numb)/2+1;m<=1+numb/2-1;m++)
					{
						ar+=qRed(pic.pixel(i+m,j+n))*(*(a +( m+(1+numb)/2-1+(n+(1+numb)/2-1)*3 ) ) );
					}
				}
				//br=qRed(pic.pixel(i-1,j-1))*(*a)+qRed(pic.pixel(i-1,j+1))*(*(a+1))+qRed(pic.pixel(i-1,j))*(*(a+2))+qRed(pic.pixel(i,j-1))*(*(a+3))+qRed(pic.pixel(i,j))*(*(a+4))+qRed(pic.pixel(i,j+1))*(*(a+5))
				//	+qRed(pic.pixel(i+1,j-1))*(*(a+6))+qRed(pic.pixel(i+1,j))*(*(a+7))+qRed(pic.pixel(i+1,j+1))*(*(a+8));
				ar=ar/total;
				ar>255?255:ar;
				QRgb newpixel=qRgb((int)ar,(int)ar,(int)ar);
				ar=0;
				binaryImage.setPixel(i,j,newpixel);
			}
		}
	return binaryImage;
}

double qttest::getGauss(int n,double arg,double *a){
	if (n%2==0) n++;
	int mid=(1+n)/2;
	double total=0; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			double aa=(double)(1.0/(2*3.1416*arg*arg));
			double bb=-((double)((i-mid+1)*(i-mid+1)+(j-mid+1)*(j-mid+1))/(double)(2*arg*arg));
			//double cc=aa*exp(bb);
			total+=aa*exp(bb);
			*(a+j+i*n)=aa*exp(bb);
		}
	}

	return total;
}

void qttest::on_pushButton_3_clicked(){
	emit stop();

	ui.label_10->setScaledContents(true);
	ui.label_9->setScaledContents(true);
	ui.label_11->setScaledContents(true);
	ui.label_12->setScaledContents(true);

	ui.radioButton_18->setChecked(true);

	QString filename=getfile();
	if (filename=="") return;
	QImage image(filename);
	//primage3=transGSC(image,128);
	primage3=image;

	QPixmap *pixmap3=new QPixmap();
	pixmap3->convertFromImage(transGSC(primage3,-1));
	ui.label_10->setPixmap(*pixmap3);
	ui.label_10->update();
	pixmap3->~QPixmap();

	QPixmap *pixmap=new QPixmap();
	pixmap->convertFromImage(erosion(primage3,128));
	ui.label_9->setPixmap(*pixmap);
	ui.label_9->update();
	pixmap->~QPixmap();

}

void qttest::basicoper(){
	QPixmap *pixmap=new QPixmap();
	int choice=0;
	if (ui.radioButton_12->isChecked()==true) choice=1;
	if (ui.radioButton_13->isChecked()==true) choice=2;
	if (ui.radioButton_14->isChecked()==true) choice=3;
	if (ui.radioButton_15->isChecked()==true) choice=4;
	switch (choice){
	case 1:
		pixmap->convertFromImage(erosion(primage3,128));
		ui.label_9->setPixmap(*pixmap);
		ui.label_9->update();
		pixmap->~QPixmap();
		break;
	case 2:
		pixmap->convertFromImage(dilation(primage3,128));
		ui.label_9->setPixmap(*pixmap);
		ui.label_9->update();
		pixmap->~QPixmap();
		break;
	case 3:
		pixmap->convertFromImage(opening(primage3,128));
		ui.label_9->setPixmap(*pixmap);
		ui.label_9->update();
		pixmap->~QPixmap();
		break;
	case 4:
		pixmap->convertFromImage(closing(primage3,128));
		ui.label_9->setPixmap(*pixmap);
		ui.label_9->update();
		pixmap->~QPixmap();
		break;
	}
}

void qttest::advoper(){
	emit stop();
	int choice=2;
	if (ui.radioButton_16->isChecked()==true) choice=1;
	if (ui.radioButton_17->isChecked()==true) choice=2;
	if (choice==1){
		mythread *my1=new mythread(primage3,1,graystruct,binarystruct);
		connect(my1,SIGNAL(notify(QImage,QImage)),this,SLOT(OnNotify(QImage,QImage)));  
		connect(this,SIGNAL(stop()),my1,SLOT(stop()));
		my1->start();
	}
	else if(choice==2){
		if(ui.checkBox->isChecked()){
			mythread *my2=new mythread(primage3,4,graystruct,binarystruct);
			connect(my2,SIGNAL(notify(QImage,QImage)),this,SLOT(OnNotify(QImage,QImage)));  
			connect(this,SIGNAL(stop()),my2,SLOT(stop()));
			my2->start();
		}
		else{
			mythread *my2=new mythread(primage3,2,graystruct,binarystruct);
			connect(my2,SIGNAL(notify(QImage,QImage)),this,SLOT(OnNotify(QImage,QImage)));  
			connect(this,SIGNAL(stop()),my2,SLOT(stop()));
			my2->start();
		}
		
	}
	
}

QImage qttest::erosion(QImage pic,int value){//此处函数周围点中只要有一个为0就为0
	pic=transGSC(pic,-1);
	//int structure[3][3]={1,1,1,1,1,1,1,1,1};
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	picolor(binaryImage,255);
	int flag=0;
	unsigned char *adr=pic.bits();
	int w=size.width();
	int h=size.height();
	int m,n;  
	int src,des;  
	for(int j = 1;j<h-1;++j)//加入模板
	{
		for(int i = 1; i < w -1; ++i)
		{
			src=255,des=255;
			/*//二值用
			if(! *(adr+i*4+j*4*w+2) ^  0) {
				binaryImage.setPixel(i,j,qRgb(0,0,0));
				continue;}*/
			for(m=0;m<3;m++)  
                for(n=0;n<3;n++)  
                {  
					src=*(adr+4*(j+m-1)*w+(i-n+1)*4+2)-graystruct[m][n];
					if(src<des)  
                        {  
                            des=src;                  
                        }  
					/*
					
					if(structure[m][n]==0)  
					continue;    
					if(*(adr+4*(j-m+1)*w+(i+n-1)*4+2)==0)  
					{  
						;  
						break;  
					}  */
				}
			des=des<0?0:des;
			binaryImage.setPixel(i,j,qRgb(des,des,des));
		}
	}

	/*for(int j = 1;j<h-1;++j)//不加入模板算法
	{
		for(int i = 1; i < w -1; ++i)
		{
			//flag=1;
			if(! *(adr+i*4+j*4*w+2) ^  0) {
				binaryImage.setPixel(i,j,qRgb(0,0,0));
				continue;}
			 for(int m = i - 1;m < i + 2;m++)
			{
				for(int n = j - 1; n < j + 2;n++)
				{

					if(! *(adr+m*4+n*4*w+2) ^  0)
					{
						binaryImage.setPixel(i,j,qRgb(0,0,0));
						flag = 0;
						break;
					}
				}
					if(flag == 0)
					{
						break;
					}
			}
			/*if(flag == 0)
			{
				binaryImage.setPixel(i,j,qRgb(0,0,0));
			}
			else
			{
				binaryImage.setPixel(i,j,qRgb(255,255,255));
			}
		}
	}*/
	return binaryImage;
}//需要筛选矩阵

QImage qttest::dilation(QImage pic,int value){
	pic=transGSC(pic,-1);
	QSize size=pic.size();
	QImage binaryImage(size, QImage::Format_RGB32);
	picolor(binaryImage,0);
	//int structure[3][3]={1,1,1,1,1,1,1,1,1};
	int ar=0,flag=0;
	unsigned char *adr=pic.bits();
	int w=size.width();
	int h=size.height();
	int m,n;  
	int src,des;  
	for(int j = 1;j<h-1;++j)//加入模板
	{
		for(int i = 1; i < w -1; ++i)
		{
			src=0,des=0;
			/*//二值用
			if( *(adr+i*4+j*4*w+2) ==255) {
				binaryImage.setPixel(i,j,qRgb(255,255,255));
				continue;}*/
			for(m=0;m<3;m++)  
                for(n=0;n<3;n++)  
                {  
					src=*(adr+4*(j-m+1)*w+(i+n-1)*4+2)+graystruct[m][n];
					if(src>des)  
                        {  
                            des=src;                  
                        }  
					/*
					
					if(structure[m][n]==0)  
					continue;    
					if(*(adr+4*(j-m+1)*w+(i+n-1)*4+2)==255)  
					{  
						binaryImage.setPixel(i,j,qRgb(255,255,255));
						break;  
					}  */
				}
			des=des>255?255:des;
			binaryImage.setPixel(i,j,qRgb(des,des,des));
		}
	}


	/*for(int j = 1;j<h-1;++j)//不考虑模板
	{
		for(int i = 1; i < w -1; ++i)
		{
			flag=1;
			if(! *(adr+i*4+j*4*w+2) ^  1) {
				binaryImage.setPixel(i,j,qRgb(255,255,255));
				continue;}
			 for(int m = i - 1;m < i + 2;m++)
			{
				for(int n = j - 1; n < j + 2;n++)
				{
					if(! *(adr+m*4+n*4*w+2) ^  1)
					{
						binaryImage.setPixel(i,j,qRgb(255,255,255));
						flag = 0;
						break;
					}
				}
					if(flag == 0)
					{
						break;
					}
			}
			if(flag == 0)
			{
				binaryImage.setPixel(i,j,qRgb(255,255,255));
			}
			else
			{
				binaryImage.setPixel(i,j,qRgb(0,0,0));
			}
		}
	}*/
	return binaryImage;
}//需要筛选矩阵

QImage qttest::opening(QImage temp,int value){
	return erosion(dilation(temp,128),128);
}

QImage qttest::closing(QImage temp,int value){
	return dilation(erosion(temp,128),128);
}

bool qttest::issame(QImage temp,QImage temp1){
	QSize s1=temp.size();
	QSize s2=temp1.size();
	int w=s1.width();
	int h=s2.height();
	if (s1.width()!=s2.width()||s1.height()!=s2.height()) return false;
	for (int i=0;i<w;i++)
	{
		for(int j=0;j<h;j++)
		{
			QRgb t1=temp.pixel(i,j);
			QRgb t2=temp1.pixel(i,j);
				if (qRed(t2)!=qRed(t1))//||qGreen(temp.pixel(i,j))!=(qGreen(temp1.pixel(i,j)))||qBlue(temp.pixel(i,j))!=(qBlue(temp1.pixel(i,j))))
			{
				return false;
			}	
		}
	}
	return true;
}

QImage qttest::drawerodis(QImage pic,QImage &dis,int value){
	pic=transGSC(pic,128);
	//int structure[3][3]={1,1,1,1,1,1,1,1,1};
	QSize s1=pic.size();
	QSize s3=dis.size();
	
	if (s1.height()!=s3.height()||s1.width()!=s3.width()) return pic;
	QImage binaryImage(s1, QImage::Format_RGB32);
	int w=s1.width();
	int h=s1.height();

	unsigned char ar=0;
	int flag=0;//表示是不是路径
	int flbg=0;//表示是否被腐蚀
	int m,n;  
	
	unsigned char *adr=pic.bits();
	for(int j = 1;j<h-1;++j)
	{
		for(int i = 1; i < w -1; ++i)
		{
			flag=1;
			flbg=1;
			if(!*(adr+i*4+j*w*4+2)^ 0)
			{
				flag=0;
				flbg=0;
			}
			else
			{
				for(m=0;m<3;m++)  
				{
					for(n=0;n<3;n++)  
					{  
						if(binarystruct[m][n]==0)  
						continue;    
						if(*(adr+4*(j-m+1)*w+(i+n-1)*4+2)==0)  
						{  
							flbg=0;  
							break;  
						}
					}
						if(flbg == 0)
						{
							break;
						}
				}
			}
			if(flbg==0)
			{
				if(flag != 0)
				{
					ar=qRed(dis.pixel(i,j));
					ar=ar>254?254:ar;
					//ar=ar<1?0:ar;
					ar+=1;
					dis.setPixel(i,j,qRgb(ar,ar,ar));
				}
				binaryImage.setPixel(i,j,qRgb(0,0,0));
			}
			else
			{
				ar=qRed(dis.pixel(i,j));
				ar=ar>254?254:ar;
				//ar=ar<1?0:ar;
				ar+=1;
				dis.setPixel(i,j,qRgb(ar,ar,ar));
				binaryImage.setPixel(i,j,qRgb(255,255,255));
			}
		}
	}
	return binaryImage;
}//需要筛选矩阵

QImage qttest::drawskeleton2(QImage pic,QImage &dis,QImage &recon,bool &value){//利用骨架点周围点的特性得骨架，得到的是dis图和骨架点图
	//他首先是被腐蚀的对象，他周围的点也会或已被腐蚀？有一个不被腐蚀
	//QImage pic=transGSC(pro,value);
	
	value=0;

	QSize s1=pic.size();
	QSize s3=dis.size();
	
	if (s1.height()!=s3.height()||s1.width()!=s3.width()) return pic;
	QImage binaryImage(s1, QImage::Format_RGB32);
	int ar=0,br=0;
	int flag=0;//周围对象是否会被腐蚀
	int flbg=0;//被腐蚀吗
	int flcg=0;//原来自身的颜色
	int w=s1.width();
	int h=s1.height();
	unsigned char *adr=pic.bits();
	for(int j = 2;j<h-2;++j)
	{
		for(int i = 2; i < w -2; ++i)
		{
			flag=0;
			flbg=1;
			flcg=1;
			if(!*(adr+i*4+j*w*4+2)^ 0)
			{
				flbg=0;
				flcg=0;
			}
			else
			{
				for(int m = i - 1;m < i + 2;m++)
				{
					for(int n = j - 1; n < j + 2;n++)
					{
						if(!*(adr+m*4+n*w*4+2)^ 0)
						{
							flbg = 0;
						}
						int count=0;
						for(int ks=-1;ks<2;ks++)
						{
							for(int ls=-1;ls<2;ls++)
							{
								if(!*(adr+(m+ks)*4+(n+ls)*w*4+2)^ 1)count++;
								//else {
								//	count=-1;break;
								//}
							}
							//if (count==-1) break;
						}
						if (count==9) 
						{
							flag=1;
						}
						if(flag==1&&flbg==0){
							break;
						}
					}
					if(flbg == 0&&flag == 1)
					{
						break;
					}
				}
			}
			if(flbg==0)
			{
				if(flag==0&flcg==1)//判断是否为骨骼
				{
					dis.setPixel(i,j,qRgb(255,255,255));
				}

				binaryImage.setPixel(i,j,qRgb(0,0,0));

				if(flcg == 1)
				{
					br=qRed(recon.pixel(i,j));
					br=br>254?254:br;
					//br=br<1?0:br;
					br+=1;
					recon.setPixel(i,j,qRgb(br,br,br));
					value=true;
				}
				
			}
			else
			{
				value=true;

				binaryImage.setPixel(i,j,qRgb(255,255,255));

				br=qRed(recon.pixel(i,j));
				br=br>254?254:br;
				//br=br<1?0:br;
				br+=1;
				recon.setPixel(i,j,qRgb(br,br,br));
			}
		}
	}

	return binaryImage;
}

QImage qttest::drawskeleton(QImage pic,QImage &dis,int &maxvalue,bool &value){//普通算法
	pic=transGSC(pic,value);
	//int structure[3][3]={1,0,1,1,1,1,1,0,1};
	QSize s1=pic.size();
	QSize s3=dis.size();
	
	if (s1.height()!=s3.height()||s1.width()!=s3.width()) return pic;
	QImage binaryImage(s1, QImage::Format_RGB32);
	int ar=0,br=0;
	int flag=0;
	int flbg=0;
	int w=s1.width();
	int h=s1.height();
	unsigned char *adr=pic.bits();
	int m,n;  

		for(int j = 1;j<h-1;++j)
	{
		for(int i = 1; i < w -1; ++i)
		{
			
			if (qRed(dis.pixel(i,j))!=maxvalue) continue;
			else{ 
				flag=0;
				for(m=0;m<3;m++){
					for(n=0;n<3;n++){
						if (binarystruct[m][n]==0)
							continue;
						if (dis.pixel(i+n-1,j-m+1)<dis.pixel(i,j)){
							dis.setPixel(i+n-1,j-m+1,qRgb(0,0,0));
						}
					}
				}
					
			}
		}
	}

	for(int j = 1;j<h-1;++j)
	{
		for(int i = 1; i < w -1; ++i)
		{
			flag=1;
			flbg=1;
			if(!*(adr+i*4+j*w*4+2)^ 0)
			{
				flag=0;
				flbg=0;
			}
			else
			{
				for(m=0;m<3;m++)  
				{
					for(n=0;n<3;n++)  
					{  
						if(binarystruct[m][n]==0)  
						continue;    
						if(*(adr+4*(j-m+1)*w+(i+n-1)*4+2)==0)  
						{  
							flbg=0;  
							break;  
						}
					}
						if(flbg == 0)
						{
							break;
						}
				}
			}
			if(flbg==0)
			{
				if(flag != 0)
				{
					value=true;
					ar=qRed(dis.pixel(i,j));
					ar=ar>254?254:ar;
					//ar=ar<1?0:ar;
					ar+=1;
					maxvalue=ar>maxvalue? ar:maxvalue;
					dis.setPixel(i,j,qRgb(ar,ar,ar));
				}
					binaryImage.setPixel(i,j,qRgb(0,0,0));
			}
			else
			{
				value=true;
				ar=qRed(dis.pixel(i,j));
				ar=ar>254?254:ar;
				//ar=ar<1?0:ar;
				ar+=1;
				maxvalue=ar>maxvalue? ar:maxvalue;
				dis.setPixel(i,j,qRgb(ar,ar,ar));
				binaryImage.setPixel(i,j,qRgb(255,255,255));
			}
		}
	}

	/*for(int j = 1;j<h-1;++j)
	{
		for(int i = 1; i < w -1; ++i)
		{
			flag=1;
			flbg=1;
			if(!*(adr+i*4+j*w*4+2)^ 0)
			{
				flag=0;
				flbg=0;
			}
			else
			{
				for(m=0;m<3;m++)  
				{
					for(n=0;n<3;n++)  
					{  
						if(structure[m][n]==0)  
						continue;    
						if(*(adr+4*(j-m+1)*w+(i+n-1)*4+2)==0)  
						{  
							flbg=0;  
							break;  
						}
					}
						if(flbg == 0)
						{
							break;
						}
				}
			}
			if(flbg==0)
			{
				if(flag != 0)
				{
					ar=qRed(dis.pixel(i,j));
					ar=ar>254?254:ar;
					//ar=ar<1?0:ar;
					ar+=1;
					maxvalue=ar>maxvalue? ar:maxvalue;
					dis.setPixel(i,j,qRgb(ar,ar,ar));
				}
				binaryImage.setPixel(i,j,qRgb(0,0,0));
			}
			else
			{
				ar=qRed(dis.pixel(i,j));
				ar=ar>254?254:ar;
				//ar=ar<1?0:ar;
				ar+=1;
				dis.setPixel(i,j,qRgb(ar,ar,ar));
				maxvalue=ar>maxvalue? ar:maxvalue;
				binaryImage.setPixel(i,j,qRgb(255,255,255));
			}
		}
	}*/

	return binaryImage;
}

void qttest::skelrecon(QImage &skegray,int &value,QImage &recopic){
	//int structure[3][3]={1,0,1,1,1,1,1,0,1};
	QSize s1=skegray.size();
	int w=s1.width();
	int h=s1.height();
	int m,n;
	int temp;
	unsigned char* sky=skegray.bits();
	//加模板的算法
	for (int i=1;i<w-1;i++)
		for(int j=1;j<h-1;j++){
			//temp=qRed(skegray.pixel(i,j));
			temp=*(sky+i*4+j*w*4+2);
			if (temp==value){
				if (temp==1){
					recopic.setPixel(i,j,qRgb(255,255,255));
					temp--;
					continue;
				}
				temp--;
				skegray.setPixel(i,j,qRgb(0,0,0));
				for(m=0;m<3;m++)  
					for(n=0;n<3;n++)  
					{  
						if(binarystruct[m][n]==0)  
							continue;    
						recopic.setPixel(i+n-1,j-m+1,qRgb(255,255,255));
						//if (temp>qRed(skegray.pixel(i+1-m,j+1-n))){
						if(temp>*(sky+(i+n-1)*4+(j-m+1)*w*4+2)){
							skegray.setPixel(i+n-1,j-m+1,qRgb(temp,temp,temp));
						}
					}
			}
		}
	value--;

	//加模板


	/*for(int i=0;i<s1.width();i++)//普通算法,速度很快
	{
		for(int j=0;j<s1.height();j++)
		{
			int envir=qRed(skegray.pixel(i,j));
			if (envir==value){
				envir=((envir*2-1)-1)/2;
				for(int m=-envir;m<=envir;m++)
				for(int n=-envir;n<=envir;n++)
				{
					if(i+m<0||i+m+1>s1.width()||j+m<0||j+n+1>s1.height())
						continue;
					recopic.setPixel(i+m,j+n,qRgb(255,255,255));
				}
			}*/

			/*if (envir==0) continue;
			if (envir==1){
				recopic.setPixel(i,j,qRgb(255,255,255));
				continue;
			}
			
			envir=((envir*2-1)-1)/2;
			for(int m=-envir;m<=envir;m++)
				for(int n=-envir;n<=envir;n++)
				{
					if(i+m<0||i+m+1>s1.width()||j+m<0||j+n+1>s1.height())
						continue;
					recopic.setPixel(i+m,j+n,qRgb(255,255,255));
				}
		}
	}*/
	

	/*//算法2，只需两次遍历图片就可以完成,但很慢
	QMultiMap<int,Point> mymap;
	QMultiMap<int,Point>::iterator k;  
	
	Point temp;
	for(int i=0;i<s1.width();i++)
		for(int j=0;j<s1.height();j++)
		{
			int value=qRed(skegray.pixel(i,j));
			if (value>0){
				temp.x=i;
				temp.y=j;
				mymap.insert(value,temp);
			}
		}
	  
	for(int i=0;i<s1.width();i++)
		for(int j=0;j<s1.height();j++)
		{
			for(k=mymap.begin();k!=mymap.end();++k)    
			{   
			
				int res=0;
				res=abs(i-k.value().x)>abs(j-k.value().y)?abs(i-k.value().x):abs(j-k.value().y);
				if (res<k.key()){
					recopic.setPixel(i,j,qRgb(255,255,255));
					break;
				}
			}    
		}*/
}

void qttest::getskel(QImage skebin,QImage &skegray){//第二种骨架算法需要用到的东西，用来获得骨架点的灰度值
	QSize s1=skebin.size();
	for(int i=0;i<s1.width();i++)
	for(int j=0;j<s1.height();j++){
		if(qRed(skebin.pixel(i,j))==0) skegray.setPixel(i,j,qRgb(0,0,0));
		/*if (qRed(skegray.pixel(i,j))>1){
			int a =qRed(skegray.pixel(i,j));
		}*/
	}
}

void qttest::picolor(QImage &pic,int value){
	QSize size=pic.size();
	value=value>255?255:value;
	value=value<0?0:value;
	for(int i=0;i<size.width();i++){
		for(int j=0;j<size.height();j++){
			QRgb newpixel=qRgb(value,value,value);
			pic.setPixel(i,j,newpixel);
		}
	}
}

int qttest::getmaxvalue(QImage ske){
	int maxvalue=0;
	for(int i=0;i<ske.size().width();i++)
		for(int j=0;j<ske.size().height();j++){
			if (qRed(ske.pixel(i,j))>maxvalue) maxvalue=qRed(ske.pixel(i,j));
		}
	return maxvalue;
}

void qttest::fastskel(QImage &pic){
	pic=transGSC(pic,128);
	int neighbor[8];
	QSize size=pic.size();
    QImage mark(size, QImage::Format_RGB32);
	picolor(mark,0);
	
	int h=size.height();
	int w=size.width();
    bool loop=true;
    int x,y,k;
    int markNum=0;

 
    while(loop)
    {
       loop=false;
 
       //第一步
       markNum=0;
       for(y=1;y<h-1;y++)
       {
           for(x=1;x<w-1;x++)
           {
              //条件1：p必须是前景点
              if(qRed(pic.pixel(x,y))==0 ) continue;
 
              neighbor[0]= qRed(pic.pixel(x+1,y)) ;
              neighbor[1]= qRed(pic.pixel(x+1,y-1));
              neighbor[2]= qRed(pic.pixel(x,y-1));
              neighbor[3]= qRed(pic.pixel(x-1,y-1));
              neighbor[4]= qRed(pic.pixel(x-1,y));
              neighbor[5]= qRed(pic.pixel(x-1,y+1));
              neighbor[6]= qRed(pic.pixel(x,y+1));
              neighbor[7]= qRed(pic.pixel(x+1,y+1));
 
              //条件2：2<=N(p）<=6
              int np=(neighbor[0]+neighbor[1]+neighbor[2]+neighbor[3]+neighbor[4]+neighbor[5]+neighbor[6]+neighbor[7])/255;
              if(np<2 || np>6) continue;
 
              //条件3：S(p）=1
              int sp=0;
              for(int i=1;i<8;i++)
              {
                  if(neighbor[i]-neighbor[i-1]==255)
                     sp++;
              }
              if(neighbor[0]-neighbor[7]==255)
                  sp++;            
              if(sp!=1) continue;
 
              //条件4：p2*p0*p6=0
              if(neighbor[2]&neighbor[0]&neighbor[6]!=0)
                  continue;
                //条件5：p0*p6*p4=0
              if(neighbor[0]&neighbor[6]&neighbor[4]!=0)
                  continue;
 
 
              //标记删除
			  mark.setPixel(x,y,qRgb(1,1,1));
              markNum++;
              loop=true;
           }
       }
 
       //将标记删除的点置为背景色
       if(markNum>0)
       {
           for(y=0;y<h;y++)
           {
              for(x=0;x<w;x++)
              {
				  if(qRed(mark.pixel(x,y))==1)
                  {
					  pic.setPixel(x,y,qRgb(0,0,0));
                  }
              }
           }
       }
      
 
       //第二步
        markNum=0;
       for(y=1;y<h-1;y++)
       {
           for(x=1;x<w-1;x++)
           {
              //条件1：p必须是前景点
              if(qRed(pic.pixel(x,y))==0 ) continue;
 
              neighbor[0]= qRed(pic.pixel(x+1,y)) ;
              neighbor[1]= qRed(pic.pixel(x+1,y-1));
              neighbor[2]= qRed(pic.pixel(x,y-1));
              neighbor[3]= qRed(pic.pixel(x-1,y-1));
              neighbor[4]= qRed(pic.pixel(x-1,y));
              neighbor[5]= qRed(pic.pixel(x-1,y+1));
              neighbor[6]= qRed(pic.pixel(x,y+1));
              neighbor[7]= qRed(pic.pixel(x+1,y+1));
 
              //条件2：<=N(p)<=6
              int np=(neighbor[0]+neighbor[1]+neighbor[2]+neighbor[3]+neighbor[4]+neighbor[5]+neighbor[6]+neighbor[7])/255;
              if(np<2 || np>6) continue;
 
              //条件3：S(p)=1
              int sp=0;
              for(int i=1;i<8;i++)
              {
                  if(neighbor[i]-neighbor[i-1]==255)
                     sp++;
              }
              if(neighbor[0]-neighbor[7]==255)
                  sp++;
              if(sp!=1) continue;
 
              //条件4：p2*p0*p4==0
              if(neighbor[2]&neighbor[0]&neighbor[4]!=0)
                  continue;
              //条件5：p2*p6*p4==0
              if(neighbor[2]&neighbor[6]&neighbor[4]!=0)
                  continue;
 
              //标记删除
              mark.setPixel(x,y,qRgb(1,1,1));
              markNum++;
              loop=true;
           }
       }
 
       //将标记删除的点置为背景色
       for(y=0;y<h;y++)
       {
           for(x=0;x<w;x++)
           {
              if(qRed(mark.pixel(x,y))==1)
              {
                  pic.setPixel(x,y,qRgb(0,0,0));
              }
           }
       }
 
    } 
}

void qttest::on_pushButton_4_clicked()
{
	emit stop();

	mylabel->setScaledContents(true);
	QString filename=getfile();
	if (filename=="") return;
	QImage image(filename);
	primage4=image;

	QPixmap *pixmap=new QPixmap();	
	pixmap->convertFromImage(primage4);
	mylabel->setPixmap(*pixmap);
	mylabel->setsize(primage4.size());
	mylabel->setpicture(primage4);
	mylabel->update();
	pixmap->~QPixmap();
}

void qttest::on_pushButton_5_clicked(){
	emit stop();

	mythread *my=new mythread(primage4,getMark(primage4,mylabel->getImage()),5,graystruct,binarystruct);
	connect(my,SIGNAL(notify(QImage)),this,SLOT(OnNotify(QImage)));  
	connect(this,SIGNAL(stop()),my,SLOT(stop()));
	my->start();
}

void qttest::on_pushButton_6_clicked(){
	emit stop();

	QPixmap *pixmap=new QPixmap();
	QImage temp=boundetect(primage4,1);
	pixmap->convertFromImage(temp);
	mylabel->setPixmap(*pixmap);
	mylabel->setsize(temp.size());
	mylabel->setpicture(temp);
	mylabel->update();
	pixmap->~QPixmap();
}

void qttest::on_pushButton_7_clicked(){
	emit stop();

	QPixmap *pixmap=new QPixmap();
	QImage temp=graygradient(primage4,1);
	pixmap->convertFromImage(temp);
	mylabel->setPixmap(*pixmap);
	mylabel->setsize(temp.size());
	mylabel->setpicture(temp);
	mylabel->update();
	pixmap->~QPixmap();
}

void qttest::setboundAgradient(){
	if (ui.radioButton_9->isChecked()) boundAgradient=1;
	else if (ui.radioButton_10->isChecked()) boundAgradient=2;
	else if (ui.radioButton_11->isChecked()) boundAgradient=3;
}

void qttest::OnNotify(QImage a){
	QPixmap *pixmap=new QPixmap();
	pixmap->convertFromImage(a);
	mylabel->setPixmap(*pixmap);
	mylabel->setsize(a.size());
	mylabel->setpicture(a);
	mylabel->update();
	pixmap->~QPixmap();
}

//和周围做dilation，然后和原始图比，必须要比原始图小,此算法不需要判断是否稳定
QImage qttest::reconstruction(QImage mask,QImage marker,bool &stable){
	QImage binaryImage=marker;
	QSize size=marker.size();
	stable=true;
	int w=size.width();
	int h=size.height();
	int m,n;  
	unsigned char src,des,temp;
	unsigned char *adr=marker.bits();
	unsigned char *msk=mask.bits();
	unsigned char *res=binaryImage.bits();
	for(int j = 1;j< h -1;++j)//加入模板
	{
		for(int i = 1; i < w -1; ++i)
		{
			
			temp=des=*(adr+4*(j)*w+(i)*4+2);
			if(des==*(msk+4*(j)*w+(i)*4+2))continue;
			for(m=0;m<3;m++)  
				for(n=0;n<3;n++)  
				{  
					src=*(adr+4*(j-m+1)*w+(i+n-1)*4+2);
					if(src>des)  
                    {  
						des=src;          
                    }  
				}
			//des=des>255?255:des;
			des=des<*(msk+4*(j)*w+(i)*4+2)?des:*(msk+4*(j)*w+(i)*4+2);
			if (temp!=des) 
				stable=false;
			*(res+4*(j)*w+(i)*4+2)=des;
			*(res+4*(j)*w+(i)*4+0)=des;
			*(res+4*(j)*w+(i)*4+1)=des;
		}
	}
	return binaryImage;
}

QImage qttest::getMark(QImage proimage,QImage aftimage){
	QSize size=proimage.size();
	int w=size.width();
	int h=size.height();
	QImage binaryImage(size, QImage::Format_RGB32);
	picolor(binaryImage,0);
	int temp;
	for(int j = 1;j<h-1;++j)
	{
		for(int i = 1; i < w -1; ++i)
		{
			if(qRed(aftimage.pixel(i,j))==255&qBlue(aftimage.pixel(i,j))==0&qGreen(aftimage.pixel(i,j))==0){
				temp=qRed(proimage.pixel(i,j));
				binaryImage.setPixel(i,j,qRgb(temp,temp,temp));
			}
		}
	}
	return binaryImage;
}

QImage qttest::boundetect(QImage temp,int type){
	if (type==1){
		return Imgminus(dilation(temp,-1),erosion(temp,-1));
	}else if (type==2){
		return Imgminus(dilation(temp,-1),temp);
	}else if (type==3){
		return Imgminus(temp,erosion(temp,-1));
	}else{
		return temp;
	}
}

QImage qttest::graygradient(QImage temp,int type){
	if (type==1){
		return Imgmultiple(Imgminus(dilation(temp,-1),erosion(temp,-1)),2);
	}else if (type==2){
		return Imgmultiple(Imgminus(dilation(temp,-1),temp),2);
	}else if (type==3){
		return Imgmultiple(Imgminus(temp,erosion(temp,-1)),2);
	}else{
		return temp;
	}
}

QImage qttest::Imgmultiple(QImage a,int times){
	
	QSize size=a.size();
	QImage results(size, QImage::Format_RGB32);
	int w=size.width();
	int h=size.height();
	int temp;
	for(int i=0;i<w;i++)
		for(int j=0;j<h;j++){
			temp=qRed(a.pixel(i,j))/times;
			temp=temp>0? temp:0;
			temp=temp<255? temp:255;
			results.setPixel(i,j,qRgb(temp,temp,temp));
		}
	return results;
}

QImage qttest::Imgminus(QImage a,QImage b){
	
	QSize size=a.size();
	QImage results(size, QImage::Format_RGB32);
	int w=size.width();
	int h=size.height();
	int temp;
	for(int i=1;i<w-1;i++)
		for(int j=1;j<h-1;j++){
			temp=qRed(a.pixel(i,j))-qRed(b.pixel(i,j));
			temp=temp>0? temp:0;
			results.setPixel(i,j,qRgb(temp,temp,temp));
		}
	return results;
}

void qttest::setstruct(){
	binarystruct[0][0]=ui.textEdit->toPlainText().toUInt();
	binarystruct[0][1]=ui.textEdit_2->toPlainText().toUInt();
	binarystruct[0][2]=ui.textEdit_3->toPlainText().toUInt();
	binarystruct[1][0]=ui.textEdit_6->toPlainText().toUInt();
	binarystruct[1][1]=ui.textEdit_5->toPlainText().toUInt();
	binarystruct[1][2]=ui.textEdit_4->toPlainText().toUInt();
	binarystruct[2][0]=ui.textEdit_9->toPlainText().toUInt();
	binarystruct[2][1]=ui.textEdit_8->toPlainText().toUInt();
	binarystruct[2][2]=ui.textEdit_7->toPlainText().toUInt();

	graystruct[0][0]=ui.textEdit_17->toPlainText().toUInt();
	graystruct[0][1]=ui.textEdit_14->toPlainText().toUInt();
	graystruct[0][2]=ui.textEdit_10->toPlainText().toUInt();
	graystruct[1][0]=ui.textEdit_13->toPlainText().toUInt();
	graystruct[1][1]=ui.textEdit_11->toPlainText().toUInt();
	graystruct[1][2]=ui.textEdit_12->toPlainText().toUInt();
	graystruct[2][0]=ui.textEdit_16->toPlainText().toUInt();
	graystruct[2][1]=ui.textEdit_18->toPlainText().toUInt();
	graystruct[2][2]=ui.textEdit_15->toPlainText().toUInt();

	gaussstruct=ui.textEdit_19->toPlainText().toUInt();

	convolstruct[0][0]=ui.textEdit_28->toPlainText().toUInt();
	convolstruct[0][1]=ui.textEdit_23->toPlainText().toUInt();
	convolstruct[0][2]=ui.textEdit_26->toPlainText().toUInt();
	convolstruct[1][0]=ui.textEdit_24->toPlainText().toUInt();
	convolstruct[1][1]=ui.textEdit_20->toPlainText().toUInt();
	convolstruct[1][2]=ui.textEdit_22->toPlainText().toUInt();
	convolstruct[2][0]=ui.textEdit_25->toPlainText().toUInt();
	convolstruct[2][1]=ui.textEdit_27->toPlainText().toUInt();
	convolstruct[2][2]=ui.textEdit_21->toPlainText().toUInt();

	/*ui.textEdit->setText(QString(binarystruct[0][0]));
	ui.textEdit_2->setText(binarystruct[0][1]);
	ui.textEdit_3->setText(binarystruct[0][2]);
	ui.textEdit_6->setText(binarystruct[1][0]);
	ui.textEdit_5->setText(binarystruct[1][1]);
	ui.textEdit_4->setText(binarystruct[1][2]);
	ui.textEdit_9->setText(binarystruct[2][0]);
	ui.textEdit_8->setText(binarystruct[2][1]);
	ui.textEdit_7->setText(binarystruct[2][2]);

	ui.textEdit_17->setText(graystruct[0][0]);
	ui.textEdit_14->setText(graystruct[0][1]);
	ui.textEdit_10->setText(graystruct[0][2]);
	ui.textEdit_13->setText(graystruct[1][0]);
	ui.textEdit_11->setText(graystruct[1][1]);
	ui.textEdit_12->setText(graystruct[1][2]);
	ui.textEdit_16->setText(graystruct[2][0]);
	ui.textEdit_18->setText(graystruct[2][1]);
	ui.textEdit_15->setText(graystruct[2][2]);*/
}

void qttest::convolop(){
	if(ui.checkBox_2->isChecked()){
		QPixmap *pixmap=new QPixmap();	
		pixmap->convertFromImage(ConvolImg(primage));
		ui.label_4->setPixmap(*pixmap);
		ui.label_4->update();
		pixmap->~QPixmap();
	}else{
		QPixmap *pixmap=new QPixmap();	
		pixmap->convertFromImage(histogram(primage,ui.horizontalSlider->value()));
		ui.label_4->setPixmap(*pixmap);
		ui.label_4->update();
		pixmap->~QPixmap();
	}
}

void qttest::setstruct(unsigned char gray[3][3],unsigned char binary[3][3]){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			graystruct[i][j]=gray[i][j];
			binarystruct[i][j]=binary[i][j];
		}
}

QImage qttest::dis2skel(QImage dis){
	QImage res=dis;
	for(int i=0;i<dis.width();i++){
		for(int j=0;j<dis.height();j++){
			if (qRed(dis.pixel(i,j))>0)
				res.setPixel(i,j,qRgb(255,255,255));
		}
	}
	return res;
}

qttest::~qttest()
{

}

