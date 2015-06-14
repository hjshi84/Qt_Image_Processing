/********************************************************************************
** Form generated from reading UI file 'qttest.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST_H
#define UI_QTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qttestClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_10;
    QCheckBox *checkBox_2;
    QWidget *tab;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_18;
    QGroupBox *groupBox_9;
    QCheckBox *checkBox;
    QWidget *tab_4;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_5;
    QWidget *tab_5;
    QGroupBox *groupBox_6;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QGroupBox *groupBox_7;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QLabel *label_13;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_16;
    QTextEdit *textEdit_17;
    QTextEdit *textEdit_18;
    QLabel *label_14;
    QLabel *label_15;
    QTextEdit *textEdit_19;
    QTextEdit *textEdit_20;
    QTextEdit *textEdit_21;
    QTextEdit *textEdit_22;
    QTextEdit *textEdit_23;
    QTextEdit *textEdit_24;
    QLabel *label_16;
    QTextEdit *textEdit_25;
    QTextEdit *textEdit_26;
    QTextEdit *textEdit_27;
    QTextEdit *textEdit_28;
    QGroupBox *groupBox_12;
    QLabel *label_17;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qttestClass)
    {
        if (qttestClass->objectName().isEmpty())
            qttestClass->setObjectName(QStringLiteral("qttestClass"));
        qttestClass->resize(766, 531);
        centralWidget = new QWidget(qttestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 761, 501));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {  /* The tab widget frame */\n"
"         border-top: 2px solid #C2C7CB;\n"
"     }\n"
"QTabWidget::tab-bar {\n"
"		\n"
"         left: 5px;  /* move to the right by 5px */\n"
"     }\n"
"   /* Style the tab using the tab sub-control. Note that\n"
"         it reads QTabBar _not_ QTabWidget */\n"
" QTabBar::tab {\n"
"	font: 75 12pt \"\345\271\274\345\234\206\";\n"
"         background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                     stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                     stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"         border: 2px solid #C4C4C3;\n"
"         border-bottom-color: #C2C7CB;  /* same as the pane color */\n"
"         border-top-left-radius: 4px;\n"
"         border-top-right-radius: 4px;\n"
"         min-width: 25ex;\n"
"		 min-height:5ex;\n"
"         padding: 2px;\n"
"         \n"
"     }\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"         background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: "
                        "1,\n"
"                                     stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                     stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"     }\n"
"QTabBar::tab:selected {\n"
"         border-color: #9B9B9B;\n"
"         border-bottom-color: #C2C7CB;  /* same as pane color */\n"
"     }\n"
"QTabBar::tab:!selected {\n"
"         margin-top: 2px;  /* make non-selected tabs look smaller */\n"
"     }\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"         border: 2px solid #8f8f91;\n"
"         border-radius: 6px;\n"
"         background-color: qlineargradient(x1:0, y1: 0, x2: 0, y2: 1,\n"
"                                           stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"         min-width: 80px;\n"
"		 font: 10pt \"\351\273\221\344\275\223\";\n"
"     }\n"
" \n"
"     QPushButton:pressed {\n"
"         background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                           stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"     }\n"
"\n"
"QRadioButton{min-heigh"
                        "t:20;border:1px;font: 75 italic 11pt \"Times New Roman\";\n"
