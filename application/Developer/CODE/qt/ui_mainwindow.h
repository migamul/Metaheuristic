/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Terminals;
    QPushButton *OpenFileTerminals;
    QLineEdit *PathToTerminalsTxt;
    QPushButton *nInfo;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *k;
    QLineEdit *kInput;
    QPushButton *kInfo;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Repetitions;
    QLineEdit *RepetitionsInput;
    QPushButton *RepetitionsInfo;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *Run;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(548, 390);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Terminals = new QLabel(centralWidget);
        Terminals->setObjectName(QStringLiteral("Terminals"));

        horizontalLayout->addWidget(Terminals);

        OpenFileTerminals = new QPushButton(centralWidget);
        OpenFileTerminals->setObjectName(QStringLiteral("OpenFileTerminals"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OpenFileTerminals->sizePolicy().hasHeightForWidth());
        OpenFileTerminals->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(OpenFileTerminals);

        PathToTerminalsTxt = new QLineEdit(centralWidget);
        PathToTerminalsTxt->setObjectName(QStringLiteral("PathToTerminalsTxt"));

        horizontalLayout->addWidget(PathToTerminalsTxt);

        nInfo = new QPushButton(centralWidget);
        nInfo->setObjectName(QStringLiteral("nInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nInfo->sizePolicy().hasHeightForWidth());
        nInfo->setSizePolicy(sizePolicy2);
        nInfo->setStyleSheet(QStringLiteral("font: 75  10pt \"Webdings\";"));

        horizontalLayout->addWidget(nInfo);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        k = new QLabel(centralWidget);
        k->setObjectName(QStringLiteral("k"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(k->sizePolicy().hasHeightForWidth());
        k->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(k);

        kInput = new QLineEdit(centralWidget);
        kInput->setObjectName(QStringLiteral("kInput"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(kInput->sizePolicy().hasHeightForWidth());
        kInput->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(kInput);

        kInfo = new QPushButton(centralWidget);
        kInfo->setObjectName(QStringLiteral("kInfo"));
        sizePolicy2.setHeightForWidth(kInfo->sizePolicy().hasHeightForWidth());
        kInfo->setSizePolicy(sizePolicy2);
        kInfo->setStyleSheet(QStringLiteral("font: 75  10pt \"Webdings\";"));

        horizontalLayout_2->addWidget(kInfo);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Repetitions = new QLabel(centralWidget);
        Repetitions->setObjectName(QStringLiteral("Repetitions"));

        horizontalLayout_3->addWidget(Repetitions);

        RepetitionsInput = new QLineEdit(centralWidget);
        RepetitionsInput->setObjectName(QStringLiteral("RepetitionsInput"));

        horizontalLayout_3->addWidget(RepetitionsInput);

        RepetitionsInfo = new QPushButton(centralWidget);
        RepetitionsInfo->setObjectName(QStringLiteral("RepetitionsInfo"));
        sizePolicy2.setHeightForWidth(RepetitionsInfo->sizePolicy().hasHeightForWidth());
        RepetitionsInfo->setSizePolicy(sizePolicy2);
        RepetitionsInfo->setStyleSheet(QStringLiteral("font: 75  10pt \"Webdings\";"));

        horizontalLayout_3->addWidget(RepetitionsInfo);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        Run = new QPushButton(centralWidget);
        Run->setObjectName(QStringLiteral("Run"));

        horizontalLayout_4->addWidget(Run);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 548, 21));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        Terminals->setBuddy(OpenFileTerminals);
        k->setBuddy(kInput);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(kInput, Run);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "k-Bottleneck-Steiner-Problem", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        Terminals->setText(QApplication::translate("MainWindow", "  Terminals (n) = ", Q_NULLPTR));
        OpenFileTerminals->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
        nInfo->setText(QApplication::translate("MainWindow", "i", Q_NULLPTR));
        k->setText(QApplication::translate("MainWindow", "  k = ", Q_NULLPTR));
        kInfo->setText(QApplication::translate("MainWindow", "i", Q_NULLPTR));
        Repetitions->setText(QApplication::translate("MainWindow", "  Repetitions = ", Q_NULLPTR));
        RepetitionsInfo->setText(QApplication::translate("MainWindow", "i", Q_NULLPTR));
        Run->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
