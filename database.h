#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace database {
class database
{
public:
    database();

    QSqlDatabase* get_database();

    void create_table_request();
    void insert_table_value_request(const QString& name, const QString& date,const float weight, const float calories);
    void drop_table_request(const QString& name_table);

private:
    QSqlDatabase _db;
    QSqlQuery *_db_query;
};


}

#endif // DATABASE_H
