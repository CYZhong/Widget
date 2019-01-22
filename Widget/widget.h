#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_widget.h"

class Widget : public QMainWindow
{
	Q_OBJECT

public:
	Widget(QWidget *parent = Q_NULLPTR);
	~Widget();

private:
	Ui::WidgetClass ui;
	private slots:
		void add1_valueChanged(int value);
		void add2_valueChanged(int value);

};
