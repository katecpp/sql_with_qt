#include <QCoreApplication>
#include <dbmanager.h>

// Set valid db path before first run
static const QString path = "/path/people.db";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DbManager db(path);
    db.addPerson("A");
    db.addPerson("B");
    db.addPerson("C");
    db.printAllPersons();
    db.removePerson("C");
    db.printAllPersons();
    db.removeAllPersons();
    return a.exec();
}
