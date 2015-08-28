#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>

class DbManager
{
public:
    DbManager(const QString& path);
    bool addPerson(const QString& name);
    bool removePerson(const QString& name);
    bool personExists(const QString& name) const;
    void printAllPersons() const;
    bool removeAllPersons();

private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
