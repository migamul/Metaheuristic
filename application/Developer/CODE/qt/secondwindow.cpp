#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QDir>
#include <QFileDialog>
#include <QProcess>
#include <QDebug>
#include <QStringList>
#include <QString>
#include <QImage>


SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    ///Image Output
    QPixmap Pic("pic.png");
    int width = ui->Image->width();
    int height = ui->Image->height();
    ui->Image->setPixmap(Pic.scaled(width,height,Qt::KeepAspectRatio));

    ///Steiner Points Output
    QFile FileSteinerPoints("txt/steinerPoints.txt");
    if(!FileSteinerPoints.open(QIODevice::ReadOnly))
        QMessageBox::warning(this,"Info",FileSteinerPoints.errorString());
    QTextStream ins(&FileSteinerPoints);
    ui->SteinerPointsTxt->setText(ins.readAll());
    FileSteinerPoints.close();

    ///Edges Output
    QFile FileEdges("txt/edges.txt");
    if(!FileEdges.open(QIODevice::ReadOnly | QFile::Text))
        QMessageBox::warning(this,"Info",FileEdges.errorString());
    QTextStream ine(&FileEdges);
    ui->EdgesTxt->setText(ine.readAll());
    FileEdges.close();
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

///Visual Info push_button
void SecondWindow::on_VisualInfo_clicked()
{
    QMessageBox::about(this,"Info","Blue dots - terminals; Red dots - steiner points");
}

///Steiner Points Info push_button
void SecondWindow::on_SteinerPointsInfo_clicked()
{
    QMessageBox::about(this,"Info",".txt containing steiner points");
}

///Edges Info push_button
void SecondWindow::on_EdgesInfo_clicked()
{
    QMessageBox::about(this,"Info",".txt containing edges");
}

///Save Steiner Points .txt
void SecondWindow::on_SaveSteinerPointsTxt_clicked()
{
    QString SavePath = QFileDialog::getSaveFileName(this,"Save file",tr("*.txt"));

    QFile FileSteinerPoints("txt/steinerPoints.txt");
    if (!SavePath.isEmpty())
    {
        QFile file(SavePath);
        if (!file.open(QIODevice::WriteOnly))
            QMessageBox::warning(this,"Info","File is not open");
        else
        {
            QTextStream stream(&file);
            stream << ui->SteinerPointsTxt->toPlainText();
            stream.flush();
            file.close();
        }
    }
}

///Save Edges .txt
void SecondWindow::on_SaveEdgesTxt_clicked()
{
    QString SavePath = QFileDialog::getSaveFileName(this,"Save file",tr("*.txt"));

    QFile FileEdges("txt/edges.txt");
    if (!SavePath.isEmpty())
    {
        QFile file(SavePath);
        if (!file.open(QIODevice::WriteOnly))
            QMessageBox::warning(this,"Info","File is not open");
        else
        {
            QTextStream stream(&file);
            stream << ui->SteinerPointsTxt->toPlainText();
            stream.flush();
            file.close();
        }
    }
}

///Save Visual
void SecondWindow::on_SaveVisual_clicked()
{
    QString SavePath = QFileDialog::getSaveFileName(this,"Save file",tr("*.png"));

    QPixmap Pic("pic.png");

    if (!SavePath.isEmpty())
    {
        QFile file(SavePath);
        if (!file.open(QIODevice::WriteOnly))
            QMessageBox::warning(this,"Info","File is not open");
        else
        {
            Pic.save(SavePath);
        }
    }
}
