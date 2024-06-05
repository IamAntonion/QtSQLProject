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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QTableView *SQLTableView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *name_label;
    QLineEdit *name_Edit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *calories_edit;
    QLineEdit *weight_Edit;
    QComboBox *select_button;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *view_table_button;
    QPushButton *drop_database_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 655);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        SQLTableView = new QTableView(centralwidget);
        SQLTableView->setObjectName("SQLTableView");

        gridLayout->addWidget(SQLTableView, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(300, 16777215));
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

        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        calories_edit = new QLineEdit(groupBox);
        calories_edit->setObjectName("calories_edit");

        formLayout->setWidget(2, QFormLayout::FieldRole, calories_edit);

        weight_Edit = new QLineEdit(groupBox);
        weight_Edit->setObjectName("weight_Edit");

        formLayout->setWidget(1, QFormLayout::FieldRole, weight_Edit);


        verticalLayout_2->addLayout(formLayout);

        select_button = new QComboBox(groupBox);
        select_button->addItem(QString());
        select_button->addItem(QString());
        select_button->addItem(QString());
        select_button->setObjectName("select_button");

        verticalLayout_2->addWidget(select_button);

        AddButton = new QPushButton(groupBox);
        AddButton->setObjectName("AddButton");

        verticalLayout_2->addWidget(AddButton);

        DeleteButton = new QPushButton(groupBox);
        DeleteButton->setObjectName("DeleteButton");

        verticalLayout_2->addWidget(DeleteButton);

        view_table_button = new QPushButton(groupBox);
        view_table_button->setObjectName("view_table_button");

        verticalLayout_2->addWidget(view_table_button);

        drop_database_button = new QPushButton(groupBox);
        drop_database_button->setObjectName("drop_database_button");

        verticalLayout_2->addWidget(drop_database_button);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1024, 23));
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
        label->setText(QCoreApplication::translate("MainWindow", "Calories", nullptr));
        select_button->setItemText(0, QCoreApplication::translate("MainWindow", "All", nullptr));
        select_button->setItemText(1, QCoreApplication::translate("MainWindow", "Calories", nullptr));
        select_button->setItemText(2, QCoreApplication::translate("MainWindow", "Weight", nullptr));

        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        view_table_button->setText(QCoreApplication::translate("MainWindow", "View Table", nullptr));
        drop_database_button->setText(QCoreApplication::translate("MainWindow", "Drop DataBase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
