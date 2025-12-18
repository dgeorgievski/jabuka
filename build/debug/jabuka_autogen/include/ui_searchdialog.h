/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *asRegex;
    QCheckBox *caseSensitive;
    QCheckBox *wholeWord;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *search;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(236, 234);
        groupBox = new QGroupBox(SearchDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 60, 132, 104));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        asRegex = new QCheckBox(groupBox);
        asRegex->setObjectName("asRegex");

        verticalLayout->addWidget(asRegex);

        caseSensitive = new QCheckBox(groupBox);
        caseSensitive->setObjectName("caseSensitive");

        verticalLayout->addWidget(caseSensitive);

        wholeWord = new QCheckBox(groupBox);
        wholeWord->setObjectName("wholeWord");

        verticalLayout->addWidget(wholeWord);

        widget = new QWidget(SearchDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 180, 166, 32));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        widget1 = new QWidget(SearchDialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 20, 177, 23));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        search = new QLineEdit(widget1);
        search->setObjectName("search");

        horizontalLayout->addWidget(search);


        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SearchDialog", "Options", nullptr));
        asRegex->setText(QCoreApplication::translate("SearchDialog", "As Regex", nullptr));
        caseSensitive->setText(QCoreApplication::translate("SearchDialog", "Case Sensitive", nullptr));
        wholeWord->setText(QCoreApplication::translate("SearchDialog", "Whole Word", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SearchDialog", "Close", nullptr));
        pushButton->setText(QCoreApplication::translate("SearchDialog", "Search", nullptr));
        label->setText(QCoreApplication::translate("SearchDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
