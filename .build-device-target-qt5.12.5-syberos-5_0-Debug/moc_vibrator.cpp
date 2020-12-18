/****************************************************************************
** Meta object code from reading C++ file 'vibrator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../platforms/syberos/syberh-plugins/vibrator/vibrator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vibrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Vibrator_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vibrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vibrator_t qt_meta_stringdata_Vibrator = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Vibrator"
QT_MOC_LITERAL(1, 9, 11), // "eventFailed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "eventId"
QT_MOC_LITERAL(4, 30, 14), // "eventCompleted"
QT_MOC_LITERAL(5, 45, 12) // "eventPlaying"

    },
    "Vibrator\0eventFailed\0\0eventId\0"
    "eventCompleted\0eventPlaying"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vibrator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void Vibrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vibrator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventFailed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->eventCompleted((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->eventPlaying((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Vibrator::staticMetaObject = { {
    &ExtensionSystem::IPlugin::staticMetaObject,
    qt_meta_stringdata_Vibrator.data,
    qt_meta_data_Vibrator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Vibrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vibrator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vibrator.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int Vibrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
    0x03,  0x68,  'V',  'i',  'b',  'r',  'a',  't', 
    'o',  'r', 
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
    'm',  'e',  0x68,  'V',  'i',  'b',  'r',  'a', 
    't',  'o',  'r',  0x63,  'U',  'r',  'l',  0x78, 
    0x1a,  'h',  't',  't',  'p',  's',  ':',  '/', 
    '/',  's',  'y',  'b',  'e',  'r',  'h',  '.', 
    's',  'y',  'b',  'e',  'r',  'o',  's',  '.', 
    'c',  'o',  'm',  0x67,  'V',  'e',  'r',  's', 
    'i',  'o',  'n',  0x65,  '1',  '.',  '0',  '.', 
    '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Vibrator, Vibrator)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
