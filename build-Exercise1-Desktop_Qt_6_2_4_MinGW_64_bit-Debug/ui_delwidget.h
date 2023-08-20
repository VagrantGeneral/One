/********************************************************************************
** Form generated from reading UI file 'delwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELWIDGET_H
#define UI_DELWIDGET_H

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

class Ui_DelWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditNums;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rBtnman;
    QRadioButton *rBtnwoman;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
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
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditJob;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *lineEditSalary;
    QPushButton *delBtn;

    void setupUi(QWidget *DelWidget)
    {
        if (DelWidget->objectName().isEmpty())
            DelWidget->setObjectName(QString::fromUtf8("DelWidget"));
        DelWidget->resize(558, 453);
        layoutWidget = new QWidget(DelWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 20, 227, 416));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditNums = new QLineEdit(widget_2);
        lineEditNums->setObjectName(QString::fromUtf8("lineEditNums"));

        horizontalLayout_2->addWidget(lineEditNums);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditName = new QLineEdit(widget_3);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_3->addWidget(lineEditName);


        verticalLayout->addWidget(widget_3);

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

        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditAges = new QLineEdit(widget_4);
        lineEditAges->setObjectName(QString::fromUtf8("lineEditAges"));

        horizontalLayout_4->addWidget(lineEditAges);


        verticalLayout->addWidget(widget_4);

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

        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditJob = new QLineEdit(widget_5);
        lineEditJob->setObjectName(QString::fromUtf8("lineEditJob"));

        horizontalLayout_5->addWidget(lineEditJob);


        verticalLayout->addWidget(widget_5);

        widget_9 = new QWidget(layoutWidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(widget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        lineEditSalary = new QLineEdit(widget_9);
        lineEditSalary->setObjectName(QString::fromUtf8("lineEditSalary"));

        horizontalLayout_9->addWidget(lineEditSalary);


        verticalLayout->addWidget(widget_9);

        delBtn = new QPushButton(DelWidget);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(430, 350, 93, 28));

        retranslateUi(DelWidget);

        QMetaObject::connectSlotsByName(DelWidget);
    } // setupUi

    void retranslateUi(QWidget *DelWidget)
    {
        DelWidget->setWindowTitle(QCoreApplication::translate("DelWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("DelWidget", "\347\274\226\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("DelWidget", "\345\247\223\345\220\215", nullptr));
        rBtnman->setText(QCoreApplication::translate("DelWidget", "\347\224\267", nullptr));
        rBtnwoman->setText(QCoreApplication::translate("DelWidget", "\345\245\263", nullptr));
        label_4->setText(QCoreApplication::translate("DelWidget", "\345\271\264\351\276\204", nullptr));
        rBtnmarry->setText(QCoreApplication::translate("DelWidget", "\345\267\262\345\251\232", nullptr));
        rBtnunmarry->setText(QCoreApplication::translate("DelWidget", "\346\234\252\345\251\232", nullptr));
        rBtnboss->setText(QCoreApplication::translate("DelWidget", "\350\200\201\346\235\277", nullptr));
        rBtnmanage->setText(QCoreApplication::translate("DelWidget", "\347\273\217\347\220\206", nullptr));
        rBtnemployee->setText(QCoreApplication::translate("DelWidget", "\345\221\230\345\267\245", nullptr));
        label_5->setText(QCoreApplication::translate("DelWidget", "\350\201\214\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("DelWidget", "\350\226\252\350\265\204", nullptr));
        delBtn->setText(QCoreApplication::translate("DelWidget", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelWidget: public Ui_DelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELWIDGET_H
