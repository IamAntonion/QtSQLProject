#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDateTime>

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

private:
    Ui::MainWindow *ui;

    QSqlDatabase _db;
    QSqlQuery *_db_query;
    QSqlTableModel *_db_model;

    int _number_row;            // номер активной строки
};
#endif // MAINWINDOW_H
