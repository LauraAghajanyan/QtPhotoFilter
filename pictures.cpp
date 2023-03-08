#include "pictures.h"
#include <QPixmap>
#include <QLabel>
#include <QGridLayout>
#include <QMouseEvent>
#include <QToolButton>

pictures::pictures(QWidget *parent)
    :QWidget{parent}
{

    //QPixmap pixmap("C:/Users/Asus/OneDrive/Desktop/ankap baner/starrt/img/funny.jpg");//we can also use resource files
    //pic1->setPixmap(pixmap);
    //pic1->setFixedSize(pixmap.width(), pixmap.height());
    //QGridLayout* grid = new QGridLayout;
    //grid->addWidget(pic1,1,1);
    //setLayout(grid);
    //connect(pic1,SIGNAL(clicked()),this,SLOT(add_pic()));
    // Create a QToolButton
    QToolButton *button = new QToolButton(this);

    // Set the button's icon to the image
    button->setIcon(QIcon("C:/Users/Asus/OneDrive/Desktop/ankap baner/starrt/img/funny.jpg"));

    // Set the button's size to match the size of the image
    button->setIconSize(QSize(200, 200));

    // Set the button to be flat, so it doesn't have a border
    button->setAutoRaise(true);
    button->setStyleSheet("QToolButton { border: none; }");

    // Connect the button's clicked signal to a slot that handles the click event
    //connect(button, &QToolButton::clicked, this, &pictures::add_pic());
    connect(button,SIGNAL(clicked()),this,SLOT(add_pic1()));

}
void pictures::add_pic1(){}
void pictures::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        qDebug() << "Left button pressed at" << event->pos();
    }
    // Handle other mouse button presses and modifiers here.
}
