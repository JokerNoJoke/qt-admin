#include "loginwindow.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow lw;
    lw.show();
    MainWindow mw;
    mw.setWindowFlags(Qt::FramelessWindowHint);
    QObject::connect(&lw, SIGNAL(showMainWindow()), &mw, SLOT(show()));
    return a.exec();
}
