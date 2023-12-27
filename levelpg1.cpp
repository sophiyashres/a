#include "levelpg1.h"
#include "ui_levelpg1.h"

levelpg1::levelpg1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg1)
{
    ui->setupUi(this);
}

levelpg1::~levelpg1()
{
    delete ui;
}

void levelpg1::on_levels_next_clicked()
{
    //modal less approach: can access first and second dialog both at same time
    Levelpg2 = new levelpg2(this);
    Levelpg2 ->show();
}


void levelpg1::on_level1_linkActivated(const QString &link)
{
    Level1 = new level1(this);
    Level1 ->show();
}


void levelpg1::on_pushButton_clicked()
{

}

