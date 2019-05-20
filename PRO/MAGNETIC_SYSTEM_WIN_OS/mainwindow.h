#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QTimer>
#include <QString>
#include <QDebug>
#include <QByteArray>
#include <QMessageBox>
#include <QSerialPortInfo>
#include "project.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void stringToHex(QString str, QByteArray &senddata);
    char convertHexChar(char ch);

private:
    Ui::MainWindow *ui;
    QTimer *repeatSendTimer;
    QSerialPort *serial;
    QString currentConnectCom;
    bool recAsciiFormat;
    bool sendAsciiFormat;
    bool repeatSend;
    bool enableDrawFunction;
    bool pauseComOutput;

    void sendFskSignal(FSK_INFO* fsk);

    void refreshTheUSBList( void );

    void softAutoWriteUart( void );

    quint8 hexstrToInt(QString str);

    QByteArray statusBarComInfo;


private slots:

    void on_serial_recv_msg();

    void on_pushButton_scan_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_open_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_clear_clicked();

    void on_radioButton_send_ascii_clicked();

    void on_radioButton_send_hex_clicked();

    void on_radioButton_rec_ascii_clicked();

    void on_radioButton_rec_hex_clicked();

    void on_checkBox_wordwrap_stateChanged(int arg1);

    void on_spinBox_repeat_valueChanged(int arg1);

    void on_spinBox_repeat_valueChanged(const QString &arg1);

    void on_comboBox_baudrate_currentIndexChanged(int index);

    void on_comboBox_stopbits_currentIndexChanged(int index);

    void on_comboBox_databits_currentIndexChanged(int index);

    void on_comboBox_checkdigit_currentIndexChanged(int index);

    void on_comboBox_flowctrl_currentIndexChanged(int index);

    void on_comboBox_flowctrl_activated(const QString &arg1);

    void on_checkBox_repeat_stateChanged(int arg1);

    void on_checkBox_repeat_clicked(bool checked);

    void on_pushButton_fsk_send_clicked();

    void on_pushButton_fsk_clear_clicked();
};

#endif // MAINWINDOW_H
