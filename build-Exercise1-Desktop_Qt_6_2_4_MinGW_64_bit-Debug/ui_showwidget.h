/********************************************************************************
** Form generated from reading UI file 'showwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWIDGET_H
#define UI_SHOWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *showtableWidget;

    void setupUi(QWidget *ShowWidget)
    {
        if (ShowWidget->objectName().isEmpty())
            ShowWidget->setObjectName(QString::fromUtf8("ShowWidget"));
        ShowWidget->resize(857, 560);
        horizontalLayout = new QHBoxLayout(ShowWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showtableWidget = new QTableWidget(ShowWidget);
        showtableWidget->setObjectName(QString::fromUtf8("showtableWidget"));

        horizontalLayout->addWidget(showtableWidget);


        retranslateUi(ShowWidget);

        QMetaObject::connectSlotsByName(ShowWidget);
    } // setupUi

    void retranslateUi(QWidget *ShowWidget)
    {
        ShowWidget->setWindowTitle(QCoreApplication::translate("ShowWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWidget: public Ui_ShowWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWIDGET_H
