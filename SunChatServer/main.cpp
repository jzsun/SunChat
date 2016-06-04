#include "sunchatserver.h"
#include "log.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //注册自己的MsgHandler
    qInstallMsgHandler(customMessageHandler);
    qDebug()<< "Start SunChat......";

    SunChatServer w;
    w.show();

    return a.exec();
}
