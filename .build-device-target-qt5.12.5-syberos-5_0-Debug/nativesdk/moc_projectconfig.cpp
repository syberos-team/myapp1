/****************************************************************************
** Meta object code from reading C++ file 'projectconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../platforms/syberos/nativesdk/src/framework/common/projectconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NativeSdk__ProjectConfig_t {
    QByteArrayData data[20];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeSdk__ProjectConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeSdk__ProjectConfig_t qt_meta_stringdata_NativeSdk__ProjectConfig = {
    {
QT_MOC_LITERAL(0, 0, 24), // "NativeSdk::ProjectConfig"
QT_MOC_LITERAL(1, 25, 11), // "getLogLevel"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "isDebug"
QT_MOC_LITERAL(4, 46, 8), // "isUseHot"
QT_MOC_LITERAL(5, 55, 14), // "getProjectName"
QT_MOC_LITERAL(6, 70, 10), // "getAppName"
QT_MOC_LITERAL(7, 81, 8), // "getSopid"
QT_MOC_LITERAL(8, 90, 9), // "getTarget"
QT_MOC_LITERAL(9, 100, 18), // "getTargetSimulator"
QT_MOC_LITERAL(10, 119, 10), // "getWebPath"
QT_MOC_LITERAL(11, 130, 11), // "getHomePage"
QT_MOC_LITERAL(12, 142, 15), // "getStoreBaseUrl"
QT_MOC_LITERAL(13, 158, 11), // "getDeployIP"
QT_MOC_LITERAL(14, 170, 13), // "getDeployPort"
QT_MOC_LITERAL(15, 184, 14), // "getDevServerIP"
QT_MOC_LITERAL(16, 199, 16), // "getDevServerPort"
QT_MOC_LITERAL(17, 216, 16), // "getDebuggingPort"
QT_MOC_LITERAL(18, 233, 13), // "statusBarShow"
QT_MOC_LITERAL(19, 247, 14) // "statusBarStyle"

    },
    "NativeSdk::ProjectConfig\0getLogLevel\0"
    "\0isDebug\0isUseHot\0getProjectName\0"
    "getAppName\0getSopid\0getTarget\0"
    "getTargetSimulator\0getWebPath\0getHomePage\0"
    "getStoreBaseUrl\0getDeployIP\0getDeployPort\0"
    "getDevServerIP\0getDevServerPort\0"
    "getDebuggingPort\0statusBarShow\0"
    "statusBarStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeSdk__ProjectConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x02 /* Public */,
       3,    0,  105,    2, 0x02 /* Public */,
       4,    0,  106,    2, 0x02 /* Public */,
       5,    0,  107,    2, 0x02 /* Public */,
       6,    0,  108,    2, 0x02 /* Public */,
       7,    0,  109,    2, 0x02 /* Public */,
       8,    0,  110,    2, 0x02 /* Public */,
       9,    0,  111,    2, 0x02 /* Public */,
      10,    0,  112,    2, 0x02 /* Public */,
      11,    0,  113,    2, 0x02 /* Public */,
      12,    0,  114,    2, 0x02 /* Public */,
      13,    0,  115,    2, 0x02 /* Public */,
      14,    0,  116,    2, 0x02 /* Public */,
      15,    0,  117,    2, 0x02 /* Public */,
      16,    0,  118,    2, 0x02 /* Public */,
      17,    0,  119,    2, 0x02 /* Public */,
      18,    0,  120,    2, 0x02 /* Public */,
      19,    0,  121,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::QString,

       0        // eod
};

void NativeSdk::ProjectConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getLogLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->isDebug();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isUseHot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getProjectName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getAppName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getSopid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->getTarget();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getTargetSimulator();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->getWebPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->getHomePage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->getStoreBaseUrl();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->getDeployIP();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->getDeployPort();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getDevServerIP();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->getDevServerPort();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->getDebuggingPort();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->statusBarShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->statusBarStyle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NativeSdk::ProjectConfig::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NativeSdk__ProjectConfig.data,
    qt_meta_data_NativeSdk__ProjectConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NativeSdk::ProjectConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSdk::ProjectConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSdk__ProjectConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NativeSdk::ProjectConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
