#ifndef LOG_H

#include <QtDebug>
#include <QFile>
#include <QTextStream>

void customMessageHandler(QtMsgType type, const char *msg)
{
    QString txt;
    switch (type) {
    //调试信息提示
    case QtDebugMsg:
            txt = QString("Debug: %1: %2").arg(__TIME__).arg(msg);
            break;

    //一般的warning提示
    case QtWarningMsg:
            txt = QString("Warning: %1").arg(msg);
    break;
    //严重错误提示
    case QtCriticalMsg:
            txt = QString("Critical: %1").arg(msg);
    break;
    //致命错误提示
    case QtFatalMsg:
            txt = QString("Fatal: %1").arg(msg);
            abort();
    }

    QFile outFile("log.log");
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream ts(&outFile);
    ts << txt <<"\r"<<endl; //用\n 用txt打开不会换行 然后干脆每次写的时候光标换行
}

#endif // LOG_H
