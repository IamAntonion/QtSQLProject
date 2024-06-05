#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./database.db");

    //qDebug() << "DataBase open: " + _db.open();

    if (_db.open()) {
        qDebug("open");
    } else {
        qDebug("no open");
    }

    _db_query = new QSqlQuery(_db);
    _db_query->exec("CREATE TABLE IF NOT EXISTS persons(id INT, name TEXT, date TEXT, weight FLOAT);");

    _db_model = new QSqlTableModel(this, _db);
    _db_model->setTable("persons");
    _db_model->select();

    ui->SQLTableView->setModel(_db_model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AddButton_clicked()
{
    //_db_model->insertRow(_db_model->rowCount());
    //_db_query = new QSqlQuery(_db);
    _db_query->prepare("INSERT INTO persons (id, name, date, weight) "
                      "VALUES (:id, :name, :date, :weight)");
    _db_query->bindValue(":id", 0);
    _db_query->bindValue(":name", ui->name_Edit->text());
    _db_query->bindValue(":date", QDateTime::currentDateTime().toString("hh:mm dd.MM.yyyy"));
    _db_query->bindValue(":weight", ui->doubleSpinBox->value());

    _db_query->exec();

    _db_model->setTable("persons");
    _db_model->select();
}


void MainWindow::on_DeleteButton_clicked()
{
    _db_model->removeRow(_number_row);
}


void MainWindow::on_SQLTableView_clicked(const QModelIndex &index)
{
    _number_row = index.row();
}


void MainWindow::on_drop_database_button_clicked()
{
    _db_query->prepare("DROP TABLE persons;");
}

