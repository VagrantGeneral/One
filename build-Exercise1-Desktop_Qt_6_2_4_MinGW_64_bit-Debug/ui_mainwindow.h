/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *addBtn;
    QPushButton *showBtn;
    QPushButton *modBtn;
    QPushButton *deleteBtn;
    QPushButton *findBtn;
    QPushButton *sortBtn;
    QPushButton *cleanBtn;
    QTableWidget *mainTableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(964, 620);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addBtn = new QPushButton(widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        verticalLayout->addWidget(addBtn);

        showBtn = new QPushButton(widget);
        showBtn->setObjectName(QString::fromUtf8("showBtn"));

        verticalLayout->addWidget(showBtn);

        modBtn = new QPushButton(widget);
        modBtn->setObjectName(QString::fromUtf8("modBtn"));

        verticalLayout->addWidget(modBtn);

        deleteBtn = new QPushButton(widget);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        verticalLayout->addWidget(deleteBtn);

        findBtn = new QPushButton(widget);
        findBtn->setObjectName(QString::fromUtf8("findBtn"));

        verticalLayout->addWidget(findBtn);

        sortBtn = new QPushButton(widget);
        sortBtn->setObjectName(QString::fromUtf8("sortBtn"));

        verticalLayout->addWidget(sortBtn);

        cleanBtn = new QPushButton(widget);
        cleanBtn->setObjectName(QString::fromUtf8("cleanBtn"));

        verticalLayout->addWidget(cleanBtn);


        horizontalLayout->addWidget(widget);


        horizontalLayout_2->addLayout(horizontalLayout);

        mainTableWidget = new QTableWidget(centralwidget);
        mainTableWidget->setObjectName(QString::fromUtf8("mainTableWidget"));

        horizontalLayout_2->addWidget(mainTableWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        showBtn->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        modBtn->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        deleteBtn->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        findBtn->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        sortBtn->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        cleanBtn->setText(QCoreApplication::translate("MainWindow", "clean", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
