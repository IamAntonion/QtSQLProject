#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->get_values_row->setVisible(false);
    ui->drop_database_button->setVisible(false);

    _min_value = 0, _max_value = 0;
    ui->min_value->setText(QString::number(_min_value));
    ui->max_value->setText(QString::number(_max_value));

    // разработка бд
    _db_object = new database::database;
    _db = _db_object->get_database();

    _db_object->create_table_request();

    _db_model = new QSqlTableModel(this, *_db);
    _db_model->setTable("persons");
    _db_model->select();


    // разработка сцены с графиком
    _scene_object = new paint_graph::paint_graph;
    //_scene = new QGraphicsScene;

    _scene = _scene_object->get_scene();

    ui->graphicsView->setScene(_scene);

    _scene->addLine(0, 250, 0, -250);

    //ui->SQLTableView->setModel(_db_model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AddButton_clicked()
{
    _db_object->insert_table_value_request(ui->name_Edit->text(),
                                           //QDateTime::currentDateTime().toString("hh:mm dd.MM.yyyy"),
                                           QDateTime::currentDateTime().toString("dd.MM.yyyy"),
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
    _db_model->select();
}


void MainWindow::on_select_button_activated(int index)
{
    _db_model = new QSqlTableModel(this, *_db);
    _db_model->setTable("persons");
    _db_model->select();
    switch (index) {
    case 1:
        qDebug("index Calories");
        _db_model->removeColumns(2, 1);
        _db_model->removeColumns(3, _db_model->columnCount());
        _db_model->setHeaderData(2, Qt::Horizontal, "Calories"); // Установка заголовка для столбца
        break;
    case 2:
        qDebug("index Weight");
        _db_model->removeColumns(3, 1);
        _db_model->setHeaderData(2, Qt::Horizontal, "Weight"); // Установка заголовка для столбца
        break;
    default:
        qDebug("index default");
    }

    _min_value = 0, _max_value = 0;
    ui->min_value->setText(QString::number(_min_value));
    ui->max_value->setText(QString::number(_max_value));

    _db_model->select();

    //ui->SQLTableView->setModel(_db_model);
}


void MainWindow::on_view_table_button_clicked()
{
    sort_by_name();
    ui->SQLTableView->setModel(_db_model);
    ui->get_values_row->setVisible(true);
}


void MainWindow::on_take_number_button_clicked()
{
    QModelIndex index = ui->SQLTableView->currentIndex();                                   // берем выделенную ячейку

    QString cellValue = ui->SQLTableView->model()->data(index, Qt::DisplayRole).toString(); // берем значение с выделенной ячейки
    ui->label_3->setText(cellValue);


    //QPoint point(ui->lineEdit->text().toInt(), ui->lineEdit_2->text().toInt());

    //QTableWidgetItem *item = ui->SQLTableView->indexAt(point);
    //int res = ui->SQLTableView->indexAt(point).;
    // item(num1, num2)
    // if (res == NULL) {
    //     ui->label_3->setText(res);
    // }
}


void MainWindow::on_get_values_row_clicked()
{
    if (ui->SQLTableView->model()->columnCount() > 3) return;

    int rowCount = ui->SQLTableView->model()->rowCount();

    for (int count = 0; count != rowCount; ++count) {
        QModelIndex index = ui->SQLTableView->model()->index(count, 2);                         // берем индекс ячейки (count, 2)

        QString cell_value = ui->SQLTableView->model()->data(index, Qt::DisplayRole).toString(); // берем значение из значение
        qDebug() << cell_value;

        if (count == 0) {
            _max_value = cell_value.toInt();
            _min_value = cell_value.toInt();
        }

        if (_max_value < cell_value.toInt()) {
            _max_value = cell_value.toInt();
        }
        if (_min_value > cell_value.toInt()) {
            _min_value = cell_value.toInt();
        }

        _values_row.push(cell_value);
    }

    ui->min_value->setText(QString::number(_min_value));
    ui->max_value->setText(QString::number(_max_value));
}

void MainWindow::sort_by_name() {
    if (ui->id_edit->text() == "None") return;

    // std::queue<int> num;

    // for (int count = 0; count != ui->SQLTableView->model()->rowCount(); ++count) {
    //     QModelIndex index = ui->SQLTableView->model()->index(count, 0);
    //     if (ui->id_edit->text() != ui->SQLTableView->model()->data(index, Qt::DisplayRole).toString()) {
    //         num.push(count);
    //     }
    //     //_db_model->removeRows(count, 1);
    // }

    // for (int* count = num.begin(); count != num.end(); ++count) {

    // }

    // Устанавливаем фильтр
    QString name = ui->id_edit->text();
    _db_model->setFilter("name = '" + name + "'");

    // Выбираем и отображаем только нужные столбцы
    _db_model->setEditStrategy(QSqlTableModel::OnFieldChange);
    // _db_model->setHeaderData(0, Qt::Horizontal, tr("Name"));
    // _db_model->setHeaderData(1, Qt::Horizontal, tr("Date"));
    // _db_model->setHeaderData(2, Qt::Horizontal, tr("Num"));
}

