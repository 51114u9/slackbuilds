/********************************************************************************
** Form generated from reading UI file 'ObservabilityDialog.ui'
**
** Created: Tue Nov 20 11:34:08 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OBSERVABILITYDIALOG_H
#define OBSERVABILITYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_ObservabilityDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabs;
    QWidget *settingsTab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QCheckBox *Today;
    QCheckBox *AcroCos;
    QCheckBox *Opposition;
    QCheckBox *Goods;
    QCheckBox *FullMoon;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *Red;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *Green;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *Blue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *fontSize;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *AltiText;
    QSlider *SunAltitude;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *ObservabilityDialog)
    {
        if (ObservabilityDialog->objectName().isEmpty())
            ObservabilityDialog->setObjectName(QString::fromUtf8("ObservabilityDialog"));
        ObservabilityDialog->resize(530, 560);
        verticalLayout_2 = new QVBoxLayout(ObservabilityDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TitleBar = new BarFrame(ObservabilityDialog);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(530, 25));
        TitleBar->setMaximumSize(QSize(530, 25));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        tabs = new QTabWidget(ObservabilityDialog);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QString::fromUtf8("settingsTab"));
        gridLayout = new QGridLayout(settingsTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(settingsTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        verticalLayout_4->addWidget(label_7);

        Today = new QCheckBox(settingsTab);
        Today->setObjectName(QString::fromUtf8("Today"));

        verticalLayout_4->addWidget(Today);

        AcroCos = new QCheckBox(settingsTab);
        AcroCos->setObjectName(QString::fromUtf8("AcroCos"));

        verticalLayout_4->addWidget(AcroCos);

        Opposition = new QCheckBox(settingsTab);
        Opposition->setObjectName(QString::fromUtf8("Opposition"));

        verticalLayout_4->addWidget(Opposition);

        Goods = new QCheckBox(settingsTab);
        Goods->setObjectName(QString::fromUtf8("Goods"));

        verticalLayout_4->addWidget(Goods);

        FullMoon = new QCheckBox(settingsTab);
        FullMoon->setObjectName(QString::fromUtf8("FullMoon"));

        verticalLayout_4->addWidget(FullMoon);


        gridLayout->addLayout(verticalLayout_4, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        restoreDefaultsButton = new QPushButton(settingsTab);
        restoreDefaultsButton->setObjectName(QString::fromUtf8("restoreDefaultsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(settingsTab);
        saveSettingsButton->setObjectName(QString::fromUtf8("saveSettingsButton"));
        sizePolicy1.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(saveSettingsButton);


        gridLayout->addLayout(horizontalLayout_7, 10, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(settingsTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(settingsTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label, 0, Qt::AlignRight);

        Red = new QSlider(settingsTab);
        Red->setObjectName(QString::fromUtf8("Red"));
        Red->setMaximumSize(QSize(508, 19));
        Red->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(Red, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(settingsTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignRight);

        Green = new QSlider(settingsTab);
        Green->setObjectName(QString::fromUtf8("Green"));
        Green->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(Green, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(settingsTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3, 0, Qt::AlignRight);

        Blue = new QSlider(settingsTab);
        Blue->setObjectName(QString::fromUtf8("Blue"));
        Blue->setMaximum(99);
        Blue->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(Blue, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(settingsTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4, 0, Qt::AlignRight);

        fontSize = new QSlider(settingsTab);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        fontSize->setMinimum(5);
        fontSize->setMaximum(30);
        fontSize->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(fontSize, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(settingsTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        AltiText = new QLabel(settingsTab);
        AltiText->setObjectName(QString::fromUtf8("AltiText"));

        horizontalLayout_5->addWidget(AltiText, 0, Qt::AlignRight);

        SunAltitude = new QSlider(settingsTab);
        SunAltitude->setObjectName(QString::fromUtf8("SunAltitude"));
        SunAltitude->setMaximum(20);
        SunAltitude->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(SunAltitude, 0, Qt::AlignLeft);


        verticalLayout_5->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_5, 6, 0, 1, 1);

        tabs->addTab(settingsTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QString::fromUtf8("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);


        retranslateUi(ObservabilityDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ObservabilityDialog);
    } // setupUi

    void retranslateUi(QWidget *ObservabilityDialog)
    {
        ObservabilityDialog->setWindowTitle(QApplication::translate("ObservabilityDialog", "Observability Configuration", 0, QApplication::UnicodeUTF8));
        stelWindowTitle->setText(QApplication::translate("ObservabilityDialog", "Observability Plug-in Configuration", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        label_7->setText(QApplication::translate("ObservabilityDialog", "Showing Options", 0, QApplication::UnicodeUTF8));
        Today->setText(QApplication::translate("ObservabilityDialog", "Today's ephemeris (rise, set, and transit times)", 0, QApplication::UnicodeUTF8));
        AcroCos->setText(QApplication::translate("ObservabilityDialog", "Dates of Acronychal and Cosmical rise/set", 0, QApplication::UnicodeUTF8));
        Opposition->setText(QApplication::translate("ObservabilityDialog", "Date of largest separation to the Sun", 0, QApplication::UnicodeUTF8));
        Goods->setText(QApplication::translate("ObservabilityDialog", "Nights with the source above horizon", 0, QApplication::UnicodeUTF8));
        FullMoon->setText(QApplication::translate("ObservabilityDialog", "Dates of previous and next Full Moon", 0, QApplication::UnicodeUTF8));
        restoreDefaultsButton->setText(QApplication::translate("ObservabilityDialog", "Restore default settings", 0, QApplication::UnicodeUTF8));
        saveSettingsButton->setText(QApplication::translate("ObservabilityDialog", "Save settings as default", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ObservabilityDialog", "Font color and size", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ObservabilityDialog", "Red", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ObservabilityDialog", "Green", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ObservabilityDialog", "Blue", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ObservabilityDialog", "Font Size", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ObservabilityDialog", "Sun altitude at twilight", 0, QApplication::UnicodeUTF8));
        AltiText->setText(QApplication::translate("ObservabilityDialog", "0 deg.", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("ObservabilityDialog", "Settings", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("ObservabilityDialog", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ObservabilityDialog: public Ui_ObservabilityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OBSERVABILITYDIALOG_H