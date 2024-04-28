/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExploreLondon/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "openLocationPopUp",
    "",
    "Location",
    "location",
    "openQuizPopUp",
    "QuestionsAnswers",
    "quizContent",
    "openInstructions",
    "openBibliography",
    "openCredits",
    "closeQuiz",
    "enableBadgeIcon",
    "BadgeType",
    "type",
    "disableQuizButtonAfterPass",
    "quizName",
    "openCelebrationScreen"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[14];
    char stringdata6[17];
    char stringdata7[12];
    char stringdata8[17];
    char stringdata9[17];
    char stringdata10[12];
    char stringdata11[10];
    char stringdata12[16];
    char stringdata13[10];
    char stringdata14[5];
    char stringdata15[27];
    char stringdata16[9];
    char stringdata17[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "openLocationPopUp"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 8),  // "Location"
        QT_MOC_LITERAL(39, 8),  // "location"
        QT_MOC_LITERAL(48, 13),  // "openQuizPopUp"
        QT_MOC_LITERAL(62, 16),  // "QuestionsAnswers"
        QT_MOC_LITERAL(79, 11),  // "quizContent"
        QT_MOC_LITERAL(91, 16),  // "openInstructions"
        QT_MOC_LITERAL(108, 16),  // "openBibliography"
        QT_MOC_LITERAL(125, 11),  // "openCredits"
        QT_MOC_LITERAL(137, 9),  // "closeQuiz"
        QT_MOC_LITERAL(147, 15),  // "enableBadgeIcon"
        QT_MOC_LITERAL(163, 9),  // "BadgeType"
        QT_MOC_LITERAL(173, 4),  // "type"
        QT_MOC_LITERAL(178, 26),  // "disableQuizButtonAfterPass"
        QT_MOC_LITERAL(205, 8),  // "quizName"
        QT_MOC_LITERAL(214, 21)   // "openCelebrationScreen"
    },
    "MainWindow",
    "openLocationPopUp",
    "",
    "Location",
    "location",
    "openQuizPopUp",
    "QuestionsAnswers",
    "quizContent",
    "openInstructions",
    "openBibliography",
    "openCredits",
    "closeQuiz",
    "enableBadgeIcon",
    "BadgeType",
    "type",
    "disableQuizButtonAfterPass",
    "quizName",
    "openCelebrationScreen"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       5,    1,   71,    2, 0x0a,    3 /* Public */,
       8,    0,   74,    2, 0x0a,    5 /* Public */,
       9,    0,   75,    2, 0x0a,    6 /* Public */,
      10,    0,   76,    2, 0x0a,    7 /* Public */,
      11,    0,   77,    2, 0x0a,    8 /* Public */,
      12,    1,   78,    2, 0x0a,    9 /* Public */,
      15,    1,   81,    2, 0x0a,   11 /* Public */,
      17,    0,   84,    2, 0x0a,   13 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'openLocationPopUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Location &, std::false_type>,
        // method 'openQuizPopUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QuestionsAnswers &, std::false_type>,
        // method 'openInstructions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openBibliography'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openCredits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeQuiz'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableBadgeIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        // method 'disableQuizButtonAfterPass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'openCelebrationScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openLocationPopUp((*reinterpret_cast< std::add_pointer_t<Location>>(_a[1]))); break;
        case 1: _t->openQuizPopUp((*reinterpret_cast< std::add_pointer_t<QuestionsAnswers>>(_a[1]))); break;
        case 2: _t->openInstructions(); break;
        case 3: _t->openBibliography(); break;
        case 4: _t->openCredits(); break;
        case 5: _t->closeQuiz(); break;
        case 6: _t->enableBadgeIcon((*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[1]))); break;
        case 7: _t->disableQuizButtonAfterPass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->openCelebrationScreen(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
