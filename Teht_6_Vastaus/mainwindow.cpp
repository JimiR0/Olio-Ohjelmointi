#include "mainwindow.h"
#include "qpushbutton.h"
#include "ui_mainwindow.h"
#include "QString"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    operand = 5;

    connect(ui->N0,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N1,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N2,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N3,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N4,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N5,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N6,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N7,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N8,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->N9,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()));
    connect(ui->add,SIGNAL(clicked()),
            this,SLOT(addSubMulDivClickHandler()));
    connect(ui->sub,SIGNAL(clicked()),
            this,SLOT(addSubMulDivClickHandler()));
    connect(ui->mul,SIGNAL(clicked()),
            this,SLOT(addSubMulDivClickHandler()));
    connect(ui->div,SIGNAL(clicked()),
            this,SLOT(addSubMulDivClickHandler()));
    connect(ui->enter,SIGNAL(clicked()),
            this,SLOT(clearAndEnterClickHandler()));
    connect(ui->clear,SIGNAL(clicked()),
            this,SLOT(clearAndEnterClickHandler()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();


    if(operand == 5)
      {
        number1 = number1 +  name.back();
        ui->num1->setText(number1);

         }
        else
       {
        number2 = number2 +  name.back();
        ui->num2->setText(number2);
        }





}

void MainWindow::clearAndEnterClickHandler()
{

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "clear"){


    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
    number1= "";
    number2="";
    operand = 5;
     }

    if(name == "enter"){

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

   switch(operand){
   case 0:
       result = n1+n2;

       break;

   case 1:
       result = n1-n2;
       break;

   case 2:
       result = n1*n2;
       break;

   case 3:
       result = n1/n2;
       break;
   }

 ui->result->setText(QString::number(result));
  }
}

void MainWindow::addSubMulDivClickHandler()
{

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "div"){
      operand = 3;
    }
    if(name == "sub")
    {
      operand = 1;
    }
    if(name == "add")
    {
      operand = 0;
    }
    if(name == "mul")
      {
        operand = 2;
     }
}

void MainWindow::resetLineEdits()
{

}

