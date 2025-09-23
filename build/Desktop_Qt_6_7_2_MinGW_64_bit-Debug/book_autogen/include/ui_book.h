/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_book
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;

    void setupUi(QWidget *book)
    {
        if (book->objectName().isEmpty())
            book->setObjectName("book");
        book->resize(571, 401);
        gridLayout = new QGridLayout(book);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(book);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(80, 80, 80, 80);"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(307, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 2, 1, 1);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget = new QWidget(book);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(80, 80, 80, 80);"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(170, 170, 127); color: white; }\n"
"QPushButton:pressed { background-color: rgb(85, 85, 85); color: white; }"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(170, 170, 127); color: white; }\n"
"QPushButton:pressed { background-color: rgb(85, 85, 85); color: white; }"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(170, 170, 127); color: white; }\n"
"QPushButton:pressed { background-color: rgb(85, 85, 85); color: white; }"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(325, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        textEdit = new QTextEdit(book);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        retranslateUi(book);

        QMetaObject::connectSlotsByName(book);
    } // setupUi

    void retranslateUi(QWidget *book)
    {
        book->setWindowTitle(QCoreApplication::translate("book", "\350\256\260\344\272\213\346\234\254", nullptr));
        label_2->setText(QCoreApplication::translate("book", "\347\254\2541\350\241\214\347\254\2541\345\210\227", nullptr));
        label->setText(QCoreApplication::translate("book", "UTF-8", nullptr));
        pushButton_2->setText(QCoreApplication::translate("book", "\346\211\223\345\274\200", nullptr));
        pushButton->setText(QCoreApplication::translate("book", "\344\277\235\345\255\230", nullptr));
        pushButton_3->setText(QCoreApplication::translate("book", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book: public Ui_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
