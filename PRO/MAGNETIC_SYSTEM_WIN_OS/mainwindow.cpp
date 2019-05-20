#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Magnetic Fsk Transmit System"));
    serial = new QSerialPort();
    refreshTheUSBList();
    connect(serial,SIGNAL(readyRead()),this,SLOT( serialRcvData() ) );

    // value init.
    sendAsciiFormat = true;
    recAsciiFormat = true;
    pauseComOutput = false;

    // ui
    ui->pushButton_close->setEnabled(false);
    ui->pushButton_open->setEnabled(true);
    ui->pushButton_scan->setEnabled(true);
    ui->comboBox_baudrate->setCurrentIndex( CONFIG_BAUDRATE_115200_INDEX );
    ui->comboBox_checkdigit->setCurrentIndex( CONFIG_PARITY_NONE_INDEX );
    ui->comboBox_databits->setCurrentIndex( CONFIG_DATABITS_8_INDEX );
    ui->comboBox_stopbits->setCurrentText( CONFIG_STOPBIT_ONE_INDEX );
    ui->comboBox_flowctrl->setCurrentIndex( CONFIG_FLOWCTRL_NONE_INDEX );

    // timer
    repeatSendTimer = new QTimer(this);


    connect( repeatSendTimer, SIGNAL(timeout()), this, SLOT(softAutoWriteUart()) );
    // FSK hex mode and dec mode radio button config.
    QButtonGroup* pButtonGroup = new QButtonGroup(this);
    pButtonGroup->addButton(ui->radioButton_fsk_dec_mode,1);
    pButtonGroup->addButton(ui->radioButton_fsk_hex_mode,2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_serial_recv_msg( void )
{
    QByteArray recvArray;
    QString recvStr;
    recvArray = serial->readAll();
    recvStr = QString(recvArray);
}


void MainWindow::softAutoWriteUart( void )
{
    QString input;
    QByteArray temp;
    qDebug() << "Hello!!!! Timer!";
    if( input.isEmpty() == true ) {
        QMessageBox::warning(this,"Warring","The text is blank!\n Please input the data then send...");
        return;
    }else {

        if( sendAsciiFormat == true ) {
            serial->write( input.toLatin1() );
            qDebug() << "UART SendAscii : " << input.toLatin1();
        }else{
            stringToHex(input, temp);
            serial->write( temp.toHex() );
            qDebug() << "UART SendHex : " << temp.toHex();
        }
    }

}
// 0       1      2      3           4      5
// STATE | NAME | BAUD | DATABAYTE | STOP | PARITY |
void MainWindow::on_pushButton_open_clicked()
{

    qint8 comboxIndex = 0xff;
    // set baud rate.
    comboxIndex = ui->comboBox_baudrate->currentIndex();
    qDebug() << "COM Config Info: ";
    switch( comboxIndex ) {
    case CONFIG_BAUDRATE_1200_INDEX:
        serial->setBaudRate(QSerialPort::Baud1200);

        qDebug() << "Baud Rate: 1200; ";
        break;
    case CONFIG_BAUDRATE_2400_INDEX:
        serial->setBaudRate(QSerialPort::Baud2400);

        qDebug() << "Baud Rate: 2400; ";
        break;
    case CONFIG_BAUDRATE_4800_INDEX:
        serial->setBaudRate(QSerialPort::Baud4800);
        qDebug() << "Baud Rate: 4800; ";

        break;
    case CONFIG_BAUDRATE_9600_INDEX:
        serial->setBaudRate(QSerialPort::Baud9600);
        qDebug() << "Baud Rate: 9600; ";

        break;
    case CONFIG_BAUDRATE_19200_INDEX:
        serial->setBaudRate(QSerialPort::Baud19200);
        qDebug() << "Baud Rate: 19200; ";

        break;
    case CONFIG_BAUDRATE_38400_INDEX:
        serial->setBaudRate(QSerialPort::Baud38400);
        qDebug() << "Baud Rate: 38400; ";

        break;
    case CONFIG_BAUDRATE_57600_INDEX:
        serial->setBaudRate(QSerialPort::Baud57600);
        qDebug() << "Baud Rate: 57600; ";

        break;
    case CONFIG_BAUDRATE_115200_INDEX:
        serial->setBaudRate(QSerialPort::Baud115200);
        qDebug() << "Baud Rate: 115200; ";

        break;
    }
    // set stop bits.
    comboxIndex = ui->comboBox_stopbits->currentIndex();

    switch (comboxIndex) {
    case CONFIG_STOPBIT_ONE_INDEX:
        serial->setStopBits(QSerialPort::OneStop);
        qDebug() << "stop bits: 1 bit; ";
        //statusBarComInfo.at(4) = ""
        break;
    case CONFIG_STOPBIT_ONEANDHALF_INDEX:
        serial->setStopBits(QSerialPort::OneAndHalfStop);
        qDebug() << "stop bits: 1.5 bits;";
        break;
    case CONFIG_STOPBIT_TWO_INDEX:
        serial->setStopBits(QSerialPort::TwoStop);
        qDebug() << "stop bits: 2 bits; ";
        break;
    }

    // set parity.
    comboxIndex = ui->comboBox_checkdigit->currentIndex();
    switch( comboxIndex ) {

    case CONFIG_PARITY_NONE_INDEX:
        serial->setParity( QSerialPort::NoParity );
        qDebug() << "partiy set: noParity.";
        break;

    case CONFIG_PARITY_EVEN_INDEX:
        serial->setParity( QSerialPort::EvenParity );
        qDebug() << "partiy set: EvenParity.";
        break;

    case CONFIG_PARITY_ODD_INDEX:
        serial->setParity( QSerialPort::OddParity );
        qDebug() << "partiy set: OddParity.";
        break;

    case CONFIG_PARITY_SPACE_INDEX:
        serial->setParity( QSerialPort::SpaceParity );
        qDebug() << "partiy set: SpaceParity.";
        break;

    case CONFIG_PARITY_MARK_INDEX:
        serial->setParity( QSerialPort::MarkParity );
        qDebug() << "partiy set: MarkParity.";
        break;

    }

    // set databytes.
    comboxIndex = ui->comboBox_databits->currentIndex();
    switch (comboxIndex) {
    case CONFIG_DATABITS_5_INDEX:
        serial->setDataBits(QSerialPort::Data5);
        qDebug() << "Data bits: 5 bits; ";
        break;

    case CONFIG_DATABITS_6_INDEX:
        serial->setDataBits(QSerialPort::Data6);
        qDebug() << "Data bits: 6 bits; ";
        break;

    case CONFIG_DATABITS_7_INDEX:
        serial->setDataBits(QSerialPort::Data7);
        qDebug() << "Data bits: 7 bits; ";
        break;

    case CONFIG_DATABITS_8_INDEX:
        serial->setDataBits(QSerialPort::Data8);
        qDebug() << "Data bits: 8 bits; ";
        break;
    }
    // set flowctrl
    comboxIndex = ui->comboBox_flowctrl->currentIndex();
    switch (comboxIndex) {
    case CONFIG_FLOWCTRL_NONE_INDEX:
        serial->setFlowControl(QSerialPort::NoFlowControl);
        qDebug() << "flow ctrl: no flow ctrl; ";
        break;
    case CONFIG_FLOWCTRL_HARD_INDEX:
        serial->setFlowControl(QSerialPort::HardwareControl);
        qDebug() << "flow ctrl: hardware flow ctrl; ";
        break;
    case CONFIG_FLOWCTRL_SOFT_INDEX:
        serial->setFlowControl(QSerialPort::SoftwareControl);
        qDebug() << "flow ctrl: software flow ctrl; ";
        break;
    }
    qDebug() << "--------------------------------; \n";

    QString portInfo = ui->comboBox_serialPort->currentText();
    QList<QString> infoList = portInfo.split(',');
    currentConnectCom = infoList.at(0);
    qDebug() << currentConnectCom;
    qDebug() << tr("SYSTEM: Serial port ")+portInfo+tr(" ,system is connecting with it.....");
    serial->setPortName(currentConnectCom);
    //serial.close();
    if( ui->comboBox_serialPort->currentIndex() == -1 ) {
        QMessageBox::warning(this,"Warring","Please click firstly the scan button to check your available devices.\nthan connect after selecting one device in the list.");
        return;
    }
    if (!serial->open(QIODevice::ReadWrite)) {
        QMessageBox::warning(this,"Warring","Open serial port fail!\n Please see the the information window to solve problem.");
        qDebug() << tr("SYSTEM: The serial port failed to open,Please check as follows: ");
        qDebug() << tr("        1> if the serial port is occupied by other software? ");
        qDebug() << tr("        2> if the serial port connection is normal?");
        qDebug() << tr("        3> if the program is run at root user? You can use the cmd sudo ./(programname) and type your password to be done.");

        ui->comboBox_serialPort->setEnabled(true);
    } else {
        qDebug() << tr("SYSTEM: The system has been connected with ")+portInfo+" " ;
        ui->pushButton_close->setEnabled(true);
        ui->pushButton_open->setEnabled(false);
        ui->comboBox_serialPort->setEnabled(false);
        ui->pushButton_scan->setEnabled(false);
        QMessageBox::information(this,"Information", "UART: "+ portInfo+" has been connected! \n"+"Wait device signals.");
    }

    qDebug() << "The serial has been openned!! \n";

}

void MainWindow::refreshTheUSBList( void )
{
    QString portName;
    QString uartName;
    QSerialPortInfo info;
    ui->comboBox_serialPort->clear();

    qDebug() << "Debug: Refresh the list...";
    foreach ( info , QSerialPortInfo::availablePorts()) {
        serial->setPort(info);
        portName = info.portName();
        uartName = info.description();
        ui->comboBox_serialPort->addItem(  portName +",(" +uartName+") "   );
        qDebug() << tr("SYSTEM: Scan the uart device: ")+uartName + "("+portName+")"+tr(" has been added to the available list! ");
    }
}

void MainWindow::on_pushButton_scan_clicked()
{
    refreshTheUSBList();
}


void MainWindow::on_pushButton_close_clicked()
{
    serial->close();
    ui->pushButton_open->setEnabled( true );
    ui->pushButton_close->setEnabled(false);
    ui->pushButton_scan->setEnabled(true);
    ui->comboBox_serialPort->setEnabled(true);
}

void MainWindow::on_comboBox_baudrate_currentIndexChanged(int index)
{
    switch( index ) {
    case CONFIG_BAUDRATE_1200_INDEX:
        serial->setBaudRate(QSerialPort::Baud1200);
        qDebug() << "Baud Rate: 1200; ";
        break;
    case CONFIG_BAUDRATE_2400_INDEX:
        serial->setBaudRate(QSerialPort::Baud2400);
        qDebug() << "Baud Rate: 2400; ";
        break;
    case CONFIG_BAUDRATE_4800_INDEX:
        serial->setBaudRate(QSerialPort::Baud4800);
        qDebug() << "Baud Rate: 4800; ";
        break;
    case CONFIG_BAUDRATE_9600_INDEX:
        serial->setBaudRate(QSerialPort::Baud9600);
        qDebug() << "Baud Rate: 9600; ";
        break;
    case CONFIG_BAUDRATE_19200_INDEX:
        serial->setBaudRate(QSerialPort::Baud19200);
        qDebug() << "Baud Rate: 19200; ";
        break;
    case CONFIG_BAUDRATE_38400_INDEX:
        serial->setBaudRate(QSerialPort::Baud38400);
        qDebug() << "Baud Rate: 38400; ";
        break;
    case CONFIG_BAUDRATE_57600_INDEX:
        serial->setBaudRate(QSerialPort::Baud57600);
        qDebug() << "Baud Rate: 57600; ";
        break;
    case CONFIG_BAUDRATE_115200_INDEX:
        serial->setBaudRate(QSerialPort::Baud115200);
        qDebug() << "Baud Rate: 115200; ";
        break;
    }

}

void MainWindow::on_comboBox_stopbits_currentIndexChanged(int index)
{
    switch (index) {
    case CONFIG_STOPBIT_ONE_INDEX:
        serial->setStopBits(QSerialPort::OneStop);
        qDebug() << "stop bits: 1 bit; ";
        break;
    case CONFIG_STOPBIT_ONEANDHALF_INDEX:
        serial->setStopBits(QSerialPort::OneAndHalfStop);
        qDebug() << "stop bits: 1.5 bits;";
        break;
    case CONFIG_STOPBIT_TWO_INDEX:
        serial->setStopBits(QSerialPort::TwoStop);
        qDebug() << "stop bits: 2 bits; ";
        break;
    }
}

void MainWindow::on_comboBox_checkdigit_currentIndexChanged(int index)
{

    switch( index ) {

    case CONFIG_PARITY_NONE_INDEX:
        serial->setParity( QSerialPort::NoParity );
        qDebug() << "partiy set: noParity.";
        break;

    case CONFIG_PARITY_EVEN_INDEX:
        serial->setParity( QSerialPort::EvenParity );
        qDebug() << "partiy set: EvenParity.";
        break;

    case CONFIG_PARITY_ODD_INDEX:
        serial->setParity( QSerialPort::OddParity );
        qDebug() << "partiy set: OddParity.";
        break;

    case CONFIG_PARITY_SPACE_INDEX:
        serial->setParity( QSerialPort::SpaceParity );
        qDebug() << "partiy set: SpaceParity.";
        break;

    case CONFIG_PARITY_MARK_INDEX:
        serial->setParity( QSerialPort::MarkParity );
        qDebug() << "partiy set: MarkParity.";
        break;

    }
}

void MainWindow::on_comboBox_flowctrl_currentIndexChanged(int index)
{
    switch (index) {
    case CONFIG_FLOWCTRL_NONE_INDEX:
        serial->setFlowControl(QSerialPort::NoFlowControl);
        qDebug() << "flow ctrl: no flow ctrl; ";
        break;
    case CONFIG_FLOWCTRL_HARD_INDEX:
        serial->setFlowControl(QSerialPort::HardwareControl);
        qDebug() << "flow ctrl: hardware flow ctrl; ";
        break;
    case CONFIG_FLOWCTRL_SOFT_INDEX:
        serial->setFlowControl(QSerialPort::SoftwareControl);
        qDebug() << "flow ctrl: software flow ctrl; ";
        break;
    }
}

void MainWindow::on_comboBox_databits_currentIndexChanged(int index)
{
    switch (index) {
    case CONFIG_DATABITS_5_INDEX:
        serial->setDataBits(QSerialPort::Data5);
        qDebug() << "Data bits: 5 bits; ";
        break;

    case CONFIG_DATABITS_6_INDEX:
        serial->setDataBits(QSerialPort::Data6);
        qDebug() << "Data bits: 6 bits; ";
        break;

    case CONFIG_DATABITS_7_INDEX:
        serial->setDataBits(QSerialPort::Data7);
        qDebug() << "Data bits: 7 bits; ";
        break;

    case CONFIG_DATABITS_8_INDEX:
        serial->setDataBits(QSerialPort::Data8);
        qDebug() << "Data bits: 8 bits; ";
        break;
    }
}
void MainWindow::on_radioButton_send_ascii_clicked()
{
    sendAsciiFormat = true;
    qDebug() << "SYSTEM: Set send data by ASCII." ;
}

void MainWindow::on_radioButton_send_hex_clicked()
{
    sendAsciiFormat = false;
    qDebug() << "SYSTEM: Set send data by HEX." ;
}

void MainWindow::on_radioButton_rec_ascii_clicked()
{
    recAsciiFormat = true;

    qDebug() << "SYSTEM: Set recv data by ASCII." ;
}

void MainWindow::on_radioButton_rec_hex_clicked()
{
    recAsciiFormat = false;

    qDebug() << "SYSTEM: Set recv data by HEX." ;
}

void MainWindow::on_pushButton_clear_clicked()
{

}

void MainWindow::on_pushButton_send_clicked()
{
    QString input;
    QByteArray temp;


    if( input.isEmpty() == true ) {
        QMessageBox::warning(this,"Warring","The text is blank!\n Please input the data then send...");
        return;
    }else {

        if( sendAsciiFormat == true ) {
            serial->write( input.toLatin1() );
            qDebug() << "UART SendAscii : " << input.toLatin1();
        }else{
            stringToHex(input, temp);
            serial->write( temp.toHex() );
            qDebug() << "UART SendHex : " << temp.toHex();
        }
    }
}


void MainWindow::stringToHex(QString str, QByteArray &senddata)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);
    char lstr,hstr;

    for(int i=0; i<len; ) {
        //char lstr,
        hstr = str[i].toLatin1();
        if(hstr == ' ') {
            i++;
            continue;
        }
        i++ ;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = convertHexChar(hstr);
        lowhexdata = convertHexChar(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        senddata[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);
}

char MainWindow::convertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}

