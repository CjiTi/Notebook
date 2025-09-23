#include "NoteBook.h"
#include "ui_NoteBook.h"

#include <QFile>
#include <QFileDialog>

book::book(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::book)
{
    ui->setupUi(this);
}

book::~book()
{
    delete ui;
}


void book::on_pushButton_2_clicked()
{
    QFile file;
    QString filename = QFileDialog::getOpenFileName(this,tr("Open TEXT"), "C:\\Users\\22865\\VScode\\Vscode\\qt\\book",
                                            tr("Text Files (*.txt)"));
    ui->textEdit->clear();
    this->setWindowTitle(filename+"记事本");
    file.setFileName(filename);
    if(!file.open(QIODeviceBase::ReadWrite | QIODeviceBase::Text)){
        qDebug() <<"file is no open";
    }
    else {
        qDebug() <<"file '"+filename+"' open";
    }
    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    while(!in.atEnd()){
        QString context=in.readLine();
         ui->textEdit->append(context);
        qDebug()<<context;
    }
    file.close();
}


void book::on_pushButton_clicked()
{
    QFile file;
    QString filename=QFileDialog::getSaveFileName(this,tr("save"),"C:\\Users\\22865\\VScode\\Vscode\\qt\\book",
                                                    tr("TEXT(*.txt)"));
    file.setFileName(filename);
    if(!file.open(QIODeviceBase::ReadWrite | QIODeviceBase::Text)){
        qDebug() <<"file is no open";
    }
    else {
        qDebug() <<"file '"+filename+"' save";
    }
    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);
    QString context=ui->textEdit->toPlainText();
    out<<context;
    qDebug()<<context;
    file.close();
}


void book::on_pushButton_3_clicked()
{
    this->setWindowTitle("记事本");
    ui->textEdit->clear();
}


void book::on_textEdit_cursorPositionChanged()
{
    QTextCursor cursor=ui->textEdit->textCursor();
    QString block=QString::number(cursor.blockNumber()+1);
    QString column=QString::number(cursor.columnNumber()+1);
    QString labelmes="第"+block+"行,第"+column+"列";
    ui->label_2->setText(labelmes);
}

