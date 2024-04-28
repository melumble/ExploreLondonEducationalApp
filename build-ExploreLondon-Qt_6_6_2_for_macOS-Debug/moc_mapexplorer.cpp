/****************************************************************************
** Meta object code from reading C++ file 'mapexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExploreLondon/mapexplorer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapexplorer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMapExplorerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapExplorerENDCLASS = QtMocHelpers::stringData(
    "MapExplorer",
    "zoomLevelChanged",
    "",
    "newLevel",
    "zoomLevelChangeRequested",
    "addPhysicsBadgeToScene",
    "BadgeType",
    "type",
    "b2Body*",
    "body",
    "icon",
    "removePhysicsBadgeFromScene",
    "redrawBadges"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapExplorerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[25];
    char stringdata5[23];
    char stringdata6[10];
    char stringdata7[5];
    char stringdata8[8];
    char stringdata9[5];
    char stringdata10[5];
    char stringdata11[28];
    char stringdata12[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapExplorerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapExplorerENDCLASS_t qt_meta_stringdata_CLASSMapExplorerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "MapExplorer"
        QT_MOC_LITERAL(12, 16),  // "zoomLevelChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 8),  // "newLevel"
        QT_MOC_LITERAL(39, 24),  // "zoomLevelChangeRequested"
        QT_MOC_LITERAL(64, 22),  // "addPhysicsBadgeToScene"
        QT_MOC_LITERAL(87, 9),  // "BadgeType"
        QT_MOC_LITERAL(97, 4),  // "type"
        QT_MOC_LITERAL(102, 7),  // "b2Body*"
        QT_MOC_LITERAL(110, 4),  // "body"
        QT_MOC_LITERAL(115, 4),  // "icon"
        QT_MOC_LITERAL(120, 27),  // "removePhysicsBadgeFromScene"
        QT_MOC_LITERAL(148, 12)   // "redrawBadges"
    },
    "MapExplorer",
    "zoomLevelChanged",
    "",
    "newLevel",
    "zoomLevelChangeRequested",
    "addPhysicsBadgeToScene",
    "BadgeType",
    "type",
    "b2Body*",
    "body",
    "icon",
    "removePhysicsBadgeFromScene",
    "redrawBadges"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapExplorerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       5,    3,   50,    2, 0x0a,    5 /* Public */,
      11,    1,   57,    2, 0x0a,    9 /* Public */,
      12,    0,   60,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::QIcon,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MapExplorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapExplorerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapExplorerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapExplorerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapExplorer, std::true_type>,
        // method 'zoomLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zoomLevelChangeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addPhysicsBadgeToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        QtPrivate::TypeAndForceComplete<b2Body *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIcon, std::false_type>,
        // method 'removePhysicsBadgeFromScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BadgeType, std::false_type>,
        // method 'redrawBadges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MapExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapExplorer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zoomLevelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->zoomLevelChangeRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->addPhysicsBadgeToScene((*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<b2Body*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[3]))); break;
        case 3: _t->removePhysicsBadgeFromScene((*reinterpret_cast< std::add_pointer_t<BadgeType>>(_a[1]))); break;
        case 4: _t->redrawBadges(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapExplorer::*)(int );
            if (_t _q_method = &MapExplorer::zoomLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MapExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapExplorerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int MapExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MapExplorer::zoomLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
