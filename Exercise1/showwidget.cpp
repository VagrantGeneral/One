#include "showwidget.h"
#include "ui_showwidget.h"

ShowWidget::ShowWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowWidget)
{
    ui->setupUi(this);
    ui->showtableWidget->setColumnCount(8);//设置列数
    ui->showtableWidget->setHorizontalHeaderLabels(QStringList()<<"员工编号"<<"员工姓名"<<"员工性别"<<"员工年龄"<<"是否婚配"<<"所在部门"<<"职位"<<"薪资");//添加水平头
    ui->showtableWidget->setRowCount(5);//设置行数
}

ShowWidget::~ShowWidget()
{
    delete ui;
}
