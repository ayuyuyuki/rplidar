/****************************************************************************
** Meta object code from reading C++ file 'qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/test3/qnode.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_test3__QNode_t {
    QByteArrayData data[14];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_test3__QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_test3__QNode_t qt_meta_stringdata_test3__QNode = {
    {
QT_MOC_LITERAL(0, 0, 12), // "test3::QNode"
QT_MOC_LITERAL(1, 13, 14), // "loggingUpdated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "rosShutdown"
QT_MOC_LITERAL(4, 41, 13), // "loggingstring"
QT_MOC_LITERAL(5, 55, 13), // "loggingCamera"
QT_MOC_LITERAL(6, 69, 18), // "loggingUpdated_sub"
QT_MOC_LITERAL(7, 88, 14), // "loggingCamera2"
QT_MOC_LITERAL(8, 103, 14), // "loggingCamera3"
QT_MOC_LITERAL(9, 118, 14), // "loggingCamera4"
QT_MOC_LITERAL(10, 133, 14), // "loggingCamera5"
QT_MOC_LITERAL(11, 148, 14), // "loggingCamera6"
QT_MOC_LITERAL(12, 163, 14), // "loggingCamera7"
QT_MOC_LITERAL(13, 178, 14) // "loggingCamera8"

    },
    "test3::QNode\0loggingUpdated\0\0rosShutdown\0"
    "loggingstring\0loggingCamera\0"
    "loggingUpdated_sub\0loggingCamera2\0"
    "loggingCamera3\0loggingCamera4\0"
    "loggingCamera5\0loggingCamera6\0"
    "loggingCamera7\0loggingCamera8"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_test3__QNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    0,   81,    2, 0x06 /* Public */,
      10,    0,   82,    2, 0x06 /* Public */,
      11,    0,   83,    2, 0x06 /* Public */,
      12,    0,   84,    2, 0x06 /* Public */,
      13,    0,   85,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void test3::QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNode *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingUpdated(); break;
        case 1: _t->rosShutdown(); break;
        case 2: _t->loggingstring(); break;
        case 3: _t->loggingCamera(); break;
        case 4: _t->loggingUpdated_sub(); break;
        case 5: _t->loggingCamera2(); break;
        case 6: _t->loggingCamera3(); break;
        case 7: _t->loggingCamera4(); break;
        case 8: _t->loggingCamera5(); break;
        case 9: _t->loggingCamera6(); break;
        case 10: _t->loggingCamera7(); break;
        case 11: _t->loggingCamera8(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::rosShutdown)) {
                *result = 1;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingstring)) {
                *result = 2;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera)) {
                *result = 3;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingUpdated_sub)) {
                *result = 4;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera2)) {
                *result = 5;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera3)) {
                *result = 6;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera4)) {
                *result = 7;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera5)) {
                *result = 8;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera6)) {
                *result = 9;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera7)) {
                *result = 10;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::loggingCamera8)) {
                *result = 11;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject test3::QNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_test3__QNode.data,
      qt_meta_data_test3__QNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *test3::QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *test3::QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_test3__QNode.stringdata0))
        return static_cast<void*>(const_cast< QNode*>(this));
    return QThread::qt_metacast(_clname);
}

int test3::QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void test3::QNode::loggingUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void test3::QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void test3::QNode::loggingstring()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void test3::QNode::loggingCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void test3::QNode::loggingUpdated_sub()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void test3::QNode::loggingCamera2()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void test3::QNode::loggingCamera3()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void test3::QNode::loggingCamera4()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void test3::QNode::loggingCamera5()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void test3::QNode::loggingCamera6()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void test3::QNode::loggingCamera7()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void test3::QNode::loggingCamera8()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
