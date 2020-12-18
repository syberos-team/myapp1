/****************************************************************************
** Meta object code from reading C++ file 'helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/nativesdk/src/helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NativeSdk__Helper_t {
    QByteArrayData data[22];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeSdk__Helper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeSdk__Helper_t qt_meta_stringdata_NativeSdk__Helper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NativeSdk::Helper"
QT_MOC_LITERAL(1, 18, 14), // "getWebRootPath"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "getDefaultWebRootPath"
QT_MOC_LITERAL(4, 56, 15), // "getDataRootPath"
QT_MOC_LITERAL(5, 72, 24), // "getExternStorageRootPath"
QT_MOC_LITERAL(6, 97, 23), // "getInnerStorageRootPath"
QT_MOC_LITERAL(7, 121, 12), // "logLevelName"
QT_MOC_LITERAL(8, 134, 18), // "getDataWebRootPath"
QT_MOC_LITERAL(9, 153, 6), // "exists"
QT_MOC_LITERAL(10, 160, 8), // "filePath"
QT_MOC_LITERAL(11, 169, 5), // "sopid"
QT_MOC_LITERAL(12, 175, 10), // "aboutPhone"
QT_MOC_LITERAL(13, 186, 12), // "getQtVersion"
QT_MOC_LITERAL(14, 199, 16), // "getQtVersionName"
QT_MOC_LITERAL(15, 216, 8), // "isGtQt56"
QT_MOC_LITERAL(16, 225, 8), // "emptyDir"
QT_MOC_LITERAL(17, 234, 4), // "path"
QT_MOC_LITERAL(18, 239, 9), // "isPicture"
QT_MOC_LITERAL(19, 249, 8), // "filepath"
QT_MOC_LITERAL(20, 258, 7), // "isAudio"
QT_MOC_LITERAL(21, 266, 11) // "getHomePage"

    },
    "NativeSdk::Helper\0getWebRootPath\0\0"
    "getDefaultWebRootPath\0getDataRootPath\0"
    "getExternStorageRootPath\0"
    "getInnerStorageRootPath\0logLevelName\0"
    "getDataWebRootPath\0exists\0filePath\0"
    "sopid\0aboutPhone\0getQtVersion\0"
    "getQtVersionName\0isGtQt56\0emptyDir\0"
    "path\0isPicture\0filepath\0isAudio\0"
    "getHomePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeSdk__Helper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x02 /* Public */,
       3,    0,  100,    2, 0x02 /* Public */,
       4,    0,  101,    2, 0x02 /* Public */,
       5,    0,  102,    2, 0x02 /* Public */,
       6,    0,  103,    2, 0x02 /* Public */,
       7,    0,  104,    2, 0x02 /* Public */,
       8,    0,  105,    2, 0x02 /* Public */,
       9,    1,  106,    2, 0x02 /* Public */,
      11,    0,  109,    2, 0x02 /* Public */,
      12,    0,  110,    2, 0x02 /* Public */,
      13,    0,  111,    2, 0x02 /* Public */,
      14,    0,  112,    2, 0x02 /* Public */,
      15,    0,  113,    2, 0x02 /* Public */,
      16,    1,  114,    2, 0x02 /* Public */,
      18,    1,  117,    2, 0x02 /* Public */,
      20,    1,  120,    2, 0x02 /* Public */,
      21,    0,  123,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::QString,
    QMetaType::QJsonObject,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   17,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::QString,

       0        // eod
};

void NativeSdk::Helper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Helper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getWebRootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getDefaultWebRootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getDataRootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getExternStorageRootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getInnerStorageRootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->logLevelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->getDataWebRootPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->exists((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->sopid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QJsonObject _r = _t->aboutPhone();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 10: { qint32 _r = _t->getQtVersion();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->getQtVersionName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isGtQt56();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->emptyDir((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->isPicture((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isAudio((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->getHomePage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NativeSdk::Helper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NativeSdk__Helper.data,
    qt_meta_data_NativeSdk__Helper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NativeSdk::Helper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSdk::Helper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSdk__Helper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NativeSdk::Helper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