void MainWindow::on_spinBox_repeat_valueChanged(int arg1)
{

}

void MainWindow::on_checkBox_repeat_clicked(bool checked)
{
    repeatSend = checked;
    if( repeatSend == true ) {
    }else{
    }
}

void MainWindow::on_pushButton_pause_clicked()
{
    if( pauseComOutput == false ) {
        pauseComOutput = true;
        ui->pushButton_pause->setText("start");
    } else{
        pauseComOutput = false;
        ui->pushButton_pause->setText("pause");
    }
}

void MainWindow::on_checkBox_wordwrap_stateChanged(int arg1)
{

}

void MainWindow::on_spinBox_repeat_valueChanged(const QString &arg1)
{

}


void MainWindow::on_comboBox_flowctrl_activated(const QString &arg1)
{

}


void MainWindow::on_checkBox_repeat_stateChanged(int arg1)
{

}


void MainWindow::on_pushButton_fsk_send_clicked()
{
    if (ui->lineEdit_fsk_carry_h->text().isEmpty() ||
            ui->lineEdit_fsk_carry_l->text().isEmpty() ||
            ui->lineEdit_fsk_number_period->text().isEmpty() ||
            ui->lineEdit_fsk_repeat_times->text().isEmpty() ||
            ui->lineEdit_fsk_value->text().isEmpty()
            ) {
        QMessageBox::warning(this, "Warning", "有字符串为空，检查后再发送！");
        return;
    }
    FSK_INFO fskInfo;
    float lowFreq = 0.0f;
    float N = 0.0;
    float symbolLen = 0;

    N = ui->lineEdit_fsk_number_period->text().toInt();
    lowFreq = (float)ui->lineEdit_fsk_carry_l->text().toInt();
    symbolLen = (N/lowFreq) * 1000;
    fskInfo.numberPeriod = ui->lineEdit_fsk_number_period->text().toInt();
    fskInfo.carryFreqH.all = ui->lineEdit_fsk_carry_h->text().toInt();
    fskInfo.carryFreqL.all = ui->lineEdit_fsk_carry_l->text().toInt();
    // repeat time
    if (ui->radioButton_fsk_dec_mode->isChecked()) {
        fskInfo.times = ui->lineEdit_fsk_repeat_times->text().toInt();
    }
    else if (ui->radioButton_fsk_hex_mode->isChecked()) {
        fskInfo.times = (char)hexstrToInt(ui->lineEdit_fsk_repeat_times->text());
    }
    // value
    fskInfo.value = (char)hexstrToInt(ui->lineEdit_fsk_value->text());
    // 使用串口发送协议
    sendFskSignal(&fskInfo);
    ui->textBrowser_fsk->append("--------------------------------------");
    ui->textBrowser_fsk->append("发送信号参数：");
    ui->textBrowser_fsk->append("载波频率：" + ui->lineEdit_fsk_carry_h->text() + " Hz / " \
                                + ui->lineEdit_fsk_carry_l->text() + "Hz.");
    QString line;
    qDebug() <<hexstrToInt(ui->lineEdit_fsk_repeat_times->text());
    if (hexstrToInt(ui->lineEdit_fsk_repeat_times->text()) == 0xFF) {
        line.append("发送次数：NaN.");
    }else{
        line.append("发送次数：0x" + ui->lineEdit_fsk_value->text());
    }
    ui->textBrowser_fsk->append(line);
    ui->textBrowser_fsk->append("发送数值：0x" + ui->lineEdit_fsk_value->text());
    ui->textBrowser_fsk->append("码元长度：" + QString::number(symbolLen) + "ms." );
    ui->textBrowser_fsk->append("--------------------------------------\n");

}

