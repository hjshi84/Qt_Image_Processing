#include "Mylabel.h"
#include <qpen.h>
#include <qpainter.h>


void Mylabel::mousePressEvent(QMouseEvent *event){

	if(event->button()==Qt::LeftButton){
		onpress=true;
		//theimage.setPixel(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height(),qRgb(255,0,0));
		startpoint=QPoint(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height());
		endpoint=QPoint(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height());
		drawline();
		update();
	}
}

void Mylabel::mouseMoveEvent(QMouseEvent *event){

	if(onpress){
		//theimage.setPixel(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height(),qRgb(255,0,0));
		endpoint=QPoint(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height());
		drawline();
		startpoint=QPoint(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height());
		update();
	}
}

void Mylabel::mouseReleaseEvent(QMouseEvent *event){

	if(event->button()==Qt::LeftButton){
		onpress=false;
		//theimage.setPixel(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height(),qRgb(255,0,0));
		startpoint=QPoint(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height());
		endpoint=QPoint(event->pos().x()*tempsize.width()/this->width(),event->pos().y()*tempsize.height()/this->height());
		drawline();
		update();
	}
}

void Mylabel::drawline(){

	QPainter painter(&theimage);
	QPen pen;   
	pen.setColor(QColor(255,0,0)); 
	painter.setPen(pen);
	painter.drawLine(startpoint,endpoint);

}

void Mylabel::setsize(QSize size){
	tempsize=size;
	//QImage theimage(tempsize, QImage::Format_RGB32);
}

/*void Mylabel::repaint(int x, int y, int w, int h, bool erase){
	QPainter painter(this);  
    QPen pen;   
	
	pen.setColor(Qt::red);  
    pen.setWidth(10);  
	painter.setPen(pen);
	painter.drawPoint(point);
	
}*/

void Mylabel::paintEvent(QPaintEvent* p){
	QPainter painter(this);  
	QPixmap temp=QPixmap();
	temp.convertFromImage(theimage);
	painter.drawPixmap(0,0,this->width(),this->height(),temp);
}

QImage Mylabel::getImage(){
	return theimage;
}


void Mylabel::setpicture(QImage temp){
	theimage=temp;
}

Mylabel::Mylabel(QWidget *parent=0):QLabel(parent)
{
	this->setMouseTracking(true);  
	onpress=false;
}


Mylabel::~Mylabel(void)
{

}
