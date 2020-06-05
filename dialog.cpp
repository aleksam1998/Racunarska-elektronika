#include "dialog.h"
#include "ui_dialog.h"
bool flag = true;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(flag){
        ui->label->hide();
        flag = false;
    }
    else{
        ui->label->show();
        flag = true;
    }
}

