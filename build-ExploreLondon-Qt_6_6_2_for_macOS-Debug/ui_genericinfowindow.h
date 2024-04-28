/********************************************************************************
** Form generated from reading UI file 'genericinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERICINFOWINDOW_H
#define UI_GENERICINFOWINDOW_H

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

class Ui_GenericInfoWindow
{
public:
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QLabel *contentLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenericInfoWindow)
    {
        if (GenericInfoWindow->objectName().isEmpty())
            GenericInfoWindow->setObjectName("GenericInfoWindow");
        GenericInfoWindow->resize(1000, 600);
        GenericInfoWindow->setModal(true);
        gridLayout_2 = new QGridLayout(GenericInfoWindow);
        gridLayout_2->setObjectName("gridLayout_2");
        scrollArea = new QScrollArea(GenericInfoWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 976, 536));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setObjectName("gridLayout");
        contentLabel = new QLabel(scrollAreaWidgetContents_2);
        contentLabel->setObjectName("contentLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentLabel->sizePolicy().hasHeightForWidth());
        contentLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        contentLabel->setFont(font);
        contentLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        contentLabel->setWordWrap(true);

        gridLayout->addWidget(contentLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GenericInfoWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(GenericInfoWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GenericInfoWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GenericInfoWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GenericInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *GenericInfoWindow)
    {
        contentLabel->setText(QCoreApplication::translate("GenericInfoWindow", "TextLabel", nullptr));
        (void)GenericInfoWindow;
    } // retranslateUi

};

namespace Ui {
    class GenericInfoWindow: public Ui_GenericInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERICINFOWINDOW_H