"}\n"
"\n"
"QGroupBox {border:2px groove\n"
"gray;border-radius:10px;padding:2px 4px;font: 75 13pt \"\345\271\274\345\234\206\";}\n"
"\n"
"QLabel{font: 75 italic 14pt \"\345\271\274\345\234\206\";}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 84, 23));
        pushButton->setStyleSheet(QStringLiteral(""));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(220, 0, 531, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 201, 141));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 30, 89, 24));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 60, 89, 24));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 100, 121, 19));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setValue(128);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(10, 100, 42, 22));
        spinBox->setMaximum(255);
        spinBox->setValue(128);
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 10, 89, 24));
        groupBox_10 = new QGroupBox(tab_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 250, 201, 80));
        checkBox_2 = new QCheckBox(groupBox_10);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(40, 40, 131, 16));
        checkBox_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\271\274\345\234\206\";"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 20, 84, 23));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 70, 201, 131));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(30, 30, 131, 24));
        radioButton_4->setChecked(true);
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(30, 60, 131, 24));
        radioButton_6 = new QRadioButton(groupBox_2);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(30, 90, 131, 24));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 250, 201, 121));
        radioButton_7 = new QRadioButton(groupBox_3);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(30, 30, 151, 24));
        radioButton_7->setChecked(true);
        radioButton_8 = new QRadioButton(groupBox_3);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(30, 70, 131, 24));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(220, 0, 531, 451));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setTextFormat(Qt::AutoText);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayoutWidget_3 = new QWidget(tab_3);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(220, 0, 531, 451));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral(""));
        label_10->setTextFormat(Qt::AutoText);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 20, 84, 23));
        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 60, 201, 161));
        radioButton_12 = new QRadioButton(groupBox_4);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(30, 30, 131, 24));
        radioButton_12->setChecked(true);
        radioButton_13 = new QRadioButton(groupBox_4);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(30, 60, 131, 24));
        radioButton_14 = new QRadioButton(groupBox_4);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setGeometry(QRect(30, 90, 131, 24));
        radioButton_15 = new QRadioButton(groupBox_4);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));
        radioButton_15->setGeometry(QRect(30, 120, 131, 24));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 240, 201, 101));
        radioButton_16 = new QRadioButton(groupBox_5);
        radioButton_16->setObjectName(QStringLiteral("radioButton_16"));
        radioButton_16->setGeometry(QRect(30, 30, 131, 24));
        radioButton_16->setCheckable(true);
        radioButton_16->setChecked(false);
        radioButton_17 = new QRadioButton(groupBox_5);
        radioButton_17->setObjectName(QStringLiteral("radioButton_17"));
        radioButton_17->setGeometry(QRect(30, 60, 131, 24));
        radioButton_18 = new QRadioButton(groupBox_5);
        radioButton_18->setObjectName(QStringLiteral("radioButton_18"));
        radioButton_18->setGeometry(QRect(20, 80, 131, 24));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 360, 201, 91));
        checkBox = new QCheckBox(groupBox_9);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 40, 141, 16));
        checkBox->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\271\274\345\234\206\";"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 30, 84, 23));
        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(20, 90, 131, 141));
        pushButton_6 = new QPushButton(groupBox_8);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 40, 84, 23));
        pushButton_7 = new QPushButton(groupBox_8);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 90, 84, 23));
        groupBox_11 = new QGroupBox(tab_4);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(20, 270, 131, 101));
        pushButton_5 = new QPushButton(groupBox_11);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 40, 84, 23));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(570, 20, 141, 141));
        radioButton_9 = new QRadioButton(groupBox_6);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(10, 30, 89, 24));
        radioButton_9->setChecked(true);
        radioButton_10 = new QRadioButton(groupBox_6);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(10, 70, 89, 24));
        radioButton_11 = new QRadioButton(groupBox_6);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(10, 110, 89, 24));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 20, 521, 421));
        textEdit = new QTextEdit(groupBox_7);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 30, 51, 31));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QStringLiteral("text.setAlignment(Qt::AlignHCenter);"));
        textEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit_2 = new QTextEdit(groupBox_7);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(290, 30, 51, 31));
        textEdit_2->setAutoFillBackground(true);
        textEdit_2->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_3 = new QTextEdit(groupBox_7);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(340, 30, 51, 31));
        textEdit_3->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_4 = new QTextEdit(groupBox_7);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(340, 60, 51, 31));
        textEdit_4->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_5 = new QTextEdit(groupBox_7);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(290, 60, 51, 31));
        textEdit_5->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_6 = new QTextEdit(groupBox_7);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(240, 60, 51, 31));
        textEdit_6->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_9 = new QTextEdit(groupBox_7);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(240, 90, 51, 31));
        textEdit_9->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_7 = new QTextEdit(groupBox_7);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(340, 90, 51, 31));
        textEdit_7->setStyleSheet(QStringLiteral("font: 75 9pt \"Arial\";"));
        textEdit_7->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_8 = new QTextEdit(groupBox_7);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(290, 90, 51, 31));
        textEdit_8->setInputMethodHints(Qt::ImhDigitsOnly);
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 60, 91, 31));
        label_13->setStyleSheet(QStringLiteral(""));
        textEdit_10 = new QTextEdit(groupBox_7);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(340, 140, 51, 31));
        textEdit_10->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_11 = new QTextEdit(groupBox_7);
        textEdit_11->setObjectName(QStringLiteral("textEdit_11"));
        textEdit_11->setGeometry(QRect(290, 170, 51, 31));
        textEdit_11->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_12 = new QTextEdit(groupBox_7);
        textEdit_12->setObjectName(QStringLiteral("textEdit_12"));
        textEdit_12->setGeometry(QRect(340, 170, 51, 31));
        textEdit_12->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_13 = new QTextEdit(groupBox_7);
        textEdit_13->setObjectName(QStringLiteral("textEdit_13"));
        textEdit_13->setGeometry(QRect(240, 170, 51, 31));
        textEdit_13->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_14 = new QTextEdit(groupBox_7);
        textEdit_14->setObjectName(QStringLiteral("textEdit_14"));
        textEdit_14->setGeometry(QRect(290, 140, 51, 31));
        textEdit_14->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_15 = new QTextEdit(groupBox_7);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));
        textEdit_15->setGeometry(QRect(340, 200, 51, 31));
        textEdit_15->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_15->setOverwriteMode(false);
        textEdit_16 = new QTextEdit(groupBox_7);
        textEdit_16->setObjectName(QStringLiteral("textEdit_16"));
        textEdit_16->setGeometry(QRect(240, 200, 51, 31));
        textEdit_16->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_17 = new QTextEdit(groupBox_7);
        textEdit_17->setObjectName(QStringLiteral("textEdit_17"));
        textEdit_17->setGeometry(QRect(240, 140, 51, 31));
        textEdit_17->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_18 = new QTextEdit(groupBox_7);
        textEdit_18->setObjectName(QStringLiteral("textEdit_18"));
        textEdit_18->setGeometry(QRect(290, 200, 51, 31));
        textEdit_18->setInputMethodHints(Qt::ImhDigitsOnly);
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 170, 111, 31));
        label_15 = new QLabel(groupBox_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 360, 101, 21));
        textEdit_19 = new QTextEdit(groupBox_7);
        textEdit_19->setObjectName(QStringLiteral("textEdit_19"));
        textEdit_19->setGeometry(QRect(240, 360, 51, 31));
        textEdit_19->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_20 = new QTextEdit(groupBox_7);
        textEdit_20->setObjectName(QStringLiteral("textEdit_20"));
        textEdit_20->setGeometry(QRect(290, 280, 51, 31));
        textEdit_20->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_21 = new QTextEdit(groupBox_7);
        textEdit_21->setObjectName(QStringLiteral("textEdit_21"));
        textEdit_21->setGeometry(QRect(340, 310, 51, 31));
        textEdit_21->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_21->setOverwriteMode(false);
        textEdit_22 = new QTextEdit(groupBox_7);
        textEdit_22->setObjectName(QStringLiteral("textEdit_22"));
        textEdit_22->setGeometry(QRect(340, 280, 51, 31));
        textEdit_22->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_23 = new QTextEdit(groupBox_7);
        textEdit_23->setObjectName(QStringLiteral("textEdit_23"));
        textEdit_23->setGeometry(QRect(290, 250, 51, 31));
        textEdit_23->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_24 = new QTextEdit(groupBox_7);
        textEdit_24->setObjectName(QStringLiteral("textEdit_24"));
        textEdit_24->setGeometry(QRect(240, 280, 51, 31));
        textEdit_24->setInputMethodHints(Qt::ImhDigitsOnly);
        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 270, 101, 41));
        textEdit_25 = new QTextEdit(groupBox_7);
        textEdit_25->setObjectName(QStringLiteral("textEdit_25"));
        textEdit_25->setGeometry(QRect(240, 310, 51, 31));
        textEdit_25->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_26 = new QTextEdit(groupBox_7);
        textEdit_26->setObjectName(QStringLiteral("textEdit_26"));
        textEdit_26->setGeometry(QRect(340, 250, 51, 31));
        textEdit_26->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_27 = new QTextEdit(groupBox_7);
        textEdit_27->setObjectName(QStringLiteral("textEdit_27"));
        textEdit_27->setGeometry(QRect(290, 310, 51, 31));
        textEdit_27->setInputMethodHints(Qt::ImhDigitsOnly);
        textEdit_28 = new QTextEdit(groupBox_7);
        textEdit_28->setObjectName(QStringLiteral("textEdit_28"));
        textEdit_28->setGeometry(QRect(240, 250, 51, 31));
        textEdit_28->setInputMethodHints(Qt::ImhDigitsOnly);
        groupBox_12 = new QGroupBox(tab_5);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(570, 220, 141, 221));
        label_17 = new QLabel(groupBox_12);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(13, 50, 111, 141));
        tabWidget->addTab(tab_5, QString());
        qttestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qttestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 766, 23));
        qttestClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(qttestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qttestClass->setStatusBar(statusBar);

        retranslateUi(qttestClass);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qttestClass);
    } // setupUi

    void retranslateUi(QMainWindow *qttestClass)
    {
        qttestClass->setWindowTitle(QApplication::translate("qttestClass", "qttest", 0));
        pushButton->setText(QApplication::translate("qttestClass", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        label_2->setText(QApplication::translate("qttestClass", "\347\233\264\346\226\271\345\233\276", 0));
        label->setText(QApplication::translate("qttestClass", "\345\216\237\345\233\276", 0));
        label_3->setText(QApplication::translate("qttestClass", "\344\272\214\345\200\274\345\214\226", 0));
        label_4->setText(QApplication::translate("qttestClass", "\345\215\267\347\247\257/\347\233\264\346\226\271\345\233\276", 0));
        groupBox->setTitle(QApplication::translate("qttestClass", "\347\256\227\346\263\225", 0));
        radioButton->setText(QApplication::translate("qttestClass", "OTSU", 0));
        radioButton_2->setText(QApplication::translate("qttestClass", "Entrupy", 0));
        radioButton_3->setText(QString());
        groupBox_10->setTitle(QApplication::translate("qttestClass", "\345\215\267\347\247\257\346\223\215\344\275\234", 0));
        checkBox_2->setText(QApplication::translate("qttestClass", "Convolution", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("qttestClass", "\344\275\234\344\270\232\344\270\200", 0));
        pushButton_2->setText(QApplication::translate("qttestClass", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        groupBox_2->setTitle(QApplication::translate("qttestClass", "\350\276\271\347\274\230\346\243\200\346\265\213", 0));
        radioButton_4->setText(QApplication::translate("qttestClass", "Roberts Operator", 0));
        radioButton_5->setText(QApplication::translate("qttestClass", "Prewitt Operator", 0));
        radioButton_6->setText(QApplication::translate("qttestClass", "Sobel Operator", 0));
        groupBox_3->setTitle(QApplication::translate("qttestClass", "\351\231\244\345\231\252", 0));
        radioButton_7->setText(QApplication::translate("qttestClass", "Gaussian Reduction", 0));
        radioButton_8->setText(QApplication::translate("qttestClass", "Median Filter", 0));
        label_5->setText(QApplication::translate("qttestClass", "\350\276\271\347\274\230\346\243\200\346\265\213", 0));
        label_6->setText(QApplication::translate("qttestClass", "\345\216\237\345\233\276", 0));
        label_7->setText(QApplication::translate("qttestClass", "\351\231\244\345\231\252", 0));
        label_8->setText(QApplication::translate("qttestClass", "\350\276\271\347\274\230+\351\231\244\345\231\252", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("qttestClass", "\344\275\234\344\270\232\344\272\214", 0));
        label_9->setText(QApplication::translate("qttestClass", "\345\237\272\346\234\254", 0));
        label_10->setText(QApplication::translate("qttestClass", "\345\216\237\345\233\276", 0));
        label_11->setText(QApplication::translate("qttestClass", "\351\253\230\347\272\247", 0));
        label_12->setText(QApplication::translate("qttestClass", "skel\350\277\230\345\216\237", 0));
        pushButton_3->setText(QApplication::translate("qttestClass", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        groupBox_4->setTitle(QApplication::translate("qttestClass", "\345\237\272\346\234\254\346\223\215\344\275\234", 0));
        radioButton_12->setText(QApplication::translate("qttestClass", "erosion", 0));
        radioButton_13->setText(QApplication::translate("qttestClass", "dilation", 0));
        radioButton_14->setText(QApplication::translate("qttestClass", "opening", 0));
        radioButton_15->setText(QApplication::translate("qttestClass", "closing", 0));
        groupBox_5->setTitle(QApplication::translate("qttestClass", "\351\253\230\347\272\247\346\223\215\344\275\234", 0));
        radioButton_16->setText(QApplication::translate("qttestClass", "distance", 0));
        radioButton_17->setText(QApplication::translate("qttestClass", "skeleton", 0));
        radioButton_18->setText(QString());
        groupBox_9->setTitle(QApplication::translate("qttestClass", "\351\252\250\346\236\266\346\217\220\345\217\226\346\250\241\345\274\217", 0));
        checkBox->setText(QApplication::translate("qttestClass", "\345\277\253\351\200\237\351\252\250\351\252\274\347\272\277\346\217\220\345\217\226", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("qttestClass", "\344\275\234\344\270\232\344\270\211&&\345\233\233", 0));
        pushButton_4->setText(QApplication::translate("qttestClass", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        groupBox_8->setTitle(QApplication::translate("qttestClass", "\347\201\260\345\272\246\346\223\215\344\275\234", 0));
        pushButton_6->setText(QApplication::translate("qttestClass", "\350\276\271\347\274\230\346\217\220\345\217\226", 0));
        pushButton_7->setText(QApplication::translate("qttestClass", "\346\242\257\345\272\246", 0));
        groupBox_11->setTitle(QApplication::translate("qttestClass", "\347\201\260\345\272\246\351\207\215\345\273\272", 0));
        pushButton_5->setText(QApplication::translate("qttestClass", "\351\207\215\345\273\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("qttestClass", "\344\275\234\344\270\232\344\272\224", 0));
        groupBox_6->setTitle(QApplication::translate("qttestClass", "\346\242\257\345\272\246\345\217\212\350\276\271\347\274\230", 0));
        radioButton_9->setText(QApplication::translate("qttestClass", "\346\240\207\345\207\206", 0));
        radioButton_10->setText(QApplication::translate("qttestClass", "\345\244\226\351\203\250", 0));
        radioButton_11->setText(QApplication::translate("qttestClass", "\345\206\205\351\203\250", 0));
        groupBox_7->setTitle(QApplication::translate("qttestClass", "\346\250\241\346\235\277", 0));
        label_13->setText(QApplication::translate("qttestClass", "\344\272\214\345\200\274\346\250\241\346\235\277\357\274\232", 0));
        label_14->setText(QApplication::translate("qttestClass", "\347\201\260\345\272\246\346\250\241\346\235\277\357\274\232", 0));
        label_15->setText(QApplication::translate("qttestClass", "\351\253\230\346\226\257\346\250\241\346\235\277\357\274\232", 0));
        label_16->setText(QApplication::translate("qttestClass", "\345\215\267\347\247\257\346\250\241\346\235\277\357\274\232", 0));
        groupBox_12->setTitle(QApplication::translate("qttestClass", "Info", 0));
        label_17->setText(QApplication::translate("qttestClass", "<html><head/><body><p align=\"center\">\346\226\275\351\273\204\351\252\217</p><p align=\"center\">1120829032</p><p align=\"center\">B1208293</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("qttestClass", "\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class qttestClass: public Ui_qttestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST_H
