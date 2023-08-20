#include "delwidget.h"
#include "ui_delwidget.h"

DelWidget::DelWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DelWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("删除窗口");
}

DelWidget::~DelWidget()
{
    delete ui;
}
