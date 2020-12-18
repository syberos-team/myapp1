/****************************************************************************
** Meta object code from reading C++ file 'uploadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../platforms/syberos/syberh-plugins/upload/util/uploadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uploadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UploadManager_t {
    QByteArrayData data[16];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UploadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UploadManager_t qt_meta_stringdata_UploadManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UploadManager"
QT_MOC_LITERAL(1, 14, 13), // "signalStarted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "uploadId"
QT_MOC_LITERAL(4, 38, 19), // "signalUploadProcess"
QT_MOC_LITERAL(5, 58, 13), // "bytesReceived"
QT_MOC_LITERAL(6, 72, 10), // "bytesTotal"
QT_MOC_LITERAL(7, 83, 19), // "signalReplyFinished"
QT_MOC_LITERAL(8, 103, 11), // "signalError"
QT_MOC_LITERAL(9, 115, 10), // "statusCode"
QT_MOC_LITERAL(10, 126, 5), // "error"
QT_MOC_LITERAL(11, 132, 16), // "onUploadProgress"
QT_MOC_LITERAL(12, 149, 10), // "onFinished"
QT_MOC_LITERAL(13, 160, 7), // "onError"
QT_MOC_LITERAL(14, 168, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(15, 196, 4) // "code"

    },
    "UploadManager\0signalStarted\0\0uploadId\0"
    "signalUploadProcess\0bytesReceived\0"
    "bytesTotal\0signalReplyFinished\0"
    "signalError\0statusCode\0error\0"
    "onUploadProgress\0onFinished\0onError\0"
    "QNetworkReply::NetworkError\0code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UploadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    3,   52,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,
       8,    3,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   69,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong,    3,    5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::QString,    3,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void UploadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UploadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalStarted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signalUploadProcess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->signalReplyFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->signalError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->onUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->onFinished(); break;
        case 6: _t->onError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UploadManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadManager::signalStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UploadManager::*)(QString , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadManager::signalUploadProcess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UploadManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadManager::signalReplyFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UploadManager::*)(QString , qint64 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadManager::signalError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UploadManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UploadManager.data,
    qt_meta_data_UploadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UploadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UploadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UploadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UploadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UploadManager::signalStarted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UploadManager::signalUploadProcess(QString _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UploadManager::signalReplyFinished(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UploadManager::signalError(QString _t1, qint64 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
