/********************************************************************************
** Form generated from reading UI file 'bibliographydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOGRAPHYDIALOG_H
#define UI_BIBLIOGRAPHYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bibliography
{
public:
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QLabel *bibliographyLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Bibliography)
    {
        if (Bibliography->objectName().isEmpty())
            Bibliography->setObjectName("Bibliography");
        Bibliography->resize(1000, 600);
        Bibliography->setModal(true);
        gridLayout_2 = new QGridLayout(Bibliography);
        gridLayout_2->setObjectName("gridLayout_2");
        scrollArea = new QScrollArea(Bibliography);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 976, 536));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setObjectName("gridLayout");
        bibliographyLabel = new QLabel(scrollAreaWidgetContents_2);
        bibliographyLabel->setObjectName("bibliographyLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bibliographyLabel->sizePolicy().hasHeightForWidth());
        bibliographyLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        bibliographyLabel->setFont(font);
        bibliographyLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(bibliographyLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Bibliography);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Bibliography);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Bibliography, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Bibliography, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Bibliography);
    } // setupUi

    void retranslateUi(QDialog *Bibliography)
    {
        Bibliography->setWindowTitle(QCoreApplication::translate("Bibliography", "Bibliography", nullptr));
        bibliographyLabel->setText(QCoreApplication::translate("Bibliography", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bibliography: public Ui_Bibliography {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOGRAPHYDIALOG_H
