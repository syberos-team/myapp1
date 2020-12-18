/****************************************************************************
** Meta object code from reading C++ file 'nativesdkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/nativesdk/src/framework/nativesdkmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nativesdkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NativeSdk__NativeSdkManager_t {
    QByteArrayData data[27];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeSdk__NativeSdkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeSdk__NativeSdkManager_t qt_meta_stringdata_NativeSdk__NativeSdkManager = {
    {
QT_MOC_LITERAL(0, 0, 27), // "NativeSdk::NativeSdkManager"
QT_MOC_LITERAL(1, 28, 7), // "success"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "responseID"
QT_MOC_LITERAL(4, 48, 6), // "result"
QT_MOC_LITERAL(5, 55, 6), // "failed"
QT_MOC_LITERAL(6, 62, 9), // "errorCode"
QT_MOC_LITERAL(7, 72, 8), // "errorMsg"
QT_MOC_LITERAL(8, 81, 8), // "progress"
QT_MOC_LITERAL(9, 90, 11), // "totalLength"
QT_MOC_LITERAL(10, 102, 6), // "status"
QT_MOC_LITERAL(11, 109, 9), // "subscribe"
QT_MOC_LITERAL(12, 119, 10), // "handleName"
QT_MOC_LITERAL(13, 130, 4), // "data"
QT_MOC_LITERAL(14, 135, 5), // "error"
QT_MOC_LITERAL(15, 141, 12), // "errorMessage"
QT_MOC_LITERAL(16, 154, 7), // "request"
QT_MOC_LITERAL(17, 162, 6), // "typeID"
QT_MOC_LITERAL(18, 169, 10), // "callbackID"
QT_MOC_LITERAL(19, 180, 10), // "actionName"
QT_MOC_LITERAL(20, 191, 6), // "params"
QT_MOC_LITERAL(21, 198, 9), // "openByUrl"
QT_MOC_LITERAL(22, 208, 3), // "url"
QT_MOC_LITERAL(23, 212, 14), // "openByDocument"
QT_MOC_LITERAL(24, 227, 6), // "action"
QT_MOC_LITERAL(25, 234, 8), // "mimetype"
QT_MOC_LITERAL(26, 243, 8) // "filePath"

    },
    "NativeSdk::NativeSdkManager\0success\0"
    "\0responseID\0result\0failed\0errorCode\0"
    "errorMsg\0progress\0totalLength\0status\0"
    "subscribe\0handleName\0data\0error\0"
    "errorMessage\0request\0typeID\0callbackID\0"
    "actionName\0params\0openByUrl\0url\0"
    "openByDocument\0action\0mimetype\0filePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeSdk__NativeSdkManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    3,   59,    2, 0x06 /* Public */,
       8,    4,   66,    2, 0x06 /* Public */,
      11,    2,   75,    2, 0x06 /* Public */,
      14,    2,   80,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    4,   85,    2, 0x02 /* Public */,
      21,    1,   94,    2, 0x02 /* Public */,
      23,    3,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::QString,    3,    6,    7,
    QMetaType::Void, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    9,    8,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariantMap,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QUrl,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   25,   26,

       0        // eod
};

void NativeSdk::NativeSdkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NativeSdkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->failed((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->progress((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 3: _t->subscribe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 4: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->request((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariantMap(*)>(_a[4]))); break;
        case 6: _t->openByUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->openByDocument((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NativeSdkManager::*)(long , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeSdkManager::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NativeSdkManager::*)(long , long , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeSdkManager::failed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NativeSdkManager::*)(long , const int , const int , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeSdkManager::progress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NativeSdkManager::*)(QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeSdkManager::subscribe)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NativeSdkManager::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeSdkManager::error)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NativeSdk::NativeSdkManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NativeSdk__NativeSdkManager.data,
    qt_meta_data_NativeSdk__NativeSdkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NativeSdk::NativeSdkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSdk::NativeSdkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSdk__NativeSdkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NativeSdk::NativeSdkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NativeSdk::NativeSdkManager::success(long _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NativeSdk::NativeSdkManager::failed(long _t1, long _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NativeSdk::NativeSdkManager::progress(long _t1, const int _t2, const int _t3, const int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NativeSdk::NativeSdkManager::subscribe(QString _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NativeSdk::NativeSdkManager::error(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
