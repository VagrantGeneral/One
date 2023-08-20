#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwidget.h"
#include "delwidget.h"
#include "showwidget.h"

#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("职工管理");

    ui->mainTableWidget->setColumnCount(8);//设置列数
    ui->mainTableWidget->setHorizontalHeaderLabels(QStringList()<<"员工编号"<<"员工姓名"<<"员工性别"<<"员工年龄"<<"是否婚配"<<"所在部门"<<"职位"<<"薪资");//添加水平头
    ui->mainTableWidget->setRowCount(15);//设置行数

    //点击添加，调出窗口
    this->connect(ui->addBtn,&QPushButton::clicked,[=](){
        qDebug()<<"添加被点击";
        AddWidget * add = new AddWidget();
        add->show();
//        ui->mainTableWidget->insertRow(0);
//        ui->mainTableWidget->setItem(0,0,new QTableWidgetItem(add->m_Nums));
//        ui->mainTableWidget->setItem(0,1,new QTableWidgetItem(add->m_Name));
//        ui->mainTableWidget->setItem(0,2,new QTableWidgetItem(add->m_Sex));
//        ui->mainTableWidget->setItem(0,3,new QTableWidgetItem(add->m_Ages));
//        ui->mainTableWidget->setItem(0,4,new QTableWidgetItem(add->m_Marry));
//        ui->mainTableWidget->setItem(0,5,new QTableWidgetItem(add->m_Depart));
//        ui->mainTableWidget->setItem(0,6,new QTableWidgetItem(add->m_position));
//        ui->mainTableWidget->setItem(0,7,new QTableWidgetItem(add->m_Salary));
//        add->start();
//        bool isEmpty = ui->mainTableWidget->findItems(add->m_Nums,Qt::MatchExactly).empty();
//        if( isEmpty )
//        {

//        }
//        else
//        {
//            QMessageBox::warning(this,"警告！","此职工有了！");
//        }
    });


    //点击删除，调出窗口
    this->connect(ui->deleteBtn,&QPushButton::clicked,[=](){
        qDebug()<<"删除被点击";
        DelWidget * del = new DelWidget();
        del->show();
    });


    //点击显示，调出窗口
    this->connect(ui->showBtn,&QPushButton::clicked,[=](){
        qDebug()<<"展示被点击";
        ShowWidget * show = new ShowWidget();
        show->show();
        show->setFixedSize(857,560);//固定窗口大小
    });
}


MainWindow::~MainWindow()
{
    delete ui;
}

