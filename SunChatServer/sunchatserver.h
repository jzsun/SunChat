#ifndef SUNCHATSERVER_H
#define SUNCHATSERVER_H

#include <QMainWindow>

namespace Ui {
class SunChatServer;
}

class SunChatServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit SunChatServer(QWidget *parent = 0);
    ~SunChatServer();

private:
    Ui::SunChatServer *ui;
};

#endif // SUNCHATSERVER_H
