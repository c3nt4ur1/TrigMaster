#include <cmath>
#include "trigmaster.h"
#include "ui_trigmaster.h"
#include <iostream>
using namespace std;

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


void TrigMaster::on_pb_sin_clicked()
{
    QString qsDeg = ui->lineEdit->text();
    double dDeg = qsDeg.toDouble();

    double dRad = dDeg * (3.1415921265359 / 180);

    double dSin = sin(dRad);
    QString qsSin = QString::number(dSin);
    ui->lineEdit->setText(qsSin);

}


void TrigMaster::on_pb_cos_clicked()
{
    QString qsDeg = ui->lineEdit->text();
    double dDeg = qsDeg.toDouble();

    double dRad = dDeg * (3.1415921265359 / 180);

    double dCos = cos(dRad);
    QString qsCos = QString::number(dCos);
    ui->lineEdit->setText(qsCos);
}


void TrigMaster::on_pb_tan_clicked()
{
    QString qsDeg = ui->lineEdit->text();
    double dDeg = qsDeg.toDouble();

    double dRad = dDeg * (3.1415921265359 / 180);

    double dTan = tan(dRad);
    QString qsTan = QString::number(dTan);
    ui->lineEdit->setText(qsTan);
}

