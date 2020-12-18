/****************************************************************************
** Meta object code from reading C++ file 'download.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../platforms/syberos/syberh-plugins/download/download.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Download_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Download_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Download_t qt_meta_stringdata_Download = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Download"
QT_MOC_LITERAL(1, 9, 9), // "onStarted"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "downloadId"
QT_MOC_LITERAL(4, 31, 4), // "path"
QT_MOC_LITERAL(5, 36, 17), // "onDownloadProcess"
QT_MOC_LITERAL(6, 54, 8), // "received"
QT_MOC_LITERAL(7, 63, 5), // "total"
QT_MOC_LITERAL(8, 69, 15), // "onReplyFinished"
QT_MOC_LITERAL(9, 85, 10), // "statusCode"
QT_MOC_LITERAL(10, 96, 12), // "errorMessage"
QT_MOC_LITERAL(11, 109, 15), // "onDownloadError"
QT_MOC_LITERAL(12, 125, 5) // "error"

    },
    "Download\0onStarted\0\0downloadId\0path\0"
    "onDownloadProcess\0received\0total\0"
    "onReplyFinished\0statusCode\0errorMessage\0"
    "onDownloadError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Download[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   65, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       5,    4,   39,    2, 0x0a /* Public */,
       8,    4,   48,    2, 0x0a /* Public */,
      11,    3,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::QString,    3,    9,   12,

 // constructors: parameters
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    0,   64,    2, 0x0e /* Public */,

       0        // eod
};

void Download::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Download *_r = new Download();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Download *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStarted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->onDownloadProcess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 2: _t->onReplyFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->onDownloadError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Download::staticMetaObject = { {
    &ExtensionSystem::IPlugin::staticMetaObject,
    qt_meta_stringdata_Download.data,
    qt_meta_data_Download,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Download::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Download::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Download.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int Download::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1f,  'c',  'o',  'm',  '.',  's', 
    'y',  'b',  'e',  'r',  'o',  's',  '.',  's', 
    'y',  'b',  'e',  'r',  'h',  '.',  'S',  'y', 
    'b',  'e',  'r',  'h',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    // "className"
    0x03,  0x68,  'D',  'o',  'w',  'n',  'l',  'o', 
    'a',  'd', 
    // "MetaData"
    0x04,  0xa8,  0x6d,  'C',  'o',  'm',  'p',  'a', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x63,  '5',  '.',  '3',  0x69,  'C',  'o',  'p', 
    'y',  'r',  'i',  'g',  'h',  't',  0x78,  0x19, 
    '(',  'C',  ')',  ' ',  '2',  '0',  '1',  '4', 
    '-',  '2',  '0',  '2',  '0',  ' ',  's',  'y', 
    'b',  'e',  'r',  'o',  's',  '.',  'c',  'o', 
    'm',  0x6c,  'D',  'e',  'p',  'e',  'n',  'd', 
    'e',  'n',  'c',  'i',  'e',  's',  0x80,  0x6b, 
    'D',  'e',  's',  'c',  'r',  'i',  'p',  't', 
    'i',  'o',  'n',  0x60,  0x67,  'L',  'i',  'c', 
    'e',  'n',  's',  'e',  0x60,  0x64,  'N',  'a', 
    'm',  'e',  0x68,  'D',  'o',  'w',  'n',  'l', 
    'o',  'a',  'd',  0x63,  'U',  'r',  'l',  0x78, 
    0x1a,  'h',  't',  't',  'p',  's',  ':',  '/', 
    '/',  's',  'y',  'b',  'e',  'r',  'h',  '.', 
    's',  'y',  'b',  'e',  'r',  'o',  's',  '.', 
    'c',  'o',  'm',  0x67,  'V',  'e',  'r',  's', 
    'i',  'o',  'n',  0x65,  '1',  '.',  '0',  '.', 
    '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Download, Download)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
