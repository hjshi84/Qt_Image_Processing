#pragma once
#include "qlabel.h"
#include <QMouseEvent>
#include <qimage.h>
#include <qpoint.h>
class Mylabel :
	public QLabel
{
private:
	QPoint startpoint,endpoint;
	bool onpress;
	QImage theimage;
	QSize tempsize;
	void drawline();
protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	//void repaint( int x, int y, int w, int h, bool erase = true );
	void paintEvent(QPaintEvent* p);  
public:
	void setsize(QSize size);
	void setpicture(QImage temp);
	QImage getImage();
	Mylabel(QWidget *parent);
	~Mylabel(void);
};

