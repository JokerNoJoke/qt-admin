#ifndef TABTWO_H
#define TABTWO_H

#include <QWidget>

namespace Ui {
class TabTwo;
}

class TabTwo : public QWidget
{
    Q_OBJECT

public:
    explicit TabTwo(QWidget *parent = nullptr);
    ~TabTwo();

private:
    Ui::TabTwo *ui;
};

#endif // TABTWO_H
