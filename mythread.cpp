#include "mythread.h"
#include <qttest.h>

mythread::mythread(QImage pic,int type,unsigned char gray[3][3],unsigned char binary[3][3])
{
	thimg=pic;
	types=type;
	stopornot=false;
	qtt.setstruct(gray,binary);
}
mythread::mythread(QImage pic,QImage mark,int type,unsigned char gray[3][3],unsigned char binary[3][3])
{
	thimg=pic;
	types=type;
	marker=mark;
	stopornot=false;
	qtt.setstruct(gray,binary);
}

mythread::~mythread(void)
{
	thimg.~QImage();
	qtt.~qttest();
	exit();
}

void mythread::run(){
	if(types==1){
		thimg=qtt.transGSC(thimg,128);
		QImage dis(thimg.size(), QImage::Format_RGB32);
		qtt.picolor(dis,0);
		QImage temp(thimg.size(), QImage::Format_RGB32);
		temp=qtt.drawerodis(thimg,dis,128);
		while(!qtt.issame(temp,thimg))
		{
			if(stopornot) break;
			thimg=temp;
			temp=qtt.drawerodis(thimg,dis,128);
			emit notify(dis,thimg);

		}
	}
	else if (types==2){
		thimg=qtt.transGSC(thimg,128);
		//完整骨骼算法
		QImage dis(thimg.size(), QImage::Format_RGB32);
		qtt.picolor(dis,0);
		QImage temp(thimg.size(), QImage::Format_RGB32);
		bool value=true;//停止的标志
		int maxvalue=0;
		temp=qtt.drawskeleton(thimg,dis,maxvalue,value);
		while(value)
		{
			value=false;
			if(stopornot) break;
			thimg=temp;
			temp=qtt.drawskeleton(thimg,dis,maxvalue,value);
			emit notify(dis,temp);
			//sleep(1);
		}
		QImage skelbin=qtt.dis2skel(dis);
		qtt.picolor(temp,0);
		while(maxvalue>0){
			qtt.skelrecon(dis,maxvalue,temp);
			emit notify(temp,skelbin);
			//sleep(1);
		}
	}
	else if (types==3){
		thimg=qtt.transGSC(thimg,128);
		QImage dis(thimg.size(), QImage::Format_RGB32);
		qtt.picolor(dis,0);
		QImage recon(thimg.size(), QImage::Format_RGB32);
		qtt.picolor(recon,0);
		QImage temp(thimg.size(), QImage::Format_RGB32);
		bool value=true;//停止的标志
		temp=qtt.drawskeleton2(thimg,dis,recon,value);
		while(value)
		{
			value=false;
			if(stopornot) break;
			thimg=temp;
			temp=qtt.drawskeleton2(thimg,dis,recon,value);
			emit notify(dis,temp);
			//sleep(1);
		}
		qtt.getskel(dis,recon);
		int maxvalue=qtt.getmaxvalue(recon);
		qtt.picolor(temp,0);
		while(maxvalue>0){
			qtt.skelrecon(recon,maxvalue,temp);
			emit notify(temp,dis);
			//sleep(1);
		}
	}
	else if (types==4){
		thimg=qtt.transGSC(thimg,128);
		//快速骨骼算法
		qtt.fastskel(thimg);
		emit notify(thimg,thimg);
	}
	else if (types==5){
		bool stab=false;
		while(!stab){
			if (stopornot) break;
			marker=qtt.reconstruction(thimg,marker,stab);
			emit notify(marker);
		}
	}
}

void mythread::stop(){
	stopornot=true;
}