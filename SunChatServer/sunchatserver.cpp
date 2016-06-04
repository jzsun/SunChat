#include "sunchatserver.h"
#include "ui_sunchatserver.h"

SunChatServer::SunChatServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SunChatServer)
{
    ui->setupUi(this);
}

SunChatServer::~SunChatServer()
{
    delete ui;
}
