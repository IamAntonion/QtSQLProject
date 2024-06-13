#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
#include <QTableWidgetItem>
#include <QGraphicsScene>

#include <queue>
#include <iostream>

#include "database.h"
#include "paint_graph.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

    void on_SQLTableView_clicked(const QModelIndex &index);

    void on_drop_database_button_clicked();

    void on_select_button_activated(int index);

    void on_view_table_button_clicked();

    void on_take_number_button_clicked();

    void on_get_values_row_clicked();

private:
    Ui::MainWindow *ui;

    database::database *_db_object;
    QSqlDatabase *_db;
    QSqlQuery *_db_query;
    QSqlTableModel *_db_model;

    paint_graph::paint_graph *_scene_object;
    QGraphicsScene *_scene;

    int _number_row;            // номер активной строки
    std::queue<QString> _values_row;
    int _max_value;
    int _min_value;

    void sort_by_name();
};
#endif // MAINWINDOW_H
