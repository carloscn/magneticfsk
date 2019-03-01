/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox_serialPort;
    QLabel *label_2;
    QComboBox *comboBox_baudrate;
    QLabel *DataBits;
    QComboBox *comboBox_databits;
    QLabel *label_3;
    QComboBox *comboBox_stopbits;
    QLabel *label_4;
    QComboBox *comboBox_checkdigit;
    QLabel *label_5;
    QComboBox *comboBox_flowctrl;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_scan;
    QPushButton *pushButton_pause;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_rec_ascii;
    QRadioButton *radioButton_rec_hex;
    QCheckBox *checkBox_wordwrap;
    QCheckBox *checkBox_dispsend;
    QCheckBox *checkBox_disptime;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_send_ascii;
    QRadioButton *radioButton_send_hex;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_repeat;
    QSpinBox *spinBox_repeat;
    QLabel *label_6;
    QTabWidget *tabWidget;
    QWidget *draw;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_fsk_carry_h;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_fsk_carry_l;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *lineEdit_fsk_value;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QLineEdit *lineEdit_fsk_repeat_times;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QLineEdit *lineEdit_fsk_number_period;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *radioButton_fsk_dec_mode;
    QRadioButton *radioButton_fsk_hex_mode;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_fsk_send;
    QPushButton *pushButton_fsk_clear;
    QTextBrowser *textBrowser_fsk;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *textBrowser_rec;
    QTextEdit *textEdit_send;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_send;
    QPushButton *pushButton_clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(997, 629);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox_serialPort = new QComboBox(groupBox);
        comboBox_serialPort->addItem(QString());
        comboBox_serialPort->setObjectName(QStringLiteral("comboBox_serialPort"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_serialPort);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox_baudrate = new QComboBox(groupBox);
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->setObjectName(QStringLiteral("comboBox_baudrate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_baudrate);

        DataBits = new QLabel(groupBox);
        DataBits->setObjectName(QStringLiteral("DataBits"));

        formLayout->setWidget(2, QFormLayout::LabelRole, DataBits);

        comboBox_databits = new QComboBox(groupBox);
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->setObjectName(QStringLiteral("comboBox_databits"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_databits);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        comboBox_stopbits = new QComboBox(groupBox);
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->setObjectName(QStringLiteral("comboBox_stopbits"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_stopbits);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox_checkdigit = new QComboBox(groupBox);
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->setObjectName(QStringLiteral("comboBox_checkdigit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_checkdigit);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        comboBox_flowctrl = new QComboBox(groupBox);
        comboBox_flowctrl->addItem(QString());
        comboBox_flowctrl->addItem(QString());
        comboBox_flowctrl->addItem(QString());
        comboBox_flowctrl->setObjectName(QStringLiteral("comboBox_flowctrl"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox_flowctrl);


        verticalLayout_5->addLayout(formLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_scan = new QPushButton(groupBox);
        pushButton_scan->setObjectName(QStringLiteral("pushButton_scan"));

        horizontalLayout_6->addWidget(pushButton_scan);

        pushButton_pause = new QPushButton(groupBox);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));

        horizontalLayout_6->addWidget(pushButton_pause);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_open = new QPushButton(groupBox);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        horizontalLayout_7->addWidget(pushButton_open);

        pushButton_close = new QPushButton(groupBox);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        horizontalLayout_7->addWidget(pushButton_close);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_2);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_rec_ascii = new QRadioButton(groupBox_2);
        radioButton_rec_ascii->setObjectName(QStringLiteral("radioButton_rec_ascii"));
        radioButton_rec_ascii->setChecked(true);

        horizontalLayout->addWidget(radioButton_rec_ascii);

        radioButton_rec_hex = new QRadioButton(groupBox_2);
        radioButton_rec_hex->setObjectName(QStringLiteral("radioButton_rec_hex"));

        horizontalLayout->addWidget(radioButton_rec_hex);


        verticalLayout_2->addLayout(horizontalLayout);

        checkBox_wordwrap = new QCheckBox(groupBox_2);
        checkBox_wordwrap->setObjectName(QStringLiteral("checkBox_wordwrap"));

        verticalLayout_2->addWidget(checkBox_wordwrap);

        checkBox_dispsend = new QCheckBox(groupBox_2);
        checkBox_dispsend->setObjectName(QStringLiteral("checkBox_dispsend"));

        verticalLayout_2->addWidget(checkBox_dispsend);

        checkBox_disptime = new QCheckBox(groupBox_2);
        checkBox_disptime->setObjectName(QStringLiteral("checkBox_disptime"));

        verticalLayout_2->addWidget(checkBox_disptime);


        horizontalLayout_13->addLayout(verticalLayout_2);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_3);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_send_ascii = new QRadioButton(groupBox_3);
        radioButton_send_ascii->setObjectName(QStringLiteral("radioButton_send_ascii"));
        radioButton_send_ascii->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_send_ascii);

        radioButton_send_hex = new QRadioButton(groupBox_3);
        radioButton_send_hex->setObjectName(QStringLiteral("radioButton_send_hex"));

        horizontalLayout_3->addWidget(radioButton_send_hex);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_repeat = new QCheckBox(groupBox_3);
        checkBox_repeat->setObjectName(QStringLiteral("checkBox_repeat"));

        horizontalLayout_2->addWidget(checkBox_repeat);

        spinBox_repeat = new QSpinBox(groupBox_3);
        spinBox_repeat->setObjectName(QStringLiteral("spinBox_repeat"));
        spinBox_repeat->setMaximum(999999);
        spinBox_repeat->setValue(1000);

        horizontalLayout_2->addWidget(spinBox_repeat);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(groupBox_3);


        horizontalLayout_4->addLayout(verticalLayout_6);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        draw = new QWidget();
        draw->setObjectName(QStringLiteral("draw"));
        widget = new QWidget(draw);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 701, 221));
        horizontalLayout_18 = new QHBoxLayout(widget);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        lineEdit_fsk_carry_h = new QLineEdit(widget);
        lineEdit_fsk_carry_h->setObjectName(QStringLiteral("lineEdit_fsk_carry_h"));

        horizontalLayout_9->addWidget(lineEdit_fsk_carry_h);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_10->addWidget(label_8);

        lineEdit_fsk_carry_l = new QLineEdit(widget);
        lineEdit_fsk_carry_l->setObjectName(QStringLiteral("lineEdit_fsk_carry_l"));

        horizontalLayout_10->addWidget(lineEdit_fsk_carry_l);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_11->addWidget(label_9);

        lineEdit_fsk_value = new QLineEdit(widget);
        lineEdit_fsk_value->setObjectName(QStringLiteral("lineEdit_fsk_value"));

        horizontalLayout_11->addWidget(lineEdit_fsk_value);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_14->addWidget(label_10);

        lineEdit_fsk_repeat_times = new QLineEdit(widget);
        lineEdit_fsk_repeat_times->setObjectName(QStringLiteral("lineEdit_fsk_repeat_times"));

        horizontalLayout_14->addWidget(lineEdit_fsk_repeat_times);


        verticalLayout->addLayout(horizontalLayout_14);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout->addWidget(label_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_15->addWidget(label_11);

        lineEdit_fsk_number_period = new QLineEdit(widget);
        lineEdit_fsk_number_period->setObjectName(QStringLiteral("lineEdit_fsk_number_period"));

        horizontalLayout_15->addWidget(lineEdit_fsk_number_period);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        radioButton_fsk_dec_mode = new QRadioButton(widget);
        radioButton_fsk_dec_mode->setObjectName(QStringLiteral("radioButton_fsk_dec_mode"));

        horizontalLayout_16->addWidget(radioButton_fsk_dec_mode);

        radioButton_fsk_hex_mode = new QRadioButton(widget);
        radioButton_fsk_hex_mode->setObjectName(QStringLiteral("radioButton_fsk_hex_mode"));

        horizontalLayout_16->addWidget(radioButton_fsk_hex_mode);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        pushButton_fsk_send = new QPushButton(widget);
        pushButton_fsk_send->setObjectName(QStringLiteral("pushButton_fsk_send"));

        horizontalLayout_17->addWidget(pushButton_fsk_send);

        pushButton_fsk_clear = new QPushButton(widget);
        pushButton_fsk_clear->setObjectName(QStringLiteral("pushButton_fsk_clear"));

        horizontalLayout_17->addWidget(pushButton_fsk_clear);


        verticalLayout->addLayout(horizontalLayout_17);


        horizontalLayout_18->addLayout(verticalLayout);

        textBrowser_fsk = new QTextBrowser(widget);
        textBrowser_fsk->setObjectName(QStringLiteral("textBrowser_fsk"));

        horizontalLayout_18->addWidget(textBrowser_fsk);

        tabWidget->addTab(draw, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        textBrowser_rec = new QTextBrowser(tab);
        textBrowser_rec->setObjectName(QStringLiteral("textBrowser_rec"));
        textBrowser_rec->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu Mono\";"));

        verticalLayout_8->addWidget(textBrowser_rec);

        textEdit_send = new QTextEdit(tab);
        textEdit_send->setObjectName(QStringLiteral("textEdit_send"));
        textEdit_send->setMinimumSize(QSize(0, 50));
        textEdit_send->setMaximumSize(QSize(16777215, 120));

        verticalLayout_8->addWidget(textEdit_send);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_send = new QPushButton(tab);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout_5->addWidget(pushButton_send);

        pushButton_clear = new QPushButton(tab);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        horizontalLayout_5->addWidget(pushButton_clear);


        verticalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_8);

        tabWidget->addTab(tab, QString());

        horizontalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 997, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Serial Port Configration:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Serial Port:", nullptr));
        comboBox_serialPort->setItemText(0, QApplication::translate("MainWindow", "None", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Baud Rate:", nullptr));
        comboBox_baudrate->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        comboBox_baudrate->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        comboBox_baudrate->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        comboBox_baudrate->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        comboBox_baudrate->setItemText(4, QApplication::translate("MainWindow", "19200", nullptr));
        comboBox_baudrate->setItemText(5, QApplication::translate("MainWindow", "38400", nullptr));
        comboBox_baudrate->setItemText(6, QApplication::translate("MainWindow", "57600", nullptr));
        comboBox_baudrate->setItemText(7, QApplication::translate("MainWindow", "115200", nullptr));

        DataBits->setText(QApplication::translate("MainWindow", "Data Bits:", nullptr));
        comboBox_databits->setItemText(0, QApplication::translate("MainWindow", "5 Bits", nullptr));
        comboBox_databits->setItemText(1, QApplication::translate("MainWindow", "6 Bits", nullptr));
        comboBox_databits->setItemText(2, QApplication::translate("MainWindow", "7 Bits", nullptr));
        comboBox_databits->setItemText(3, QApplication::translate("MainWindow", "8 Bits", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Stop Bits:", nullptr));
        comboBox_stopbits->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_stopbits->setItemText(1, QApplication::translate("MainWindow", "1.5", nullptr));
        comboBox_stopbits->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Partity:", nullptr));
        comboBox_checkdigit->setItemText(0, QApplication::translate("MainWindow", "None", nullptr));
        comboBox_checkdigit->setItemText(1, QApplication::translate("MainWindow", "Even", nullptr));
        comboBox_checkdigit->setItemText(2, QApplication::translate("MainWindow", "Odd", nullptr));
        comboBox_checkdigit->setItemText(3, QApplication::translate("MainWindow", "Space", nullptr));
        comboBox_checkdigit->setItemText(4, QApplication::translate("MainWindow", "Mark", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "Flow Ctrl:", nullptr));
        comboBox_flowctrl->setItemText(0, QApplication::translate("MainWindow", "Disable", nullptr));
        comboBox_flowctrl->setItemText(1, QApplication::translate("MainWindow", "Hardware", nullptr));
        comboBox_flowctrl->setItemText(2, QApplication::translate("MainWindow", "Software", nullptr));

        pushButton_scan->setText(QApplication::translate("MainWindow", "scan", nullptr));
        pushButton_pause->setText(QApplication::translate("MainWindow", "pause", nullptr));
        pushButton_open->setText(QApplication::translate("MainWindow", "open", nullptr));
        pushButton_close->setText(QApplication::translate("MainWindow", "close", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Recived Configration:", nullptr));
        radioButton_rec_ascii->setText(QApplication::translate("MainWindow", "ASCII", nullptr));
        radioButton_rec_hex->setText(QApplication::translate("MainWindow", "Hex", nullptr));
        checkBox_wordwrap->setText(QApplication::translate("MainWindow", "Word wrap", nullptr));
        checkBox_dispsend->setText(QApplication::translate("MainWindow", "Display Send", nullptr));
        checkBox_disptime->setText(QApplication::translate("MainWindow", "Display Time", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Send Configration:", nullptr));
        radioButton_send_ascii->setText(QApplication::translate("MainWindow", "ASCII", nullptr));
        radioButton_send_hex->setText(QApplication::translate("MainWindow", "Hex", nullptr));
        checkBox_repeat->setText(QApplication::translate("MainWindow", "Repeat Send", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ms", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "FSK H_Carry: ", nullptr));
        lineEdit_fsk_carry_h->setText(QApplication::translate("MainWindow", "2000", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "FSK_L_Carry: ", nullptr));
        lineEdit_fsk_carry_l->setText(QApplication::translate("MainWindow", "500", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Value:       ", nullptr));
        lineEdit_fsk_value->setText(QApplication::translate("MainWindow", "FF", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Repeat Times:", nullptr));
        lineEdit_fsk_repeat_times->setText(QApplication::translate("MainWindow", "100", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "p.s:0 is stop, 0xFF is always.", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Number Period:", nullptr));
        lineEdit_fsk_number_period->setText(QApplication::translate("MainWindow", "50", nullptr));
        radioButton_fsk_dec_mode->setText(QApplication::translate("MainWindow", "Dec Mode", nullptr));
        radioButton_fsk_hex_mode->setText(QApplication::translate("MainWindow", "Hex Mode", nullptr));
        pushButton_fsk_send->setText(QApplication::translate("MainWindow", "Send", nullptr));
        pushButton_fsk_clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(draw), QApplication::translate("MainWindow", "Magnetic FSK", nullptr));
        pushButton_send->setText(QApplication::translate("MainWindow", "send", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Word Trans", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
