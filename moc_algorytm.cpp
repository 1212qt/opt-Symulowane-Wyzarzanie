/****************************************************************************
** Meta object code from reading C++ file 'algorytm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MMWDwind/algorytm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'algorytm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Algorytm_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Algorytm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Algorytm_t qt_meta_stringdata_Algorytm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Algorytm"
QT_MOC_LITERAL(1, 9, 10), // "pokazTrase"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "powrotDoMenu"
QT_MOC_LITERAL(4, 34, 18), // "pokazWykresFunkcji"
QT_MOC_LITERAL(5, 53, 12), // "uruchomSerie"
QT_MOC_LITERAL(6, 66, 13), // "zamknijDialog"
QT_MOC_LITERAL(7, 80, 7), // "uruchom"
QT_MOC_LITERAL(8, 88, 21), // "temperaturaPoczatkowa"
QT_MOC_LITERAL(9, 110, 12), // "dlugoscEpoki"
QT_MOC_LITERAL(10, 123, 18), // "temperaturaKoncowa"
QT_MOC_LITERAL(11, 142, 23), // "wspolczynnikSchladzania"
QT_MOC_LITERAL(12, 166, 10) // "uruchomRaz"

    },
    "Algorytm\0pokazTrase\0\0powrotDoMenu\0"
    "pokazWykresFunkcji\0uruchomSerie\0"
    "zamknijDialog\0uruchom\0temperaturaPoczatkowa\0"
    "dlugoscEpoki\0temperaturaKoncowa\0"
    "wspolczynnikSchladzania\0uruchomRaz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Algorytm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    4,   54,    2, 0x0a /* Public */,
      12,    4,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::SChar, QMetaType::Double, QMetaType::Double,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::SChar, QMetaType::Double, QMetaType::Double,    8,    9,   10,   11,

       0        // eod
};

void Algorytm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Algorytm *_t = static_cast<Algorytm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pokazTrase(); break;
        case 1: _t->powrotDoMenu(); break;
        case 2: _t->pokazWykresFunkcji(); break;
        case 3: _t->uruchomSerie(); break;
        case 4: _t->zamknijDialog(); break;
        case 5: _t->uruchom((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 6: _t->uruchomRaz((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Algorytm::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Algorytm.data,
    qt_meta_data_Algorytm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Algorytm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Algorytm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Algorytm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Algorytm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
