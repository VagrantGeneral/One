#ifndef DELWIDGET_H
#define DELWIDGET_H

#include <QWidget>

namespace Ui {
class DelWidget;
}

class DelWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DelWidget(QWidget *parent = nullptr);
    ~DelWidget();

private:
    Ui::DelWidget *ui;
};

#endif // DELWIDGET_H
