#include "sunchatclient.h"
#include "ui_sunchatclient.h"

SunChatClient::SunChatClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SunChatClient)
{
    ui->setupUi(this);
}

SunChatClient::~SunChatClient()
{
    delete ui;
}
