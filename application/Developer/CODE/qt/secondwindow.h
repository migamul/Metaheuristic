#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void on_VisualInfo_clicked();

    void on_SteinerPointsInfo_clicked();

    void on_EdgesInfo_clicked();

    void on_SaveSteinerPointsTxt_clicked();

    void on_SaveEdgesTxt_clicked();

    void on_SaveVisual_clicked();

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
