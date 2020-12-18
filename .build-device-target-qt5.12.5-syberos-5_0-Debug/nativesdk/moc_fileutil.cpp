/****************************************************************************
** Meta object code from reading C++ file 'fileutil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/nativesdk/src/util/fileutil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileutil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NativeSdk__FileUtil_t {
    QByteArrayData data[21];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeSdk__FileUtil_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeSdk__FileUtil_t qt_meta_stringdata_NativeSdk__FileUtil = {
    {
QT_MOC_LITERAL(0, 0, 19), // "NativeSdk::FileUtil"
QT_MOC_LITERAL(1, 20, 4), // "move"
QT_MOC_LITERAL(2, 25, 10), // "RespResult"
QT_MOC_LITERAL(3, 36, 0), // ""
QT_MOC_LITERAL(4, 37, 7), // "srcPath"
QT_MOC_LITERAL(5, 45, 8), // "destPath"
QT_MOC_LITERAL(6, 54, 4), // "copy"
QT_MOC_LITERAL(7, 59, 8), // "fileList"
QT_MOC_LITERAL(8, 68, 13), // "QFileInfoList"
QT_MOC_LITERAL(9, 82, 8), // "fileType"
QT_MOC_LITERAL(10, 91, 18), // "FileUtil::FileType"
QT_MOC_LITERAL(11, 110, 6), // "remove"
QT_MOC_LITERAL(12, 117, 9), // "recursive"
QT_MOC_LITERAL(13, 127, 7), // "getInfo"
QT_MOC_LITERAL(14, 135, 8), // "FileInfo"
QT_MOC_LITERAL(15, 144, 11), // "getInfoSize"
QT_MOC_LITERAL(16, 156, 6), // "exists"
QT_MOC_LITERAL(17, 163, 6), // "chmodr"
QT_MOC_LITERAL(18, 170, 4), // "path"
QT_MOC_LITERAL(19, 175, 6), // "rename"
QT_MOC_LITERAL(20, 182, 7) // "newName"

    },
    "NativeSdk::FileUtil\0move\0RespResult\0"
    "\0srcPath\0destPath\0copy\0fileList\0"
    "QFileInfoList\0fileType\0FileUtil::FileType\0"
    "remove\0recursive\0getInfo\0FileInfo\0"
    "getInfoSize\0exists\0chmodr\0path\0rename\0"
    "newName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeSdk__FileUtil[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   64,    3, 0x02 /* Public */,
       6,    2,   69,    3, 0x02 /* Public */,
       7,    1,   74,    3, 0x02 /* Public */,
       9,    1,   77,    3, 0x02 /* Public */,
      11,    2,   80,    3, 0x02 /* Public */,
      13,    1,   85,    3, 0x02 /* Public */,
      15,    1,   88,    3, 0x02 /* Public */,
      16,    1,   91,    3, 0x02 /* Public */,
      17,    1,   94,    3, 0x02 /* Public */,
      19,    2,   97,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 8, QMetaType::QString,    4,
    0x80000000 | 10, QMetaType::QString,    4,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int,    4,   12,
    0x80000000 | 14, QMetaType::QString,    4,
    QMetaType::LongLong, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString,   18,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,   20,

       0        // eod
};

void NativeSdk::FileUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileUtil *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { RespResult _r = _t->move((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RespResult*>(_a[0]) = std::move(_r); }  break;
        case 1: { RespResult _r = _t->copy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RespResult*>(_a[0]) = std::move(_r); }  break;
        case 2: { QFileInfoList _r = _t->fileList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileInfoList*>(_a[0]) = std::move(_r); }  break;
        case 3: { FileUtil::FileType _r = _t->fileType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FileUtil::FileType*>(_a[0]) = std::move(_r); }  break;
        case 4: { RespResult _r = _t->remove((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RespResult*>(_a[0]) = std::move(_r); }  break;
        case 5: { FileInfo _r = _t->getInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FileInfo*>(_a[0]) = std::move(_r); }  break;
        case 6: { qint64 _r = _t->getInfoSize((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->exists((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->chmodr((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { RespResult _r = _t->rename((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RespResult*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NativeSdk::FileUtil::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NativeSdk__FileUtil.data,
    qt_meta_data_NativeSdk__FileUtil,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NativeSdk::FileUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSdk::FileUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSdk__FileUtil.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NativeSdk::FileUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
