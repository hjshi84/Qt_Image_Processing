/****************************************************************************
** Meta object code from reading C++ file 'qttest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qttest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qttest_t {
    QByteArrayData data[22];
    char stringdata[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_qttest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_qttest_t qt_meta_stringdata_qttest = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 4),
QT_MOC_LITERAL(2, 12, 0),
QT_MOC_LITERAL(3, 13, 23),
QT_MOC_LITERAL(4, 37, 23),
QT_MOC_LITERAL(5, 61, 23),
QT_MOC_LITERAL(6, 85, 21),
QT_MOC_LITERAL(7, 107, 23),
QT_MOC_LITERAL(8, 131, 14),
QT_MOC_LITERAL(9, 146, 7),
QT_MOC_LITERAL(10, 154, 10),
QT_MOC_LITERAL(11, 165, 23),
QT_MOC_LITERAL(12, 189, 8),
QT_MOC_LITERAL(13, 198, 1),
QT_MOC_LITERAL(14, 200, 1),
QT_MOC_LITERAL(15, 202, 11),
QT_MOC_LITERAL(16, 214, 23),
QT_MOC_LITERAL(17, 238, 9),
QT_MOC_LITERAL(18, 248, 7),
QT_MOC_LITERAL(19, 256, 17),
QT_MOC_LITERAL(20, 274, 9),
QT_MOC_LITERAL(21, 284, 8)
    },
    "qttest\0stop\0\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_clicked\0on_pushButton_4_clicked\0"
    "updatepicture3\0setostu\0setentropy\0"
    "on_pushButton_2_clicked\0OnNotify\0a\0b\0"
    "setedgedect\0on_pushButton_3_clicked\0"
    "basicoper\0advoper\0setboundAgradient\0"
    "setstruct\0convolop\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qttest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,  110,    2, 0x0a,
       4,    0,  111,    2, 0x0a,
       5,    0,  112,    2, 0x0a,
       6,    0,  113,    2, 0x0a,
       7,    0,  114,    2, 0x0a,
       8,    0,  115,    2, 0x0a,
       9,    0,  116,    2, 0x0a,
      10,    0,  117,    2, 0x0a,
      11,    0,  118,    2, 0x0a,
      12,    2,  119,    2, 0x0a,
      12,    1,  124,    2, 0x0a,
      15,    0,  127,    2, 0x0a,
      16,    0,  128,    2, 0x0a,
      17,    0,  129,    2, 0x0a,
      18,    0,  130,    2, 0x0a,
      19,    0,  131,    2, 0x0a,
      20,    0,  132,    2, 0x0a,
      21,    0,  133,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

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
    QMetaType::Void, QMetaType::QImage, QMetaType::QImage,   13,   14,
    QMetaType::Void, QMetaType::QImage,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qttest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qttest *_t = static_cast<qttest *>(_o);
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: _t->on_pushButton_5_clicked(); break;
        case 2: _t->on_pushButton_6_clicked(); break;
        case 3: _t->on_pushButton_7_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->updatepicture3(); break;
        case 7: _t->setostu(); break;
        case 8: _t->setentropy(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->OnNotify((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 11: _t->OnNotify((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 12: _t->setedgedect(); break;
        case 13: _t->on_pushButton_3_clicked(); break;
        case 14: _t->basicoper(); break;
        case 15: _t->advoper(); break;
        case 16: _t->setboundAgradient(); break;
        case 17: _t->setstruct(); break;
        case 18: _t->convolop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (qttest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qttest::stop)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qttest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qttest.data,
      qt_meta_data_qttest,  qt_static_metacall, 0, 0}
};


const QMetaObject *qttest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qttest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qttest.stringdata))
        return static_cast<void*>(const_cast< qttest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qttest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void qttest::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
