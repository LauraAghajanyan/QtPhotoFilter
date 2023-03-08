#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    w = new widget;
    setCentralWidget(w);
}

MainWindow::~MainWindow()
{
}



