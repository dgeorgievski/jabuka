/********************************************************************************
** Form generated from reading UI file 'applewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLEWINDOW_H
#define UI_APPLEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppleWindow
{
public:
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionQuit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *editor;
    QMenuBar *menubar;
    QMenu *menuMain;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AppleWindow)
    {
        if (AppleWindow->objectName().isEmpty())
            AppleWindow->setObjectName("AppleWindow");
        AppleWindow->resize(800, 600);
        actionSave = new QAction(AppleWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        actionSave->setIcon(icon);
        actionLoad = new QAction(AppleWindow);
        actionLoad->setObjectName("actionLoad");
        actionQuit = new QAction(AppleWindow);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(AppleWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        editor = new QPlainTextEdit(centralwidget);
        editor->setObjectName("editor");

        horizontalLayout->addWidget(editor);

        AppleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AppleWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        menuMain = new QMenu(menubar);
        menuMain->setObjectName("menuMain");
        menuMain->setSeparatorsCollapsible(true);
        menuMain->setToolTipsVisible(true);
        AppleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AppleWindow);
        statusbar->setObjectName("statusbar");
        AppleWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain->menuAction());
        menuMain->addAction(actionSave);
        menuMain->addAction(actionLoad);
        menuMain->addSeparator();
        menuMain->addAction(actionQuit);

        retranslateUi(AppleWindow);

        QMetaObject::connectSlotsByName(AppleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AppleWindow)
    {
        AppleWindow->setWindowTitle(QCoreApplication::translate("AppleWindow", "Power Editor", nullptr));
        actionSave->setText(QCoreApplication::translate("AppleWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("AppleWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad->setText(QCoreApplication::translate("AppleWindow", "&Load", nullptr));
        actionQuit->setText(QCoreApplication::translate("AppleWindow", "&Quit", nullptr));
        menuMain->setTitle(QCoreApplication::translate("AppleWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppleWindow: public Ui_AppleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLEWINDOW_H
