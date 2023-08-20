/********************************************************************************
** Form generated from reading UI file 'addwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWIDGET_H
#define UI_ADDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditNums;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditName;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rBtnman;
    QRadioButton *rBtnwoman;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditAges;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *rBtnmarry;
    QRadioButton *rBtnunmarry;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *rBtnboss;
    QRadioButton *rBtnmanage;
    QRadioButton *rBtnemployee;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditJob;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditSalary;
    QPushButton *enterBtn;

    void setupUi(QWidget *AddWidget)
    {
        if (AddWidget->objectName().isEmpty())
            AddWidget->setObjectName(QString::fromUtf8("AddWidget"));
        AddWidget->resize(552, 452);
        layoutWidget = new QWidget(AddWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 10, 227, 416));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditNums = new QLineEdit(widget);
        lineEditNums->setObjectName(QString::fromUtf8("lineEditNums"));

        horizontalLayout->addWidget(lineEditNums);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEditName = new QLineEdit(widget_2);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_2->addWidget(lineEditName);


        verticalLayout->addWidget(widget_2);

        widget_6 = new QWidget(layoutWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rBtnman = new QRadioButton(widget_6);
        rBtnman->setObjectName(QString::fromUtf8("rBtnman"));

        horizontalLayout_6->addWidget(rBtnman);

        rBtnwoman = new QRadioButton(widget_6);
        rBtnwoman->setObjectName(QString::fromUtf8("rBtnwoman"));

        horizontalLayout_6->addWidget(rBtnwoman);


        verticalLayout->addWidget(widget_6);

        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditAges = new QLineEdit(widget_3);
        lineEditAges->setObjectName(QString::fromUtf8("lineEditAges"));

        horizontalLayout_3->addWidget(lineEditAges);


        verticalLayout->addWidget(widget_3);

        widget_7 = new QWidget(layoutWidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        rBtnmarry = new QRadioButton(widget_7);
        rBtnmarry->setObjectName(QString::fromUtf8("rBtnmarry"));

        horizontalLayout_7->addWidget(rBtnmarry);

        rBtnunmarry = new QRadioButton(widget_7);
        rBtnunmarry->setObjectName(QString::fromUtf8("rBtnunmarry"));

        horizontalLayout_7->addWidget(rBtnunmarry);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(layoutWidget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        rBtnboss = new QRadioButton(widget_8);
        rBtnboss->setObjectName(QString::fromUtf8("rBtnboss"));

        horizontalLayout_8->addWidget(rBtnboss);

        rBtnmanage = new QRadioButton(widget_8);
        rBtnmanage->setObjectName(QString::fromUtf8("rBtnmanage"));

        horizontalLayout_8->addWidget(rBtnmanage);

        rBtnemployee = new QRadioButton(widget_8);
        rBtnemployee->setObjectName(QString::fromUtf8("rBtnemployee"));

        horizontalLayout_8->addWidget(rBtnemployee);


        verticalLayout->addWidget(widget_8);

        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditJob = new QLineEdit(widget_4);
        lineEditJob->setObjectName(QString::fromUtf8("lineEditJob"));

        horizontalLayout_4->addWidget(lineEditJob);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditSalary = new QLineEdit(widget_5);
        lineEditSalary->setObjectName(QString::fromUtf8("lineEditSalary"));

        horizontalLayout_5->addWidget(lineEditSalary);


        verticalLayout->addWidget(widget_5);

        enterBtn = new QPushButton(AddWidget);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));
        enterBtn->setGeometry(QRect(430, 380, 93, 28));

        retranslateUi(AddWidget);

        QMetaObject::connectSlotsByName(AddWidget);
    } // setupUi

    void retranslateUi(QWidget *AddWidget)
    {
        AddWidget->setWindowTitle(QCoreApplication::translate("AddWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("AddWidget", "\347\274\226\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("AddWidget", "\345\247\223\345\220\215", nullptr));
        rBtnman->setText(QCoreApplication::translate("AddWidget", "\347\224\267", nullptr));
        rBtnwoman->setText(QCoreApplication::translate("AddWidget", "\345\245\263", nullptr));
        label_3->setText(QCoreApplication::translate("AddWidget", "\345\271\264\351\276\204", nullptr));
        rBtnmarry->setText(QCoreApplication::translate("AddWidget", "\345\267\262\345\251\232", nullptr));
        rBtnunmarry->setText(QCoreApplication::translate("AddWidget", "\346\234\252\345\251\232", nullptr));
        rBtnboss->setText(QCoreApplication::translate("AddWidget", "\350\200\201\346\235\277", nullptr));
        rBtnmanage->setText(QCoreApplication::translate("AddWidget", "\347\273\217\347\220\206", nullptr));
        rBtnemployee->setText(QCoreApplication::translate("AddWidget", "\345\221\230\345\267\245", nullptr));
        label_4->setText(QCoreApplication::translate("AddWidget", "\350\201\214\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("AddWidget", "\350\226\252\350\265\204", nullptr));
        enterBtn->setText(QCoreApplication::translate("AddWidget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWidget: public Ui_AddWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWIDGET_H
