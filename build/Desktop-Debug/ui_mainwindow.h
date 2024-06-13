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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
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
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *name_label;
    QLineEdit *name_Edit;
    QLabel *label_2;
    QLineEdit *weight_Edit;
    QLabel *label;
    QLineEdit *calories_edit;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout_3;
    QPushButton *take_number_button;
    QLabel *label_3;
    QLabel *min_valu_lable;
    QLabel *min_value;
    QLabel *mmax_value_lable;
    QLabel *max_value;
    QComboBox *select_button;
    QFormLayout *formLayout_2;
    QLabel *id_lable;
    QLineEdit *id_edit;
    QLabel *from_lable;
    QDateEdit *date_from_Edit;
    QLabel *label_5;
    QDateEdit *date_to_Edit;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *view_table_button;
    QPushButton *drop_database_button;
    QPushButton *get_values_row;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QTableView *SQLTableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(990, 724);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
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


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        take_number_button = new QPushButton(groupBox);
        take_number_button->setObjectName("take_number_button");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, take_number_button);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_3);

        min_valu_lable = new QLabel(groupBox);
        min_valu_lable->setObjectName("min_valu_lable");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, min_valu_lable);

        min_value = new QLabel(groupBox);
        min_value->setObjectName("min_value");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, min_value);

        mmax_value_lable = new QLabel(groupBox);
        mmax_value_lable->setObjectName("mmax_value_lable");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, mmax_value_lable);

        max_value = new QLabel(groupBox);
        max_value->setObjectName("max_value");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, max_value);


        verticalLayout_2->addLayout(formLayout_3);

        select_button = new QComboBox(groupBox);
        select_button->addItem(QString());
        select_button->addItem(QString());
        select_button->addItem(QString());
        select_button->setObjectName("select_button");

        verticalLayout_2->addWidget(select_button);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        id_lable = new QLabel(groupBox);
        id_lable->setObjectName("id_lable");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, id_lable);

        id_edit = new QLineEdit(groupBox);
        id_edit->setObjectName("id_edit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, id_edit);

        from_lable = new QLabel(groupBox);
        from_lable->setObjectName("from_lable");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, from_lable);

        date_from_Edit = new QDateEdit(groupBox);
        date_from_Edit->setObjectName("date_from_Edit");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, date_from_Edit);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        date_to_Edit = new QDateEdit(groupBox);
        date_to_Edit->setObjectName("date_to_Edit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, date_to_Edit);


        verticalLayout_2->addLayout(formLayout_2);

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

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 0, 1, 1, 1);

        SQLTableView = new QTableView(centralwidget);
        SQLTableView->setObjectName("SQLTableView");

        gridLayout->addWidget(SQLTableView, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 990, 23));
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
        min_valu_lable->setText(QCoreApplication::translate("MainWindow", "Min Value", nullptr));
        min_value->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        mmax_value_lable->setText(QCoreApplication::translate("MainWindow", "Max Value", nullptr));
        max_value->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        select_button->setItemText(0, QCoreApplication::translate("MainWindow", "All", nullptr));
        select_button->setItemText(1, QCoreApplication::translate("MainWindow", "Calories", nullptr));
        select_button->setItemText(2, QCoreApplication::translate("MainWindow", "Weight", nullptr));

        id_lable->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        id_edit->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        from_lable->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "To", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        view_table_button->setText(QCoreApplication::translate("MainWindow", "View Table", nullptr));
        drop_database_button->setText(QCoreApplication::translate("MainWindow", "Drop DataBase", nullptr));
        get_values_row->setText(QCoreApplication::translate("MainWindow", "Get Values Row", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "View Graphics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
