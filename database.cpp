#include "database.h"

namespace database {
database::database() {
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./database.db");

    if (_db.open()) {
        qDebug("open");
    } else {
        qDebug("no open");
    }
}

QSqlDatabase* database::get_database() {
    return &_db;
}

void database::create_table_request() {
    _db_query = new QSqlQuery(_db);
    _db_query->exec("CREATE TABLE IF NOT EXISTS persons(name TEXT, date TEXT, weight FLOAT, calories FLOAT);");
}

void database::insert_table_value_request(const QString& name, const QString& date,const float weight, const float calories) {
    _db_query->prepare("INSERT INTO persons (name, date, weight, calories) "
                       "VALUES (:name, :date, :weight, :calories)");
    _db_query->bindValue(":name", name);
    _db_query->bindValue(":date", date);
    _db_query->bindValue(":weight", weight);
    _db_query->bindValue(":calories", calories);

    _db_query->exec();
}

void database::drop_table_request(const QString& name_table) {
    _db_query->prepare("DROP TABLE " + name_table + ";");
    _db_query->exec();
}

}
