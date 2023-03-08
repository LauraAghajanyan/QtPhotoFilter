#ifndef PICTURES_H
#define PICTURES_H

#include <QObject>
#include <QWidget>
#include <QLabel>


class pictures:public QWidget
{
    Q_OBJECT
public:
    explicit pictures(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent* event);
    QLabel* pic1 = new QLabel();
public slots:
    void add_pic1();
};



#endif // PICTURES_H
