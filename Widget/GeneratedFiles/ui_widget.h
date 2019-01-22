/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
    QWidget *centralWidget;
    QSpinBox *add1;
    QSpinBox *add2;
    QTextBrowser *result;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WidgetClass)
    {
        if (WidgetClass->objectName().isEmpty())
            WidgetClass->setObjectName(QString::fromUtf8("WidgetClass"));
        WidgetClass->resize(600, 394);
        centralWidget = new QWidget(WidgetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        add1 = new QSpinBox(centralWidget);
        add1->setObjectName(QString::fromUtf8("add1"));
        add1->setGeometry(QRect(140, 140, 40, 20));
        add2 = new QSpinBox(centralWidget);
        add2->setObjectName(QString::fromUtf8("add2"));
        add2->setGeometry(QRect(250, 140, 40, 20));
        result = new QTextBrowser(centralWidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(340, 140, 111, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(131, 121, 54, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(246, 121, 54, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(361, 121, 54, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(211, 144, 54, 12));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 143, 54, 16));
        WidgetClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WidgetClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        WidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WidgetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WidgetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WidgetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WidgetClass->setStatusBar(statusBar);

        retranslateUi(WidgetClass);
        QObject::connect(add1, SIGNAL(valueChanged(int)), WidgetClass, SLOT(add1_valueChanged(int)));
        QObject::connect(add2, SIGNAL(valueChanged(int)), WidgetClass, SLOT(add2_valueChanged(int)));

        QMetaObject::connectSlotsByName(WidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *WidgetClass)
    {
        WidgetClass->setWindowTitle(QApplication::translate("WidgetClass", "Widget", nullptr));
        label->setText(QApplication::translate("WidgetClass", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("WidgetClass", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("WidgetClass", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("WidgetClass", "+", nullptr));
        label_5->setText(QApplication::translate("WidgetClass", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetClass: public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
