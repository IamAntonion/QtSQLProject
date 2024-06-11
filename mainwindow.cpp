#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _db_object = new database::database;
    _db = _db_object->get_database();

    _db_object->create_table_request();

    _db_model = new QSqlTableModel(this, *_db);
    _db_model->setTable("persons");
    _db_model->select();

    //ui->SQLTableView->setModel(_db_model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AddButton_clicked()
{
    _db_object->insert_table_value_request(ui->name_Edit->text(),
                                           QDateTime::currentDateTime().toString("hh:mm dd.MM.yyyy"),
                                           ui->weight_Edit->text().toFloat(),
                                           ui->calories_edit->text().toFloat());

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
    _db_object->drop_table_request("persons");
    // _db_query->prepare("DROP TABLE persons;");
    // _db_query->exec();
    _db_model->select();
}


void MainWindow::on_select_button_activated(int index)
{
    _db_model = new QSqlTableModel(this, *_db);
    _db_model->setTable("persons");
    _db_model->select();
    switch (index) {
    case 1:
        qDebug("index 1");
        //_db_model->setTable("persons");
        _db_model->removeColumns(2, 1);
        _db_model->removeColumns(3, _db_model->columnCount());
        _db_model->setHeaderData(2, Qt::Horizontal, "Calories"); // Установка заголовка для столбца
        //_db_query->prepare("SELECT calories FROM persons;");
        //_db_query->exec();
        break;
    case 2:
        qDebug("index 2");
        _db_model->removeColumns(3, 1);
        _db_model->setHeaderData(2, Qt::Horizontal, "Weight"); // Установка заголовка для столбца
        //_db_query->prepare("SELECT weight FROM persons;");
        //_db_query->exec();
        break;
    default:
        qDebug("index default");
        //_db_query->prepare("SELECT * FROM persons;");
        //_db_query->exec();
    }

    //_db_query->exec();
    _db_model->select();

    //ui->SQLTableView->setModel(_db_model);
}


void MainWindow::on_view_table_button_clicked()
{
    ui->SQLTableView->setModel(_db_model);
}

