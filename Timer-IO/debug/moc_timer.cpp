/****************************************************************************
** Meta object code from reading C++ file 'timer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../timer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_timer_t {
    const uint offsetsAndSize[24];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_timer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_timer_t qt_meta_stringdata_timer = {
    {
QT_MOC_LITERAL(0, 5), // "timer"
QT_MOC_LITERAL(6, 4), // "tick"
QT_MOC_LITERAL(11, 0), // ""
QT_MOC_LITERAL(12, 22), // "on_dial_sliderReleased"
QT_MOC_LITERAL(35, 19), // "on_dial_sliderMoved"
QT_MOC_LITERAL(55, 8), // "position"
QT_MOC_LITERAL(64, 17), // "on_button_clicked"
QT_MOC_LITERAL(82, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(104, 21), // "on_dial_3_sliderMoved"
QT_MOC_LITERAL(126, 24), // "on_dial_3_sliderReleased"
QT_MOC_LITERAL(151, 13), // "on_ok_clicked"
QT_MOC_LITERAL(165, 21) // "on_toolButton_clicked"

    },
    "timer\0tick\0\0on_dial_sliderReleased\0"
    "on_dial_sliderMoved\0position\0"
    "on_button_clicked\0on_pushButton_clicked\0"
    "on_dial_3_sliderMoved\0on_dial_3_sliderReleased\0"
    "on_ok_clicked\0on_toolButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_timer[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    0 /* Public */,
       3,    0,   69,    2, 0x08,    1 /* Private */,
       4,    1,   70,    2, 0x08,    2 /* Private */,
       6,    0,   73,    2, 0x08,    4 /* Private */,
       7,    0,   74,    2, 0x08,    5 /* Private */,
       8,    1,   75,    2, 0x08,    6 /* Private */,
       9,    0,   78,    2, 0x08,    8 /* Private */,
      10,    0,   79,    2, 0x08,    9 /* Private */,
      11,    0,   80,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void timer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<timer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tick(); break;
        case 1: _t->on_dial_sliderReleased(); break;
        case 2: _t->on_dial_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_button_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_dial_3_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_dial_3_sliderReleased(); break;

        case 8: _t->on_toolButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject timer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_timer.offsetsAndSize,
    qt_meta_data_timer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_timer_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *timer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *timer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_timer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int timer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
