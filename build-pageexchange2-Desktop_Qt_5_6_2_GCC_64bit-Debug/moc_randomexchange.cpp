/****************************************************************************
** Meta object code from reading C++ file 'randomexchange.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pageexchange2/randomexchange.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'randomexchange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_randomexchange_t {
    QByteArrayData data[9];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_randomexchange_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_randomexchange_t qt_meta_stringdata_randomexchange = {
    {
QT_MOC_LITERAL(0, 0, 14), // "randomexchange"
QT_MOC_LITERAL(1, 15, 8), // "getlist4"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "std::list<int>"
QT_MOC_LITERAL(4, 40, 7), // "getvec4"
QT_MOC_LITERAL(5, 48, 16), // "std::vector<int>"
QT_MOC_LITERAL(6, 65, 9), // "getrannum"
QT_MOC_LITERAL(7, 75, 8), // "restart4"
QT_MOC_LITERAL(8, 84, 6) // "guaqi4"

    },
    "randomexchange\0getlist4\0\0std::list<int>\0"
    "getvec4\0std::vector<int>\0getrannum\0"
    "restart4\0guaqi4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_randomexchange[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void randomexchange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        randomexchange *_t = static_cast<randomexchange *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getlist4((*reinterpret_cast< std::list<int>(*)>(_a[1]))); break;
        case 1: _t->getvec4((*reinterpret_cast< std::vector<int>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->getrannum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->restart4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->guaqi4((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (randomexchange::*_t)(std::list<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&randomexchange::getlist4)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (randomexchange::*_t)(std::vector<int> , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&randomexchange::getvec4)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject randomexchange::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_randomexchange.data,
      qt_meta_data_randomexchange,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *randomexchange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *randomexchange::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_randomexchange.stringdata0))
        return static_cast<void*>(const_cast< randomexchange*>(this));
    return QThread::qt_metacast(_clname);
}

int randomexchange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void randomexchange::getlist4(std::list<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void randomexchange::getvec4(std::vector<int> _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
