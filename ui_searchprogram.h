/********************************************************************************
** Form generated from reading UI file 'searchprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROGRAM_H
#define UI_SEARCHPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchProgram
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *searchProgram)
    {
        if (searchProgram->objectName().isEmpty())
            searchProgram->setObjectName(QStringLiteral("searchProgram"));
        searchProgram->resize(398, 300);
        verticalLayout = new QVBoxLayout(searchProgram);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(searchProgram);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(searchProgram);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(searchProgram);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        goButton = new QPushButton(searchProgram);
        goButton->setObjectName(QStringLiteral("goButton"));

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(searchProgram);

        QMetaObject::connectSlotsByName(searchProgram);
    } // setupUi

    void retranslateUi(QWidget *searchProgram)
    {
        searchProgram->setWindowTitle(QApplication::translate("searchProgram", "searchProgram", 0));
        label->setText(QApplication::translate("searchProgram", "Search For", 0));
        goButton->setText(QApplication::translate("searchProgram", "Go!", 0));
    } // retranslateUi

};

namespace Ui {
    class searchProgram: public Ui_searchProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROGRAM_H
