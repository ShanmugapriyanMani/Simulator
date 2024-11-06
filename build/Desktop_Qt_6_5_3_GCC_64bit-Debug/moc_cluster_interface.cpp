/****************************************************************************
** Meta object code from reading C++ file 'cluster_interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cluster_interface.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cluster_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS = QtMocHelpers::stringData(
    "ExperionServerDbusInterface",
    "setDriveMode",
    "QDBusPendingReply<>",
    "",
    "newDriveMode",
    "setFuelRange",
    "fuelRange",
    "setIsAbsOn",
    "newIsAbsOn",
    "setIsCarBatteryWarning",
    "newIsCarBatteryWarning",
    "setIsCarBrakeParkingOn",
    "newIsCarBrakeParkingOn",
    "setIsCarChildSeatWarning",
    "newIsCarChildSeatWarning",
    "setIsCarPressureWarning",
    "newIsCarPressureWarning",
    "setIsCarTractionControlWarning",
    "newIsCarTractionControlWarning",
    "setIsHighBeamOn",
    "newIsHighBeamOn",
    "setIsLeftIndicatorOn",
    "newIsLeftIndicatorOn",
    "setIsOilCanWarning",
    "newIsOilCanWarning",
    "setIsRightIndicatorOn",
    "newIsRightIndicatorOn",
    "setIsSeatBeltWarning",
    "newIsSeatBeltWarning",
    "setRpmStartingAndEndingRange",
    "rpmStartingRange",
    "rpmEndingRange",
    "setSpeedStartingAndEndingRange",
    "speedStartingRange",
    "speedEndingRange",
    "setTemperatureRange",
    "TemperatureRange"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[28];
    char stringdata1[13];
    char stringdata2[20];
    char stringdata3[1];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[23];
    char stringdata10[23];
    char stringdata11[23];
    char stringdata12[23];
    char stringdata13[25];
    char stringdata14[25];
    char stringdata15[24];
    char stringdata16[24];
    char stringdata17[31];
    char stringdata18[31];
    char stringdata19[16];
    char stringdata20[16];
    char stringdata21[21];
    char stringdata22[21];
    char stringdata23[19];
    char stringdata24[19];
    char stringdata25[22];
    char stringdata26[22];
    char stringdata27[21];
    char stringdata28[21];
    char stringdata29[29];
    char stringdata30[17];
    char stringdata31[15];
    char stringdata32[31];
    char stringdata33[19];
    char stringdata34[17];
    char stringdata35[20];
    char stringdata36[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS_t qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "ExperionServerDbusInterface"
        QT_MOC_LITERAL(28, 12),  // "setDriveMode"
        QT_MOC_LITERAL(41, 19),  // "QDBusPendingReply<>"
        QT_MOC_LITERAL(61, 0),  // ""
        QT_MOC_LITERAL(62, 12),  // "newDriveMode"
        QT_MOC_LITERAL(75, 12),  // "setFuelRange"
        QT_MOC_LITERAL(88, 9),  // "fuelRange"
        QT_MOC_LITERAL(98, 10),  // "setIsAbsOn"
        QT_MOC_LITERAL(109, 10),  // "newIsAbsOn"
        QT_MOC_LITERAL(120, 22),  // "setIsCarBatteryWarning"
        QT_MOC_LITERAL(143, 22),  // "newIsCarBatteryWarning"
        QT_MOC_LITERAL(166, 22),  // "setIsCarBrakeParkingOn"
        QT_MOC_LITERAL(189, 22),  // "newIsCarBrakeParkingOn"
        QT_MOC_LITERAL(212, 24),  // "setIsCarChildSeatWarning"
        QT_MOC_LITERAL(237, 24),  // "newIsCarChildSeatWarning"
        QT_MOC_LITERAL(262, 23),  // "setIsCarPressureWarning"
        QT_MOC_LITERAL(286, 23),  // "newIsCarPressureWarning"
        QT_MOC_LITERAL(310, 30),  // "setIsCarTractionControlWarning"
        QT_MOC_LITERAL(341, 30),  // "newIsCarTractionControlWarning"
        QT_MOC_LITERAL(372, 15),  // "setIsHighBeamOn"
        QT_MOC_LITERAL(388, 15),  // "newIsHighBeamOn"
        QT_MOC_LITERAL(404, 20),  // "setIsLeftIndicatorOn"
        QT_MOC_LITERAL(425, 20),  // "newIsLeftIndicatorOn"
        QT_MOC_LITERAL(446, 18),  // "setIsOilCanWarning"
        QT_MOC_LITERAL(465, 18),  // "newIsOilCanWarning"
        QT_MOC_LITERAL(484, 21),  // "setIsRightIndicatorOn"
        QT_MOC_LITERAL(506, 21),  // "newIsRightIndicatorOn"
        QT_MOC_LITERAL(528, 20),  // "setIsSeatBeltWarning"
        QT_MOC_LITERAL(549, 20),  // "newIsSeatBeltWarning"
        QT_MOC_LITERAL(570, 28),  // "setRpmStartingAndEndingRange"
        QT_MOC_LITERAL(599, 16),  // "rpmStartingRange"
        QT_MOC_LITERAL(616, 14),  // "rpmEndingRange"
        QT_MOC_LITERAL(631, 30),  // "setSpeedStartingAndEndingRange"
        QT_MOC_LITERAL(662, 18),  // "speedStartingRange"
        QT_MOC_LITERAL(681, 16),  // "speedEndingRange"
        QT_MOC_LITERAL(698, 19),  // "setTemperatureRange"
        QT_MOC_LITERAL(718, 16)   // "TemperatureRange"
    },
    "ExperionServerDbusInterface",
    "setDriveMode",
    "QDBusPendingReply<>",
    "",
    "newDriveMode",
    "setFuelRange",
    "fuelRange",
    "setIsAbsOn",
    "newIsAbsOn",
    "setIsCarBatteryWarning",
    "newIsCarBatteryWarning",
    "setIsCarBrakeParkingOn",
    "newIsCarBrakeParkingOn",
    "setIsCarChildSeatWarning",
    "newIsCarChildSeatWarning",
    "setIsCarPressureWarning",
    "newIsCarPressureWarning",
    "setIsCarTractionControlWarning",
    "newIsCarTractionControlWarning",
    "setIsHighBeamOn",
    "newIsHighBeamOn",
    "setIsLeftIndicatorOn",
    "newIsLeftIndicatorOn",
    "setIsOilCanWarning",
    "newIsOilCanWarning",
    "setIsRightIndicatorOn",
    "newIsRightIndicatorOn",
    "setIsSeatBeltWarning",
    "newIsSeatBeltWarning",
    "setRpmStartingAndEndingRange",
    "rpmStartingRange",
    "rpmEndingRange",
    "setSpeedStartingAndEndingRange",
    "speedStartingRange",
    "speedEndingRange",
    "setTemperatureRange",
    "TemperatureRange"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSExperionServerDbusInterfaceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    3, 0x0a,    1 /* Public */,
       5,    1,  113,    3, 0x0a,    3 /* Public */,
       7,    1,  116,    3, 0x0a,    5 /* Public */,
       9,    1,  119,    3, 0x0a,    7 /* Public */,
      11,    1,  122,    3, 0x0a,    9 /* Public */,
      13,    1,  125,    3, 0x0a,   11 /* Public */,
      15,    1,  128,    3, 0x0a,   13 /* Public */,
      17,    1,  131,    3, 0x0a,   15 /* Public */,
      19,    1,  134,    3, 0x0a,   17 /* Public */,
      21,    1,  137,    3, 0x0a,   19 /* Public */,
      23,    1,  140,    3, 0x0a,   21 /* Public */,
      25,    1,  143,    3, 0x0a,   23 /* Public */,
      27,    1,  146,    3, 0x0a,   25 /* Public */,
      29,    2,  149,    3, 0x0a,   27 /* Public */,
      32,    2,  154,    3, 0x0a,   30 /* Public */,
      35,    1,  159,    3, 0x0a,   33 /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::Int,    4,
    0x80000000 | 2, QMetaType::Int,    6,
    0x80000000 | 2, QMetaType::Bool,    8,
    0x80000000 | 2, QMetaType::Bool,   10,
    0x80000000 | 2, QMetaType::Bool,   12,
    0x80000000 | 2, QMetaType::Bool,   14,
    0x80000000 | 2, QMetaType::Bool,   16,
    0x80000000 | 2, QMetaType::Bool,   18,
    0x80000000 | 2, QMetaType::Bool,   20,
    0x80000000 | 2, QMetaType::Bool,   22,
    0x80000000 | 2, QMetaType::Bool,   24,
    0x80000000 | 2, QMetaType::Bool,   26,
    0x80000000 | 2, QMetaType::Bool,   28,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,   30,   31,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,   33,   34,
    0x80000000 | 2, QMetaType::Int,   36,

       0        // eod
};

