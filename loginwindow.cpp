#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString username("admin");
    QString password("admin");
    int a = ui->lineEdit_username->text().localeAwareCompare(username);
    int b = ui->lineEdit_password->text().localeAwareCompare(password);
    qDebug() << (a == 0 && b == 0);
    if (a == 0 && b == 0) {
        close();
        emit showMainWindow();
    }
}
