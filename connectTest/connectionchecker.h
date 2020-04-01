
#include <QString>
#include <QSqlDatabase>

class connenionChecker {

public:
    static bool getConnectionStatus();
    static QStringList getConnectionFileParams();
    static void setConnectionFileParams(QString db, QString user, QString host, QString password, QString port);
    static QSqlDatabase db;
};
