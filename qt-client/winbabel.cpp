#include "winbabel.h"
#include "ui_winbabel.h"
#include "wincontact.h"
#include "ui_wincontact.h"

WinBabel::WinBabel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinBabel)
{
    ui->setupUi(this);
}

WinBabel::~WinBabel()
{
    delete ui;
}

void WinBabel::on_buttonNewContact_clicked()
{
    WinContact    *winCon = new WinContact();

    winCon->show();
}

void WinBabel::on_buttonDeco_clicked()
{
    close();
}
