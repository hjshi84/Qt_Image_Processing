#pragma once
#include <qthread.h>
#include <qttest.h>
class mythread :
	public QThread
{
	Q_OBJECT  
	QImage thimg;
	QImage marker;
	qttest qtt;
	int types;
	bool stopornot;
public:
	mythread(QImage pic,int type,unsigned char gray[3][3],unsigned char binary[3][3]);
	mythread(QImage pic,QImage mark,int type,unsigned char gray[3][3],unsigned char binary[3][3]);
	~mythread(void);
protected:
	void run();
signals:  
    void notify(QImage a,QImage b);
	void notify(QImage a);
public slots:
	void stop();
	

};

