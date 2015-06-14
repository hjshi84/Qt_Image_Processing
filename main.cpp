#include "qttest.h"
#include <QtWidgets/QApplication>
#include<QWidget>
#include<QPalette>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qttest w;	
	w.setWindowOpacity(0.98);
	w.show();
	
	return a.exec();
}
