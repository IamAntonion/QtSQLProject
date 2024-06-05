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

    if (_db.open()) {
        qDebug("open");
    } else {
        qDebug("no open");
    }

    _db_query = new QSqlQuery(_db);
    _db_query->exec("CREATE TABLE tableid(id INT, name TEXT);");

    _db_model = new QSqlTableModel(this, _db);
    _db_model->setTable("tableid");
    _db_model->select();

    ui->SQLTableView->setModel(_db_model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AddButton_clicked()
{
    _db_model->insertRow(_db_model->rowCount());
}


void MainWindow::on_DeleteButton_clicked()
{
    _db_model->removeRow(_number_row);
}


void MainWindow::on_SQLTableView_clicked(const QModelIndex &index)
{
    _number_row = index.row();
}

