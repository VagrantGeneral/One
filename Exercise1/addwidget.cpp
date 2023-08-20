#include "addwidget.h"
#include "ui_addwidget.h"

#include <QDebug>

AddWidget::AddWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("添加窗口");
}

/*void AddWidget::start(){
    this->connect(ui->enterBtn,&QPushButton::clicked,[=](){
        m_Nums = ui->lineEditNums->text();
        m_Name = ui->lineEditName->text();
        m_Ages = ui->lineEditAges->text();
        m_position = ui->lineEditJob->text();
        m_Salary = ui->lineEditSalary->text();
        if(ui->rBtnman->isChecked() == true) {
            m_Sex = "男";
        }
        if(ui->rBtnwoman->isChecked() == true) {
            m_Sex = "女";
        }
        if(ui->rBtnmarry->isChecked() == true) {
            m_Marry = "已婚";
        }
        if(ui->rBtnunmarry->isChecked() == true) {
            m_Marry = "未婚";
        }
        if(ui->rBtnboss->isChecked() == true) {
            m_Depart = "老板";
        }
        if(ui->rBtnmanage->isChecked() == true) {
            m_Depart = "经理";
        }
        if(ui->rBtnemployee->isChecked() == true) {
            m_Depart = "员工";
        }
    });
}*/

AddWidget::~AddWidget()
{
    delete ui;
}
