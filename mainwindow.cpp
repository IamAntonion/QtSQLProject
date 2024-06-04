#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./test_data_base.db");

    //qDebug() << "DataBase open: " + _db.open();

    if (!_db.open()) {
        qDebug("not create");
    }

    _db_query = new QSqlQuery(_db);
    _db_query->exec("CREATE TABLE table (id INT, name TEXT, age INT, weight INT)");

    _db_model = new QSqlTableModel(this, _db);
    _db_model->setTable("table");
    _db_model->select();

    ui->SQLTableView->setModel(_db_model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

