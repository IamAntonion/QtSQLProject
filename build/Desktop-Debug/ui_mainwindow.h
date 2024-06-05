/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *name_label;
    QLineEdit *name_Edit;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *drop_database_button;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QTableView *SQLTableView;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(921, 637);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        name_label = new QLabel(groupBox);
        name_label->setObjectName("name_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        name_Edit = new QLineEdit(groupBox);
        name_Edit->setObjectName("name_Edit");

        formLayout->setWidget(0, QFormLayout::FieldRole, name_Edit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName("doubleSpinBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox);


        verticalLayout_2->addLayout(formLayout);

        AddButton = new QPushButton(groupBox);
        AddButton->setObjectName("AddButton");

        verticalLayout_2->addWidget(AddButton);

        DeleteButton = new QPushButton(groupBox);
        DeleteButton->setObjectName("DeleteButton");

        verticalLayout_2->addWidget(DeleteButton);

        drop_database_button = new QPushButton(groupBox);
        drop_database_button->setObjectName("drop_database_button");

        verticalLayout_2->addWidget(drop_database_button);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        SQLTableView = new QTableView(centralwidget);
        SQLTableView->setObjectName("SQLTableView");

        gridLayout->addWidget(SQLTableView, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 921, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        name_label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        drop_database_button->setText(QCoreApplication::translate("MainWindow", "Drop DataBase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
