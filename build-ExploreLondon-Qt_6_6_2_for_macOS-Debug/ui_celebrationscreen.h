/********************************************************************************
** Form generated from reading UI file 'celebrationscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELEBRATIONSCREEN_H
#define UI_CELEBRATIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CelebrationScreen
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *youWinLabel;

    void setupUi(QDialog *CelebrationScreen)
    {
        if (CelebrationScreen->objectName().isEmpty())
            CelebrationScreen->setObjectName("CelebrationScreen");
        CelebrationScreen->resize(660, 472);
        buttonBox = new QDialogButtonBox(CelebrationScreen);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(310, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        youWinLabel = new QLabel(CelebrationScreen);
        youWinLabel->setObjectName("youWinLabel");
        youWinLabel->setGeometry(QRect(170, 60, 441, 351));

        retranslateUi(CelebrationScreen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CelebrationScreen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CelebrationScreen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CelebrationScreen);
    } // setupUi

    void retranslateUi(QDialog *CelebrationScreen)
    {
        CelebrationScreen->setWindowTitle(QCoreApplication::translate("CelebrationScreen", "You Win", nullptr));
        youWinLabel->setText(QCoreApplication::translate("CelebrationScreen", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CelebrationScreen: public Ui_CelebrationScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELEBRATIONSCREEN_H
