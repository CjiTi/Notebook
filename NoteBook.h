#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class book; }
QT_END_NAMESPACE

class book : public QWidget
{
    Q_OBJECT

public:
    book(QWidget *parent = nullptr);
    ~book();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_textEdit_cursorPositionChanged();

private:
    Ui::book *ui;
};
#endif // NOTEBOOK_H
