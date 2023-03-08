#include "widget.h"
widget::widget(QWidget *parent)
    :QWidget{parent}
{
    resize(1000,1000);
    b_insert = new QPushButton("Add");
    QGridLayout* grid = new QGridLayout;
    grid->addWidget(b_insert,2,3);
    connect(b_insert,SIGNAL(clicked()),this,SLOT(buttonClicked()));
    setLayout(grid);

}

void widget::buttonClicked(){
    qDebug() << "Button clicked";
    picWidget = new pictures();
    qDebug() << "Instance was created";
    picWidget->show();
    qDebug() << "Show";
}
