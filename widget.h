#ifndef WIDGET_H
#define WIDGET_H

#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include "pictures.h"

class widget:public QWidget
{
    Q_OBJECT
public:
    explicit widget(QWidget *parent = nullptr);
    QPushButton *b_insert;
    pictures *picWidget;
public slots:
    void buttonClicked();
};




#endif // WIDGET_H
