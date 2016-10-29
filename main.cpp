#include <QCoreApplication>
#include <QDebug>
#include <dbmanager.h>

// Change to any path you wish
static const QString path = "example.db";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DbManager db(path);

    if (db.isOpen())
    {
        db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.
        db.addPerson("A");
        db.addPerson("B");
        db.addPerson("C");
        db.printAllPersons();
        db.removePerson("C");
        db.printAllPersons();
        db.removeAllPersons();
        qDebug() << "End";
    }
    else
    {
        qDebug() << "Database is not open!";
    }

    return a.exec();
}
