#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QDebug>
#include <QObject>
#include <QStringList>
#include <QString>
#include <QPalette>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

///Run push_button
void MainWindow::on_Run_clicked()
{
    ///info.txt making
    QFile Input("txt/info.txt");
    if(!Input.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::warning(this,"Info","File not open");

    QTextStream out(&Input);
    QString k = ui->kInput->text();
    QString path = ui->PathToTerminalsTxt->text();
    QString repetitions = ui->RepetitionsInput->text();
    out << path << " " << k << " " << repetitions;
    Input.flush();
    Input.close();

    ///Running k-Bottleneck_Steiner_Problem.exe (c++ code)
    QString programcpp = "k-Bottleneck_Steiner_Problem.exe";
    QProcess *myProcesscpp = new QProcess();
    myProcesscpp->execute(programcpp);

    ///Running drawSteinerTree.py (python code)
    QString programpy = "drawSteinerTree.exe";
    QProcess *myProcesspy = new QProcess();
    myProcesspy->execute(programpy);

    ///2.otvara novi prozor
      hide(); //skriva prvi
      secWindow = new SecondWindow(this);
      secWindow->show();
}

///k Info push_button
void MainWindow::on_kInfo_clicked()
{
    QMessageBox::about(this,"Info","Please enter the number of steiner points k ≥ 0");
}

///n Info push_button
void MainWindow::on_nInfo_clicked()
{
    QMessageBox::about(this,"Info","Please select path to .txt that contains terminal nodes");
}

///About
void MainWindow::on_actionAbout_triggered()
{

QMessageBox::about(this,"About","General:\n"
                                "\tThis application gives the solution to the k-Bottleneck Steiner Problem.\n"
                                "\tIt solves the problem using standard Minimal Spanning Tree Heuristic and\n"
                                "\tMulti Swarm Optimization.\n"
                                "\n"
                                "Input:\n"
                                "\t1.) text file containing coordinates of initial points,\n"
                                "\t2.) maximum number of Steiner points k,\n"
                                "\t3.) number of times the Multi Swarm Optimization is run.\n"
                                "\n"
                                "Output:\n"
                                "\t1.) text file containing coordinates of terminals stays unchanged,\n"
                                "\t2.) text file containing locations of Steiner points,\n"
                                "\t3.) text file containing edges of the minimal spanning tree,\n"
                                "\t4.) visual representation of the minimal spanning tree.\n"
                                "\n"
                                "Structure of files:\n"
                                "\n"
                                "\tnodes.txt:\n"
                                "\t\"n (number of points)\n"
                                "\tX1 Y1 (x and y coordinates of the 1. point)\n"
                                "\tX2 Y2\n"
                                "\t...\n"
                                "\tXn Yn\"\n"
                                "\n"
                                "\tsteinerPoints.txt:\n"
                                "\t\"k (number of Steiner points)\n"
                                "\tX1 Y1 (x and y coordinates of the 1. Steiner point)\n"
                                "\tX2 Y2\n"
                                "\t...\n"
                                "\tXk Yk\"\n"
                                "\n"
                                "\tedges.txt:\n"
                                "\t\"A_X1 A_Y1 B_X1 B_Y1 (coordinates of the points by which the edge is defined)\n"
                                "\tA_X2 A_Y2 B_X2 B_Y2\n"
                                "\t...\n"
                                "\tA_Xn-1 A_Yn-1 B_Xn-1 B_Yn-1\"");

}

///Open File Terminals push_button
void MainWindow::on_OpenFileTerminals_clicked()
{
    QString FileTerminals = QFileDialog::getOpenFileName(this,"Open file");
    ui->PathToTerminalsTxt->setText(FileTerminals);
}

void MainWindow::on_RepetitionsInfo_clicked()
{
    QMessageBox::about(this,"Info","Please enter the number of repetitions of multiswarm heuristic ( ≥ 0 )");
}
