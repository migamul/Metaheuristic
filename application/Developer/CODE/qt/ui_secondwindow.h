/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *Visual;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Image;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout;
    QPushButton *VisualInfo;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *SaveVisual;
    QSpacerItem *verticalSpacer_6;
    QWidget *SteinerPoints;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *SteinerPointsTxt;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QPushButton *SteinerPointsInfo;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *SaveSteinerPointsTxt;
    QSpacerItem *verticalSpacer_4;
    QWidget *Edges;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QTextBrowser *EdgesTxt;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *EdgesInfo;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *SaveEdgesTxt;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(554, 548);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Visual = new QWidget();
        Visual->setObjectName(QStringLiteral("Visual"));
        horizontalLayout_2 = new QHBoxLayout(Visual);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Image = new QLabel(Visual);
        Image->setObjectName(QStringLiteral("Image"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Image->sizePolicy().hasHeightForWidth());
        Image->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Image);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        VisualInfo = new QPushButton(Visual);
        VisualInfo->setObjectName(QStringLiteral("VisualInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(VisualInfo->sizePolicy().hasHeightForWidth());
        VisualInfo->setSizePolicy(sizePolicy1);
        VisualInfo->setStyleSheet(QStringLiteral("font: 75  10pt \"Webdings\";"));

        verticalLayout->addWidget(VisualInfo);

        verticalSpacer_5 = new QSpacerItem(48, 102, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        verticalLayout_10->addLayout(verticalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));

        verticalLayout_9->addLayout(verticalLayout_8);

        SaveVisual = new QPushButton(Visual);
        SaveVisual->setObjectName(QStringLiteral("SaveVisual"));
        sizePolicy1.setHeightForWidth(SaveVisual->sizePolicy().hasHeightForWidth());
        SaveVisual->setSizePolicy(sizePolicy1);

        verticalLayout_9->addWidget(SaveVisual);

        verticalSpacer_6 = new QSpacerItem(45, 168, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);


        verticalLayout_10->addLayout(verticalLayout_9);


        horizontalLayout->addLayout(verticalLayout_10);


        horizontalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(Visual, QString());
        SteinerPoints = new QWidget();
        SteinerPoints->setObjectName(QStringLiteral("SteinerPoints"));
        horizontalLayout_5 = new QHBoxLayout(SteinerPoints);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        SteinerPointsTxt = new QTextBrowser(SteinerPoints);
        SteinerPointsTxt->setObjectName(QStringLiteral("SteinerPointsTxt"));

        horizontalLayout_4->addWidget(SteinerPointsTxt);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        SteinerPointsInfo = new QPushButton(SteinerPoints);
        SteinerPointsInfo->setObjectName(QStringLiteral("SteinerPointsInfo"));
        sizePolicy1.setHeightForWidth(SteinerPointsInfo->sizePolicy().hasHeightForWidth());
        SteinerPointsInfo->setSizePolicy(sizePolicy1);
        SteinerPointsInfo->setStyleSheet(QStringLiteral("font: 75  10pt \"Webdings\";"));

        verticalLayout_5->addWidget(SteinerPointsInfo);

        verticalSpacer_3 = new QSpacerItem(48, 102, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        SaveSteinerPointsTxt = new QPushButton(SteinerPoints);
        SaveSteinerPointsTxt->setObjectName(QStringLiteral("SaveSteinerPointsTxt"));
        sizePolicy1.setHeightForWidth(SaveSteinerPointsTxt->sizePolicy().hasHeightForWidth());
        SaveSteinerPointsTxt->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(SaveSteinerPointsTxt);

        verticalSpacer_4 = new QSpacerItem(20, 138, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_7);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        tabWidget->addTab(SteinerPoints, QString());
        Edges = new QWidget();
        Edges->setObjectName(QStringLiteral("Edges"));
        horizontalLayout_8 = new QHBoxLayout(Edges);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        EdgesTxt = new QTextBrowser(Edges);
        EdgesTxt->setObjectName(QStringLiteral("EdgesTxt"));

        horizontalLayout_7->addWidget(EdgesTxt);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        EdgesInfo = new QPushButton(Edges);
        EdgesInfo->setObjectName(QStringLiteral("EdgesInfo"));
        sizePolicy1.setHeightForWidth(EdgesInfo->sizePolicy().hasHeightForWidth());
        EdgesInfo->setSizePolicy(sizePolicy1);
        EdgesInfo->setStyleSheet(QStringLiteral("font: 75  10pt \"Webdings\";"));

        verticalLayout_2->addWidget(EdgesInfo);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        SaveEdgesTxt = new QPushButton(Edges);
        SaveEdgesTxt->setObjectName(QStringLiteral("SaveEdgesTxt"));

        verticalLayout_3->addWidget(SaveEdgesTxt);

        verticalSpacer_2 = new QSpacerItem(20, 128, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        tabWidget->addTab(Edges, QString());

        horizontalLayout_3->addWidget(tabWidget);

        SecondWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 554, 21));
        SecondWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SecondWindow->setStatusBar(statusbar);

        retranslateUi(SecondWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "Results", Q_NULLPTR));
        Image->setText(QString());
        VisualInfo->setText(QApplication::translate("SecondWindow", "i", Q_NULLPTR));
        SaveVisual->setText(QApplication::translate("SecondWindow", "Save", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Visual), QApplication::translate("SecondWindow", "Visual", Q_NULLPTR));
        SteinerPointsInfo->setText(QApplication::translate("SecondWindow", "i", Q_NULLPTR));
        SaveSteinerPointsTxt->setText(QApplication::translate("SecondWindow", "Save", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(SteinerPoints), QApplication::translate("SecondWindow", "Steiner Points", Q_NULLPTR));
        EdgesInfo->setText(QApplication::translate("SecondWindow", "i", Q_NULLPTR));
        SaveEdgesTxt->setText(QApplication::translate("SecondWindow", "Save", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Edges), QApplication::translate("SecondWindow", "Edges", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
