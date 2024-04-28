#include "mainwindow.h"
#include <QSqlDatabase>
#include <QApplication>
#include <QtNetwork>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QSqlDatabase sql_db;
    QNetworkAccessManager net_accman;

    w.show();
    return a.exec();
}
