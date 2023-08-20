#ifndef ADDWIDGET_H
#define ADDWIDGET_H

#include <QWidget>
#include <QString>

namespace Ui {
class AddWidget;
}

class AddWidget : public QWidget
{
    Q_OBJECT
public:
    QString m_Nums = "10000";
    QString m_Name;
    QString m_Sex;
    QString m_Ages;
    QString m_Marry;
    QString m_Depart;
    QString m_position;
    QString m_Salary;
public:
    explicit AddWidget(QWidget *parent = nullptr);
    ~AddWidget();

    void start();

private:
    Ui::AddWidget *ui;
};

#endif // ADDWIDGET_H
