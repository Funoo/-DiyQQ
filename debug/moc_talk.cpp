/****************************************************************************
** Meta object code from reading C++ file 'talk.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../talk.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'talk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Talk_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Talk_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Talk_t qt_meta_stringdata_Talk = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Talk"
QT_MOC_LITERAL(1, 5, 12), // "iconActivate"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(4, 53, 6), // "reason"
QT_MOC_LITERAL(5, 60, 6), // "onMove"
QT_MOC_LITERAL(6, 67, 7), // "onMove2"
QT_MOC_LITERAL(7, 75, 14), // "resolveMessage"
QT_MOC_LITERAL(8, 90, 4), // "data"
QT_MOC_LITERAL(9, 95, 14) // "receiveSignMsg"

    },
    "Talk\0iconActivate\0\0QSystemTrayIcon::ActivationReason\0"
    "reason\0onMove\0onMove2\0resolveMessage\0"
    "data\0receiveSignMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Talk[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
       9,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void Talk::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Talk *_t = static_cast<Talk *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconActivate((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: _t->onMove(); break;
        case 2: _t->onMove2(); break;
        case 3: _t->resolveMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->receiveSignMsg(); break;
        default: ;
        }
    }
}

const QMetaObject Talk::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Talk.data,
      qt_meta_data_Talk,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Talk::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Talk::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Talk.stringdata0))
        return static_cast<void*>(const_cast< Talk*>(this));
    return QWidget::qt_metacast(_clname);
}

int Talk::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
