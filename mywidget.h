#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QApplication>
#include <QApplication>
#include <QFont>
#include <QLCDNumber>
#include <QPushButton>
#include <QSlider>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

class MyWidget : public QWidget
 {
 public:
     // Для создания окна верхнего уровня вы должны указать нулевой указатель в качестве родителя.
     // Как вы видите, по умолчанию виджет является окном верхнего уровня.
     MyWidget(QWidget *parent = 0);
 };

#endif // MYWIDGET_H
