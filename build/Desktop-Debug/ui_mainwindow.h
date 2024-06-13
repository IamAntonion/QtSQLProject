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
    QLineEdit *weight_Edit;
    QLabel *label;
    QLineEdit *calories_edit;
    QPushButton *take_number_button;
    QLabel *label_3;
    QLabel *mmax_value_lable;
    QLabel *max_value;
    QLabel *min_valu_lable;
    QLabel *min_value;
    QComboBox *select_button;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *view_table_button;
    QPushButton *drop_database_button;
    QPushButton *get_values_row;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 809);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        SQLTableView = new QTableView(centralwidget);
        SQLTableView->setObjectName("SQLTableView");

        gridLayout->addWidget(SQLTableView, 0, 1, 1, 2);

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

        weight_Edit = new QLineEdit(groupBox);
        weight_Edit->setObjectName("weight_Edit");

        formLayout->setWidget(1, QFormLayout::FieldRole, weight_Edit);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        calories_edit = new QLineEdit(groupBox);
        calories_edit->setObjectName("calories_edit");

        formLayout->setWidget(2, QFormLayout::FieldRole, calories_edit);

        take_number_button = new QPushButton(groupBox);
        take_number_button->setObjectName("take_number_button");

        formLayout->setWidget(3, QFormLayout::LabelRole, take_number_button);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::FieldRole, label_3);

        mmax_value_lable = new QLabel(groupBox);
        mmax_value_lable->setObjectName("mmax_value_lable");

        formLayout->setWidget(5, QFormLayout::LabelRole, mmax_value_lable);

        max_value = new QLabel(groupBox);
        max_value->setObjectName("max_value");

        formLayout->setWidget(5, QFormLayout::FieldRole, max_value);

        min_valu_lable = new QLabel(groupBox);
        min_valu_lable->setObjectName("min_valu_lable");

        formLayout->setWidget(4, QFormLayout::LabelRole, min_valu_lable);

        min_value = new QLabel(groupBox);
        min_value->setObjectName("min_value");

        formLayout->setWidget(4, QFormLayout::FieldRole, min_value);


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

        get_values_row = new QPushButton(groupBox);
        get_values_row->setObjectName("get_values_row");

        verticalLayout_2->addWidget(get_values_row);


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
        take_number_button->setText(QCoreApplication::translate("MainWindow", "Take Number", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        mmax_value_lable->setText(QCoreApplication::translate("MainWindow", "Max Value", nullptr));
        max_value->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        min_valu_lable->setText(QCoreApplication::translate("MainWindow", "Min Value", nullptr));
        min_value->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        select_button->setItemText(0, QCoreApplication::translate("MainWindow", "All", nullptr));
        select_button->setItemText(1, QCoreApplication::translate("MainWindow", "Calories", nullptr));
        select_button->setItemText(2, QCoreApplication::translate("MainWindow", "Weight", nullptr));

        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        view_table_button->setText(QCoreApplication::translate("MainWindow", "View Table", nullptr));
        drop_database_button->setText(QCoreApplication::translate("MainWindow", "Drop DataBase", nullptr));
        get_values_row->setText(QCoreApplication::translate("MainWindow", "Get Values Row", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