Q_CONSTINIT const QMetaObject ExperionServerDbusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSExperionServerDbusInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ExperionServerDbusInterface, std::true_type>,
        // method 'setDriveMode'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setFuelRange'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setIsAbsOn'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsCarBatteryWarning'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsCarBrakeParkingOn'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsCarChildSeatWarning'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsCarPressureWarning'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsCarTractionControlWarning'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsHighBeamOn'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsLeftIndicatorOn'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsOilCanWarning'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsRightIndicatorOn'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsSeatBeltWarning'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRpmStartingAndEndingRange'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSpeedStartingAndEndingRange'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTemperatureRange'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ExperionServerDbusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExperionServerDbusInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->setDriveMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->setFuelRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->setIsAbsOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->setIsCarBatteryWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<> _r = _t->setIsCarBrakeParkingOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->setIsCarChildSeatWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<> _r = _t->setIsCarPressureWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->setIsCarTractionControlWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<> _r = _t->setIsHighBeamOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->setIsLeftIndicatorOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<> _r = _t->setIsOilCanWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 11: { QDBusPendingReply<> _r = _t->setIsRightIndicatorOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 12: { QDBusPendingReply<> _r = _t->setIsSeatBeltWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 13: { QDBusPendingReply<> _r = _t->setRpmStartingAndEndingRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QDBusPendingReply<> _r = _t->setSpeedStartingAndEndingRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QDBusPendingReply<> _r = _t->setTemperatureRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *ExperionServerDbusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExperionServerDbusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSExperionServerDbusInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int ExperionServerDbusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
