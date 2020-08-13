/****************************************************************************
** Meta object code from reading C++ file 'countdown.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Countdown/countdown.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'countdown.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Countdown_t {
    QByteArrayData data[14];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Countdown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Countdown_t qt_meta_stringdata_Countdown = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Countdown"
QT_MOC_LITERAL(1, 10, 16), // "on_PSset_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "on_PSstart_clicked"
QT_MOC_LITERAL(4, 47, 5), // "count"
QT_MOC_LITERAL(5, 53, 18), // "on_PSpause_clicked"
QT_MOC_LITERAL(6, 72, 17), // "on_BDset1_clicked"
QT_MOC_LITERAL(7, 90, 17), // "on_BDset2_clicked"
QT_MOC_LITERAL(8, 108, 6), // "count1"
QT_MOC_LITERAL(9, 115, 6), // "count2"
QT_MOC_LITERAL(10, 122, 19), // "on_BDstart1_clicked"
QT_MOC_LITERAL(11, 142, 19), // "on_BDpause1_clicked"
QT_MOC_LITERAL(12, 162, 19), // "on_BDstart2_clicked"
QT_MOC_LITERAL(13, 182, 19) // "on_BDpause2_clicked"

    },
    "Countdown\0on_PSset_clicked\0\0"
    "on_PSstart_clicked\0count\0on_PSpause_clicked\0"
    "on_BDset1_clicked\0on_BDset2_clicked\0"
    "count1\0count2\0on_BDstart1_clicked\0"
    "on_BDpause1_clicked\0on_BDstart2_clicked\0"
    "on_BDpause2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Countdown[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
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

void Countdown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Countdown *_t = static_cast<Countdown *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PSset_clicked(); break;
        case 1: _t->on_PSstart_clicked(); break;
        case 2: _t->count(); break;
        case 3: _t->on_PSpause_clicked(); break;
        case 4: _t->on_BDset1_clicked(); break;
        case 5: _t->on_BDset2_clicked(); break;
        case 6: _t->count1(); break;
        case 7: _t->count2(); break;
        case 8: _t->on_BDstart1_clicked(); break;
        case 9: _t->on_BDpause1_clicked(); break;
        case 10: _t->on_BDstart2_clicked(); break;
        case 11: _t->on_BDpause2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Countdown::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Countdown.data,
      qt_meta_data_Countdown,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Countdown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Countdown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Countdown.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Countdown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
