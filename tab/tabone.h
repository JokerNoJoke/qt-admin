#ifndef TABONE_H
#define TABONE_H

#include <QWidget>

namespace Ui {
class TabOne;
}

class TabOne : public QWidget
{
    Q_OBJECT

public:
    explicit TabOne(QWidget *parent = nullptr);
    ~TabOne();

private:
    Ui::TabOne *ui;
};

#endif // TABONE_H
