/********************************************************************************
** Form generated from reading UI file 'informationtemplate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONTEMPLATE_H
#define UI_INFORMATIONTEMPLATE_H

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

class Ui_InformationTemplate
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *titleLabel;
    QLabel *themeLabel;
    QLabel *imageLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *descriptionLabel;

    void setupUi(QDialog *InformationTemplate)
    {
        if (InformationTemplate->objectName().isEmpty())
            InformationTemplate->setObjectName("InformationTemplate");
        InformationTemplate->resize(1044, 555);
        InformationTemplate->setModal(true);
        buttonBox = new QDialogButtonBox(InformationTemplate);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(960, 510, 71, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        titleLabel = new QLabel(InformationTemplate);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(20, 50, 781, 31));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        titleLabel->setFont(font);
        themeLabel = new QLabel(InformationTemplate);
        themeLabel->setObjectName("themeLabel");
        themeLabel->setGeometry(QRect(20, 20, 641, 21));
        QFont font1;
        font1.setItalic(true);
        themeLabel->setFont(font1);
        imageLabel = new QLabel(InformationTemplate);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(510, 60, 521, 431));
        imageLabel->setWordWrap(true);
        scrollArea = new QScrollArea(InformationTemplate);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(27, 85, 461, 421));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 461, 421));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        descriptionLabel = new QLabel(scrollAreaWidgetContents);
        descriptionLabel->setObjectName("descriptionLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy);
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(true);

        gridLayout->addWidget(descriptionLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(InformationTemplate);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, InformationTemplate, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, InformationTemplate, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(InformationTemplate);
    } // setupUi

    void retranslateUi(QDialog *InformationTemplate)
    {
        InformationTemplate->setWindowTitle(QCoreApplication::translate("InformationTemplate", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("InformationTemplate", "Title Goes Here", nullptr));
        themeLabel->setText(QCoreApplication::translate("InformationTemplate", "Theme", nullptr));
        imageLabel->setText(QCoreApplication::translate("InformationTemplate", "Image goes here. Make sure size is correct for your image", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("InformationTemplate", "Description goes here. Make sure wrap around is on. blah blah blah. xxxxxxxxxxxx xxxxxxxxxxxxx xxxxxxxxxxx xxxxxx xxxxxxxxxxxxxxxxx xxxxxx xxxxxxxxxxxx", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InformationTemplate: public Ui_InformationTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONTEMPLATE_H
