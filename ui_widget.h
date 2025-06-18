/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *ACButton;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *addButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *subButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *mutiButton;
    QPushButton *backButton;
    QPushButton *pushButton_0;
    QPushButton *retButton;
    QPushButton *devButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QLabel *timeLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(222, 284);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 250, 131, 19));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 181, 231));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(350, 40));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(lineEdit);

        ACButton = new QPushButton(widget);
        ACButton->setObjectName("ACButton");
        ACButton->setMaximumSize(QSize(35, 16777215));

        horizontalLayout->addWidget(ACButton);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName("pushButton_1");

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");

        gridLayout->addWidget(addButton, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName("subButton");

        gridLayout->addWidget(subButton, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        mutiButton = new QPushButton(widget);
        mutiButton->setObjectName("mutiButton");

        gridLayout->addWidget(mutiButton, 2, 3, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName("pushButton_0");

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        retButton = new QPushButton(widget);
        retButton->setObjectName("retButton");

        gridLayout->addWidget(retButton, 3, 2, 1, 1);

        devButton = new QPushButton(widget);
        devButton->setObjectName("devButton");

        gridLayout->addWidget(devButton, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(pushButton);

        timeLabel = new QLabel(widget);
        timeLabel->setObjectName("timeLabel");

        horizontalLayout_2->addWidget(timeLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "made by lbx", nullptr));
        ACButton->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        mutiButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        backButton->setText(QCoreApplication::translate("Widget", "->", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        retButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        devButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "About", nullptr));
        timeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
