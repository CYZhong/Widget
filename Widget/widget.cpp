#include "widget.h"

Widget::Widget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Widget::~Widget()
{

}

void Widget::add1_valueChanged(int value)
{
	ui.result->setText(QString::number(value + ui.add2->value()));
}

void Widget::add2_valueChanged(int value)
{
	ui.result->setText(QString::number(value + ui.add1->value()));
}