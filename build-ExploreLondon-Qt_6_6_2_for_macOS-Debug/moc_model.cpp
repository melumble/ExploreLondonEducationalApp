/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExploreLondon/model.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModelENDCLASS = QtMocHelpers::stringData(
    "Model",
    "updateViewPopup",
    "",
    "Location",
    "location",
    "UpdateViewQuizPopup",
    "QuestionsAnswers",
    "quizInfo",
    "quizResults",
    "passed",
    "BadgeType",
    "type",
    "enableBadgeIcon",
    "addBadgeToView",
    "b2Body*",
    "phys",
    "icon",
    "removeBadgeFromView",
    "redrawMap",
    "disableQuizButton",
    "quizName",
    "allBadgesUnlocked",
    "checkQuizAnswers",
    "userAnswers",
    "unlockBadge",
    "quizPassed",
    "toggleBridgeBadgeRequested",
    "toggleArtCultureBadgeRequested",
    "toggleCrimesBadgeRequested",
    "toggleGovernmentBadgeRequested",
    "toggleReligionBadgeRequested",
    "toggleRoyalFamilyBadgeRequested",
    "updatePhysics"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModelENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[6];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[20];
    char stringdata6[17];
    char stringdata7[9];
    char stringdata8[12];
    char stringdata9[7];
    char stringdata10[10];
    char stringdata11[5];
    char stringdata12[16];
    char stringdata13[15];
    char stringdata14[8];
    char stringdata15[5];
    char stringdata16[5];
    char stringdata17[20];
    char stringdata18[10];
    char stringdata19[18];
    char stringdata20[9];
    char stringdata21[18];
    char stringdata22[17];
    char stringdata23[12];
    char stringdata24[12];
    char stringdata25[11];
    char stringdata26[27];
    char stringdata27[31];
    char stringdata28[27];
    char stringdata29[31];
    char stringdata30[29];
    char stringdata31[32];
    char stringdata32[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModelENDCLASS_t qt_meta_stringdata_CLASSModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Model"
        QT_MOC_LITERAL(6, 15),  // "updateViewPopup"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 8),  // "Location"
        QT_MOC_LITERAL(32, 8),  // "location"
        QT_MOC_LITERAL(41, 19),  // "UpdateViewQuizPopup"
        QT_MOC_LITERAL(61, 16),  // "QuestionsAnswers"
        QT_MOC_LITERAL(78, 8),  // "quizInfo"
        QT_MOC_LITERAL(87, 11),  // "quizResults"
        QT_MOC_LITERAL(99, 6),  // "passed"
        QT_MOC_LITERAL(106, 9),  // "BadgeType"
        QT_MOC_LITERAL(116, 4),  // "type"
        QT_MOC_LITERAL(121, 15),  // "enableBadgeIcon"
        QT_MOC_LITERAL(137, 14),  // "addBadgeToView"
        QT_MOC_LITERAL(152, 7),  // "b2Body*"
        QT_MOC_LITERAL(160, 4),  // "phys"
        QT_MOC_LITERAL(165, 4),  // "icon"
        QT_MOC_LITERAL(170, 19),  // "removeBadgeFromView"
        QT_MOC_LITERAL(190, 9),  // "redrawMap"
        QT_MOC_LITERAL(200, 17),  // "disableQuizButton"
        QT_MOC_LITERAL(218, 8),  // "quizName"
        QT_MOC_LITERAL(227, 17),  // "allBadgesUnlocked"
        QT_MOC_LITERAL(245, 16),  // "checkQuizAnswers"
        QT_MOC_LITERAL(262, 11),  // "userAnswers"
        QT_MOC_LITERAL(274, 11),  // "unlockBadge"
        QT_MOC_LITERAL(286, 10),  // "quizPassed"
        QT_MOC_LITERAL(297, 26),  // "toggleBridgeBadgeRequested"
        QT_MOC_LITERAL(324, 30),  // "toggleArtCultureBadgeRequested"
        QT_MOC_LITERAL(355, 26),  // "toggleCrimesBadgeRequested"
        QT_MOC_LITERAL(382, 30),  // "toggleGovernmentBadgeRequested"
        QT_MOC_LITERAL(413, 28),  // "toggleReligionBadgeRequested"
        QT_MOC_LITERAL(442, 31),  // "toggleRoyalFamilyBadgeRequested"
        QT_MOC_LITERAL(474, 13)   // "updatePhysics"
    },
    "Model",
    "updateViewPopup",
    "",
    "Location",
    "location",
    "UpdateViewQuizPopup",
    "QuestionsAnswers",
    "quizInfo",
    "quizResults",
    "passed",
    "BadgeType",
    "type",
    "enableBadgeIcon",
    "addBadgeToView",
    "b2Body*",
    "phys",
    "icon",
    "removeBadgeFromView",
    "redrawMap",
    "disableQuizButton",
    "quizName",
    "allBadgesUnlocked",
    "checkQuizAnswers",
    "userAnswers",
    "unlockBadge",
    "quizPassed",
    "toggleBridgeBadgeRequested",
    "toggleArtCultureBadgeRequested",
    "toggleCrimesBadgeRequested",
    "toggleGovernmentBadgeRequested",
    "toggleReligionBadgeRequested",
    "toggleRoyalFamilyBadgeRequested",
    "updatePhysics"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       5,    1,  125,    2, 0x06,    3 /* Public */,
       8,    2,  128,    2, 0x06,    5 /* Public */,
      12,    1,  133,    2, 0x06,    8 /* Public */,
      13,    3,  136,    2, 0x06,   10 /* Public */,
      17,    1,  143,    2, 0x06,   14 /* Public */,
      18,    0,  146,    2, 0x06,   16 /* Public */,
      19,    1,  147,    2, 0x06,   17 /* Public */,
      21,    0,  150,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    1,  151,    2, 0x0a,   20 /* Public */,
      24,    2,  154,    2, 0x0a,   22 /* Public */,
      26,    0,  159,    2, 0x0a,   25 /* Public */,
      27,    0,  160,    2, 0x0a,   26 /* Public */,
      28,    0,  161,    2, 0x0a,   27 /* Public */,
      29,    0,  162,    2, 0x0a,   28 /* Public */,
      30,    0,  163,    2, 0x0a,   29 /* Public */,
      31,    0,  164,    2, 0x0a,   30 /* Public */,
      32,    0,  165,    2, 0x0a,   31 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 14, QMetaType::QIcon,   11,   15,   16,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   23,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,   25,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Model::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Model, std::true_type>,
        // method 'updateViewPopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Location &, std::false_type>,
        // method 'UpdateViewQuizPopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QuestionsAnswers, std::false_type>,
        // method 'quizResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        // method 'enableBadgeIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        // method 'addBadgeToView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        QtPrivate::TypeAndForceComplete<b2Body *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIcon, std::false_type>,
        // method 'removeBadgeFromView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        // method 'redrawMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableQuizButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'allBadgesUnlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkQuizAnswers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'unlockBadge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        // method 'toggleBridgeBadgeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleArtCultureBadgeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleCrimesBadgeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleGovernmentBadgeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleReligionBadgeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleRoyalFamilyBadgeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updatePhysics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateViewPopup((*reinterpret_cast< std::add_pointer_t<Location>>(_a[1]))); break;
        case 1: _t->UpdateViewQuizPopup((*reinterpret_cast< std::add_pointer_t<QuestionsAnswers>>(_a[1]))); break;
        case 2: _t->quizResults((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[2]))); break;
        case 3: _t->enableBadgeIcon((*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[1]))); break;
        case 4: _t->addBadgeToView((*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<b2Body*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[3]))); break;
        case 5: _t->removeBadgeFromView((*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[1]))); break;
        case 6: _t->redrawMap(); break;
        case 7: _t->disableQuizButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->allBadgesUnlocked(); break;
        case 9: _t->checkQuizAnswers((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 10: _t->unlockBadge((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[2]))); break;
        case 11: _t->toggleBridgeBadgeRequested(); break;
        case 12: _t->toggleArtCultureBadgeRequested(); break;
        case 13: _t->toggleCrimesBadgeRequested(); break;
        case 14: _t->toggleGovernmentBadgeRequested(); break;
        case 15: _t->toggleReligionBadgeRequested(); break;
        case 16: _t->toggleRoyalFamilyBadgeRequested(); break;
        case 17: _t->updatePhysics(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(const Location & );
            if (_t _q_method = &Model::updateViewPopup; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(QuestionsAnswers );
            if (_t _q_method = &Model::UpdateViewQuizPopup; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)(bool , BadgeType );
            if (_t _q_method = &Model::quizResults; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Model::*)(BadgeType );
            if (_t _q_method = &Model::enableBadgeIcon; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Model::*)(BadgeType , b2Body * , QIcon );
            if (_t _q_method = &Model::addBadgeToView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Model::*)(BadgeType );
            if (_t _q_method = &Model::removeBadgeFromView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (_t _q_method = &Model::redrawMap; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString );
            if (_t _q_method = &Model::disableQuizButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (_t _q_method = &Model::allBadgesUnlocked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Model::updateViewPopup(const Location & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::UpdateViewQuizPopup(QuestionsAnswers _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::quizResults(bool _t1, BadgeType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Model::enableBadgeIcon(BadgeType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Model::addBadgeToView(BadgeType _t1, b2Body * _t2, QIcon _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Model::removeBadgeFromView(BadgeType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Model::redrawMap()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Model::disableQuizButton(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Model::allBadgesUnlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
