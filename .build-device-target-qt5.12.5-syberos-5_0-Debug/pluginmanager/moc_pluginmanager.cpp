/****************************************************************************
** Meta object code from reading C++ file 'pluginmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/pluginmanager/src/pluginmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtensionSystem__PluginManager_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtensionSystem__PluginManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtensionSystem__PluginManager_t qt_meta_stringdata_ExtensionSystem__PluginManager = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ExtensionSystem::PluginManager"
QT_MOC_LITERAL(1, 31, 11), // "objectAdded"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "obj"
QT_MOC_LITERAL(4, 48, 19), // "aboutToRemoveObject"
QT_MOC_LITERAL(5, 68, 14), // "pluginsChanged"
QT_MOC_LITERAL(6, 83, 18), // "initializationDone"
QT_MOC_LITERAL(7, 102, 13), // "testsFinished"
QT_MOC_LITERAL(8, 116, 11) // "failedTests"

    },
    "ExtensionSystem::PluginManager\0"
    "objectAdded\0\0obj\0aboutToRemoveObject\0"
    "pluginsChanged\0initializationDone\0"
    "testsFinished\0failedTests"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtensionSystem__PluginManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    0,   45,    2, 0x06 /* Public */,
       6,    0,   46,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void ExtensionSystem::PluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectAdded((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->aboutToRemoveObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->pluginsChanged(); break;
        case 3: _t->initializationDone(); break;
        case 4: _t->testsFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginManager::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::objectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::aboutToRemoveObject)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::pluginsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::initializationDone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::testsFinished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExtensionSystem::PluginManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExtensionSystem__PluginManager.data,
    qt_meta_data_ExtensionSystem__PluginManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtensionSystem::PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionSystem::PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionSystem__PluginManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtensionSystem::PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ExtensionSystem::PluginManager::objectAdded(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExtensionSystem::PluginManager::aboutToRemoveObject(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ExtensionSystem::PluginManager::pluginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ExtensionSystem::PluginManager::initializationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ExtensionSystem::PluginManager::testsFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
