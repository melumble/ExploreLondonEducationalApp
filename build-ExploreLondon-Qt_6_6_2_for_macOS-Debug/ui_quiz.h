/********************************************************************************
** Form generated from reading UI file 'quiz.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZ_H
#define UI_QUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quiz
{
public:
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *themeLabel;
    QLabel *instructionsLabel;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget3;
    QVBoxLayout *SelectAllLayout;
    QLabel *selectAllLabel;
    QLabel *selectAllQuestionInstruc;
    QCheckBox *firstSelectBox;
    QCheckBox *secondSelectBox;
    QCheckBox *thirdSelectBox;
    QCheckBox *fourthSelectBox;
    QWidget *layoutWidget4;
    QVBoxLayout *TrueOrFalseLayout;
    QLabel *trueFalseLabel;
    QLabel *trueFalseQuestionInstruc;
    QRadioButton *trueButton;
    QRadioButton *falseButton;
    QWidget *layoutWidget5;
    QVBoxLayout *MultipleChoiceLayout;
    QLabel *multChoiceLabel;
    QLabel *multChoiceQuestionInstruc;
    QRadioButton *firstMultButton;
    QRadioButton *secondMultButton;
    QRadioButton *thirdMultButton;
    QRadioButton *fourthMultButton;
    QLabel *label;

    void setupUi(QDialog *Quiz)
    {
        if (Quiz->objectName().isEmpty())
            Quiz->setObjectName("Quiz");
        Quiz->resize(1266, 828);
        Quiz->setSizeGripEnabled(false);
        layoutWidget1 = new QWidget(Quiz);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(410, 40, 491, 101));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        themeLabel = new QLabel(layoutWidget1);
        themeLabel->setObjectName("themeLabel");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        themeLabel->setFont(font);
        themeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(themeLabel);

        instructionsLabel = new QLabel(layoutWidget1);
        instructionsLabel->setObjectName("instructionsLabel");
        instructionsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(instructionsLabel);

        line_3 = new QFrame(layoutWidget1);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        line_4 = new QFrame(layoutWidget1);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        layoutWidget2 = new QWidget(Quiz);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(530, 720, 231, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        submitButton = new QPushButton(layoutWidget2);
        submitButton->setObjectName("submitButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        submitButton->setFont(font1);

        horizontalLayout->addWidget(submitButton);

        cancelButton = new QPushButton(layoutWidget2);
        cancelButton->setObjectName("cancelButton");
        QFont font2;
        font2.setPointSize(12);
        cancelButton->setFont(font2);

        horizontalLayout->addWidget(cancelButton);

        line = new QFrame(Quiz);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 290, 1271, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Quiz);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 490, 1271, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget3 = new QWidget(Quiz);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(140, 300, 1001, 181));
        SelectAllLayout = new QVBoxLayout(layoutWidget3);
        SelectAllLayout->setObjectName("SelectAllLayout");
        SelectAllLayout->setContentsMargins(0, 0, 0, 0);
        selectAllLabel = new QLabel(layoutWidget3);
        selectAllLabel->setObjectName("selectAllLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectAllLabel->sizePolicy().hasHeightForWidth());
        selectAllLabel->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(true);
        selectAllLabel->setFont(font3);
        selectAllLabel->setAutoFillBackground(false);
        selectAllLabel->setAlignment(Qt::AlignCenter);
        selectAllLabel->setWordWrap(true);

        SelectAllLayout->addWidget(selectAllLabel);

        selectAllQuestionInstruc = new QLabel(layoutWidget3);
        selectAllQuestionInstruc->setObjectName("selectAllQuestionInstruc");

        SelectAllLayout->addWidget(selectAllQuestionInstruc);

        firstSelectBox = new QCheckBox(layoutWidget3);
        firstSelectBox->setObjectName("firstSelectBox");

        SelectAllLayout->addWidget(firstSelectBox);

        secondSelectBox = new QCheckBox(layoutWidget3);
        secondSelectBox->setObjectName("secondSelectBox");

        SelectAllLayout->addWidget(secondSelectBox);

        thirdSelectBox = new QCheckBox(layoutWidget3);
        thirdSelectBox->setObjectName("thirdSelectBox");

        SelectAllLayout->addWidget(thirdSelectBox);

        fourthSelectBox = new QCheckBox(layoutWidget3);
        fourthSelectBox->setObjectName("fourthSelectBox");

        SelectAllLayout->addWidget(fourthSelectBox);

        layoutWidget4 = new QWidget(Quiz);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(140, 510, 1001, 115));
        TrueOrFalseLayout = new QVBoxLayout(layoutWidget4);
        TrueOrFalseLayout->setObjectName("TrueOrFalseLayout");
        TrueOrFalseLayout->setContentsMargins(0, 0, 0, 0);
        trueFalseLabel = new QLabel(layoutWidget4);
        trueFalseLabel->setObjectName("trueFalseLabel");
        sizePolicy.setHeightForWidth(trueFalseLabel->sizePolicy().hasHeightForWidth());
        trueFalseLabel->setSizePolicy(sizePolicy);
        trueFalseLabel->setFont(font3);
        trueFalseLabel->setAlignment(Qt::AlignCenter);
        trueFalseLabel->setWordWrap(true);

        TrueOrFalseLayout->addWidget(trueFalseLabel);

        trueFalseQuestionInstruc = new QLabel(layoutWidget4);
        trueFalseQuestionInstruc->setObjectName("trueFalseQuestionInstruc");

        TrueOrFalseLayout->addWidget(trueFalseQuestionInstruc);

        trueButton = new QRadioButton(layoutWidget4);
        trueButton->setObjectName("trueButton");

        TrueOrFalseLayout->addWidget(trueButton);

        falseButton = new QRadioButton(layoutWidget4);
        falseButton->setObjectName("falseButton");

        TrueOrFalseLayout->addWidget(falseButton);

        layoutWidget5 = new QWidget(Quiz);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(140, 150, 1001, 131));
        MultipleChoiceLayout = new QVBoxLayout(layoutWidget5);
        MultipleChoiceLayout->setObjectName("MultipleChoiceLayout");
        MultipleChoiceLayout->setContentsMargins(0, 0, 0, 0);
        multChoiceLabel = new QLabel(layoutWidget5);
        multChoiceLabel->setObjectName("multChoiceLabel");
        multChoiceLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(multChoiceLabel->sizePolicy().hasHeightForWidth());
        multChoiceLabel->setSizePolicy(sizePolicy1);
        multChoiceLabel->setFont(font3);
        multChoiceLabel->setLayoutDirection(Qt::LeftToRight);
        multChoiceLabel->setFrameShape(QFrame::NoFrame);
        multChoiceLabel->setAlignment(Qt::AlignCenter);
        multChoiceLabel->setWordWrap(true);

        MultipleChoiceLayout->addWidget(multChoiceLabel);

        multChoiceQuestionInstruc = new QLabel(layoutWidget5);
        multChoiceQuestionInstruc->setObjectName("multChoiceQuestionInstruc");

        MultipleChoiceLayout->addWidget(multChoiceQuestionInstruc);

        firstMultButton = new QRadioButton(layoutWidget5);
        firstMultButton->setObjectName("firstMultButton");
        firstMultButton->setEnabled(true);
        sizePolicy.setHeightForWidth(firstMultButton->sizePolicy().hasHeightForWidth());
        firstMultButton->setSizePolicy(sizePolicy);
        firstMultButton->setSizeIncrement(QSize(0, 0));
        firstMultButton->setAutoFillBackground(false);

        MultipleChoiceLayout->addWidget(firstMultButton);

        secondMultButton = new QRadioButton(layoutWidget5);
        secondMultButton->setObjectName("secondMultButton");
        sizePolicy.setHeightForWidth(secondMultButton->sizePolicy().hasHeightForWidth());
        secondMultButton->setSizePolicy(sizePolicy);
        secondMultButton->setSizeIncrement(QSize(50, 50));

        MultipleChoiceLayout->addWidget(secondMultButton);

        thirdMultButton = new QRadioButton(layoutWidget5);
        thirdMultButton->setObjectName("thirdMultButton");
        sizePolicy.setHeightForWidth(thirdMultButton->sizePolicy().hasHeightForWidth());
        thirdMultButton->setSizePolicy(sizePolicy);
        thirdMultButton->setSizeIncrement(QSize(50, 50));

        MultipleChoiceLayout->addWidget(thirdMultButton);

        fourthMultButton = new QRadioButton(layoutWidget5);
        fourthMultButton->setObjectName("fourthMultButton");
        sizePolicy.setHeightForWidth(fourthMultButton->sizePolicy().hasHeightForWidth());
        fourthMultButton->setSizePolicy(sizePolicy);

        MultipleChoiceLayout->addWidget(fourthMultButton);

        label = new QLabel(Quiz);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 690, 841, 91));
        QFont font4;
        font4.setPointSize(28);
        font4.setBold(true);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Quiz);

        QMetaObject::connectSlotsByName(Quiz);
    } // setupUi

    void retranslateUi(QDialog *Quiz)
    {
        Quiz->setWindowTitle(QCoreApplication::translate("Quiz", "Dialog", nullptr));
        themeLabel->setText(QCoreApplication::translate("Quiz", "Theme", nullptr));
        instructionsLabel->setText(QCoreApplication::translate("Quiz", "Answer the following questions, then click submit.", nullptr));
        submitButton->setText(QCoreApplication::translate("Quiz", "Submit", nullptr));
        cancelButton->setText(QCoreApplication::translate("Quiz", "Cancel", nullptr));
        selectAllLabel->setText(QCoreApplication::translate("Quiz", "Select All Question goes here", nullptr));
        selectAllQuestionInstruc->setText(QCoreApplication::translate("Quiz", "Select all that apply", nullptr));
        firstSelectBox->setText(QCoreApplication::translate("Quiz", "first option", nullptr));
        secondSelectBox->setText(QCoreApplication::translate("Quiz", "second option", nullptr));
        thirdSelectBox->setText(QCoreApplication::translate("Quiz", "third option", nullptr));
        fourthSelectBox->setText(QCoreApplication::translate("Quiz", "last option", nullptr));
        trueFalseLabel->setText(QCoreApplication::translate("Quiz", "True or False Question goes here", nullptr));
        trueFalseQuestionInstruc->setText(QCoreApplication::translate("Quiz", "Select the correct answer", nullptr));
        trueButton->setText(QCoreApplication::translate("Quiz", "True Button", nullptr));
        falseButton->setText(QCoreApplication::translate("Quiz", "False Button", nullptr));
        multChoiceLabel->setText(QCoreApplication::translate("Quiz", "Multiple Choice Question goes here", nullptr));
        multChoiceQuestionInstruc->setText(QCoreApplication::translate("Quiz", "Select the correct answer", nullptr));
        firstMultButton->setText(QCoreApplication::translate("Quiz", "first option", nullptr));
        secondMultButton->setText(QCoreApplication::translate("Quiz", "second option", nullptr));
        thirdMultButton->setText(QCoreApplication::translate("Quiz", "third option", nullptr));
        fourthMultButton->setText(QCoreApplication::translate("Quiz", "fourth option", nullptr));
        label->setText(QCoreApplication::translate("Quiz", "Quiz Failed! Try Again!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quiz: public Ui_Quiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZ_H
