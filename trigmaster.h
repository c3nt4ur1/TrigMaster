#ifndef TRIGMASTER_H
#define TRIGMASTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TrigMaster; }
QT_END_NAMESPACE

class TrigMaster : public QMainWindow
{
    Q_OBJECT

public:
    TrigMaster(QWidget *parent = nullptr);
    ~TrigMaster();

private:
    Ui::TrigMaster *ui;
};
#endif // TRIGMASTER_H
