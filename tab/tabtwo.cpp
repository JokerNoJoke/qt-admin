#include "tabtwo.h"
#include "ui_tabtwo.h"

TabTwo::TabTwo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TabTwo)
{
    ui->setupUi(this);
}

TabTwo::~TabTwo()
{
    delete ui;
}
