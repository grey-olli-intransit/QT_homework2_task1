#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    insSymPtr = new InsertSpecialSymbol();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete insSymPtr;
}


void MainWindow::on_pushButton_clicked()
{
    QCoreApplication::exit(0);
}


void MainWindow::on_plainTextEdit_textChanged()
{
    QString contents = ui->plainTextEdit->toPlainText();
    if (insSymPtr->insertSpecialSymbol(contents)) {
        ui->plainTextEdit->setPlainText(contents);
    }
}

