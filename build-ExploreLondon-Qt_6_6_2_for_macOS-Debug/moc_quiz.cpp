/****************************************************************************
** Meta object code from reading C++ file 'quiz.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExploreLondon/quiz.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quiz.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQuizENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQuizENDCLASS = QtMocHelpers::stringData(
    "Quiz",
    "answersCollected",
    "",
    "userAnswers",
    "closeWindow",
    "setUpInfo",
    "QuestionsAnswers",
    "qAnda",
    "sendUserAnswers",
    "submitCancelClicked",
    "quizGradedUpdateWindow",
    "passed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuizENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[5];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[10];
    char stringdata6[17];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[20];
    char stringdata10[23];
    char stringdata11[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuizENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuizENDCLASS_t qt_meta_stringdata_CLASSQuizENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Quiz"
        QT_MOC_LITERAL(5, 16),  // "answersCollected"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 11),  // "userAnswers"
        QT_MOC_LITERAL(35, 11),  // "closeWindow"
        QT_MOC_LITERAL(47, 9),  // "setUpInfo"
        QT_MOC_LITERAL(57, 16),  // "QuestionsAnswers"
        QT_MOC_LITERAL(74, 5),  // "qAnda"
        QT_MOC_LITERAL(80, 15),  // "sendUserAnswers"
        QT_MOC_LITERAL(96, 19),  // "submitCancelClicked"
        QT_MOC_LITERAL(116, 22),  // "quizGradedUpdateWindow"
        QT_MOC_LITERAL(139, 6)   // "passed"
    },
    "Quiz",
    "answersCollected",
    "",
    "userAnswers",
    "closeWindow",
    "setUpInfo",
    "QuestionsAnswers",
    "qAnda",
    "sendUserAnswers",
    "submitCancelClicked",
    "quizGradedUpdateWindow",
    "passed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuizENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   54,    2, 0x0a,    4 /* Public */,
       8,    0,   57,    2, 0x0a,    6 /* Public */,
       9,    0,   58,    2, 0x0a,    7 /* Public */,
      10,    1,   59,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject Quiz::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuizENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuizENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuizENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Quiz, std::true_type>,
        // method 'answersCollected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'closeWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setUpInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QuestionsAnswers, std::false_type>,
        // method 'sendUserAnswers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'submitCancelClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'quizGradedUpdateWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Quiz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Quiz *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->answersCollected((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 1: _t->closeWindow(); break;
        case 2: _t->setUpInfo((*reinterpret_cast< std::add_pointer_t<QuestionsAnswers>>(_a[1]))); break;
        case 3: _t->sendUserAnswers(); break;
        case 4: _t->submitCancelClicked(); break;
        case 5: _t->quizGradedUpdateWindow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Quiz::*)(QVector<QString> );
            if (_t _q_method = &Quiz::answersCollected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Quiz::*)();
            if (_t _q_method = &Quiz::closeWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Quiz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Quiz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuizENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Quiz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Quiz::answersCollected(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Quiz::closeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
