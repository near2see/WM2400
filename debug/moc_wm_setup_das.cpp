/****************************************************************************
** Meta object code from reading C++ file 'wm_setup_das.h'
**
** Created: Thu Oct 25 17:20:45 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wm_setup_das.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wm_setup_das.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WM_SETUP_DAS[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WM_SETUP_DAS[] = {
    "WM_SETUP_DAS\0\0item,column\0"
    "checkself(QTreeWidgetItem*,int)\0"
};

void WM_SETUP_DAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WM_SETUP_DAS *_t = static_cast<WM_SETUP_DAS *>(_o);
        switch (_id) {
        case 0: _t->checkself((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WM_SETUP_DAS::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WM_SETUP_DAS::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WM_SETUP_DAS,
      qt_meta_data_WM_SETUP_DAS, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WM_SETUP_DAS::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WM_SETUP_DAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WM_SETUP_DAS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WM_SETUP_DAS))
        return static_cast<void*>(const_cast< WM_SETUP_DAS*>(this));
    return QWidget::qt_metacast(_clname);
}

int WM_SETUP_DAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
