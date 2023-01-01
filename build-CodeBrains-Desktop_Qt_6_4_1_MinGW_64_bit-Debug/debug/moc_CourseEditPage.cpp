/****************************************************************************
** Meta object code from reading C++ file 'CourseEditPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CodeBrains project/CourseEditPage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CourseEditPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_CourseEditPage_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[38];
    char stringdata4[4];
    char stringdata5[7];
    char stringdata6[40];
    char stringdata7[25];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CourseEditPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CourseEditPage_t qt_meta_stringdata_CourseEditPage = {
    {
        QT_MOC_LITERAL(0, 14),  // "CourseEditPage"
        QT_MOC_LITERAL(15, 25),  // "on_SavePushButton_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 37),  // "on_allStudentsTable_cellDoubl..."
        QT_MOC_LITERAL(80, 3),  // "row"
        QT_MOC_LITERAL(84, 6),  // "column"
        QT_MOC_LITERAL(91, 39),  // "on_allProfessorsTable_cellDou..."
        QT_MOC_LITERAL(131, 24),  // "on_deleteSButton_clicked"
        QT_MOC_LITERAL(156, 24)   // "on_deletePButton_clicked"
    },
    "CourseEditPage",
    "on_SavePushButton_clicked",
    "",
    "on_allStudentsTable_cellDoubleClicked",
    "row",
    "column",
    "on_allProfessorsTable_cellDoubleClicked",
    "on_deleteSButton_clicked",
    "on_deletePButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CourseEditPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    2,   45,    2, 0x08,    2 /* Private */,
       6,    2,   50,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    8 /* Private */,
       8,    0,   56,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CourseEditPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CourseEditPage.offsetsAndSizes,
    qt_meta_data_CourseEditPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CourseEditPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CourseEditPage, std::true_type>,
        // method 'on_SavePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_allStudentsTable_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_allProfessorsTable_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_deleteSButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletePButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CourseEditPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CourseEditPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_SavePushButton_clicked(); break;
        case 1: _t->on_allStudentsTable_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->on_allProfessorsTable_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_deleteSButton_clicked(); break;
        case 4: _t->on_deletePButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *CourseEditPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CourseEditPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CourseEditPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CourseEditPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
