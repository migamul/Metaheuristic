#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Run_clicked();

    void on_kInfo_clicked();

    void on_nInfo_clicked();

    void on_actionAbout_triggered();

    void on_OpenFileTerminals_clicked();

    void on_RepetitionsInfo_clicked();

private:
    Ui::MainWindow *ui;
    SecondWindow *secWindow;
};

#endif // MAINWINDOW_H
