#include "tabone.h"
#include "ui_tabone.h"

TabOne::TabOne(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TabOne)
{
    ui->setupUi(this);
}

TabOne::~TabOne()
{
    delete ui;
}
