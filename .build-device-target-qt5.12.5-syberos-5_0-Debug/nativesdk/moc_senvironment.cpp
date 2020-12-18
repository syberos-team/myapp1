/****************************************************************************
** Meta object code from reading C++ file 'senvironment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/nativesdk/src/senvironment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'senvironment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NativeSdk__SEnvironment_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeSdk__SEnvironment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeSdk__SEnvironment_t qt_meta_stringdata_NativeSdk__SEnvironment = {
    {
QT_MOC_LITERAL(0, 0, 23), // "NativeSdk::SEnvironment"
QT_MOC_LITERAL(1, 24, 2), // "dp"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3) // "num"

    },
    "NativeSdk::SEnvironment\0dp\0\0num"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeSdk__SEnvironment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Float, QMetaType::Int,    3,

       0        // eod
};

void NativeSdk::SEnvironment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SEnvironment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->dp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NativeSdk::SEnvironment::staticMetaObject = { {
    &CEnvironment::staticMetaObject,
    qt_meta_stringdata_NativeSdk__SEnvironment.data,
    qt_meta_data_NativeSdk__SEnvironment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NativeSdk::SEnvironment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSdk::SEnvironment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSdk__SEnvironment.stringdata0))
        return static_cast<void*>(this);
    return CEnvironment::qt_metacast(_clname);
}

int NativeSdk::SEnvironment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CEnvironment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
