#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget->setSortingEnabled(true);
    ui->tableWidget->setRowCount(10);
    ui->tableWidget->setColumnCount(3);
    for(char a = 0; a < 10; a++){
        for(char c = 0; c < 3; c++){
            QString TextInsert = "TestString-"+QString::number(a)+":"+QString::number(c);
            QTableWidgetItem* tableItem = new QTableWidgetItem();
            tableItem->setText(TextInsert);
            tableItem->setFlags(tableItem->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(a,c,tableItem);
        }
    }
}