void MainWindow::sendFskSignal(FSK_INFO* fsk)
{
    QByteArray fskArray;
    QString sendInfoStr;

    fskArray.clear();
    fskArray.append(0xAA);
    fskArray.append(0xBB);
    fskArray.append(fsk->value);
    fskArray.append(fsk->times);
    fskArray.append(fsk->carryFreqH.bits.high);
    fskArray.append(fsk->carryFreqH.bits.low);
    fskArray.append(fsk->carryFreqL.bits.high);
    fskArray.append(fsk->carryFreqL.bits.low);
    fskArray.append(fsk->numberPeriod);
    fskArray.append(0xAC);
    serial->write(fskArray);
    qDebug()<< "Send :" << fskArray;
    sendInfoStr.prepend(fskArray);

}
quint8 MainWindow::hexstrToInt(QString str)
{

    quint8 i;
    quint8 n = 0;
    quint8 len = 2;

    for (i=0;i<len;++i)
    {
        if (str.at(i) > '9')
        {
            n = 16 * n + (10 + str.at(i).toLatin1() - 'A');
        }
        else
        {
            n = 16 * n +( str.at(i).toLatin1() - '0');
        }
    }
    return n;
}

void MainWindow::on_pushButton_fsk_clear_clicked()
{
    ui->textBrowser_fsk->clear();
}
