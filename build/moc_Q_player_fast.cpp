/****************************************************************************
** Meta object code from reading C++ file 'Q_player_fast.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ludo/Q_player_fast.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Q_player_fast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Q_player_fast_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Q_player_fast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Q_player_fast_t qt_meta_stringdata_Q_player_fast = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Q_player_fast"
QT_MOC_LITERAL(1, 14, 12), // "select_piece"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "turn_complete"
QT_MOC_LITERAL(4, 42, 10), // "start_turn"
QT_MOC_LITERAL(5, 53, 18), // "positions_and_dice"
QT_MOC_LITERAL(6, 72, 8), // "relative"
QT_MOC_LITERAL(7, 81, 18), // "post_game_analysis"
QT_MOC_LITERAL(8, 100, 16), // "std::vector<int>"
QT_MOC_LITERAL(9, 117, 12) // "relative_pos"

    },
    "Q_player_fast\0select_piece\0\0turn_complete\0"
    "start_turn\0positions_and_dice\0relative\0"
    "post_game_analysis\0std::vector<int>\0"
    "relative_pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Q_player_fast[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void Q_player_fast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_player_fast *_t = static_cast<Q_player_fast *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->select_piece((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->turn_complete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->start_turn((*reinterpret_cast< positions_and_dice(*)>(_a[1]))); break;
        case 3: _t->post_game_analysis((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Q_player_fast::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Q_player_fast::select_piece)) {
                *result = 0;
            }
        }
        {
            typedef void (Q_player_fast::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Q_player_fast::turn_complete)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Q_player_fast::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q_player_fast.data,
      qt_meta_data_Q_player_fast,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Q_player_fast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Q_player_fast::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Q_player_fast.stringdata0))
        return static_cast<void*>(const_cast< Q_player_fast*>(this));
    return QObject::qt_metacast(_clname);
}

int Q_player_fast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Q_player_fast::select_piece(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q_player_fast::turn_complete(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
