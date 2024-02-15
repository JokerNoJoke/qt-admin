#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "tab/tabone.h"
#include "tab/tabtwo.h"

#include "QListWidgetItem"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // tab 1
    TabOne *tab_one = new TabOne();
    TabTwo *tab_two = new TabTwo();
    ui->listWidget->addItem("Menu 1");
    ui->listWidget->addItem("Menu 2");
    ui->stackedWidget->addWidget(tab_one);
    ui->stackedWidget->addWidget(tab_two);
    QObject::connect(ui->listWidget, &QListWidget::currentRowChanged, ui->stackedWidget, &QStackedWidget::setCurrentIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}
