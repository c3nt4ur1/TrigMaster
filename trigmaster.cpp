#include "trigmaster.h"
#include "ui_trigmaster.h"

TrigMaster::TrigMaster(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TrigMaster)
{
    ui->setupUi(this);
}

TrigMaster::~TrigMaster()
{
    delete ui;
}

