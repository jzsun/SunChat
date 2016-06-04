#ifndef SUNCHATCLIENT_H
#define SUNCHATCLIENT_H

#include <QMainWindow>

namespace Ui {
class SunChatClient;
}

class SunChatClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SunChatClient(QWidget *parent = 0);
    ~SunChatClient();

private:
    Ui::SunChatClient *ui;
};

#endif // SUNCHATCLIENT_H
