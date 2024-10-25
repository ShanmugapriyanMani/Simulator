/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p cluster_interface /home/shanmugapriyan/Documents/Sim/QtTest/myservice.xml
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd and other contributors.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CLUSTER_INTERFACE_H
#define CLUSTER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface experion.server.dbus
 */
class ExperionServerDbusInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "experion.server.dbus"; }

public:
    ExperionServerDbusInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~ExperionServerDbusInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> setDriveMode(int newDriveMode)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newDriveMode);
        return asyncCallWithArgumentList(QStringLiteral("setDriveMode"), argumentList);
    }

    inline QDBusPendingReply<> setFuelRange(int fuelRange)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(fuelRange);
        return asyncCallWithArgumentList(QStringLiteral("setFuelRange"), argumentList);
    }

    inline QDBusPendingReply<> setIsAbsOn(bool newIsAbsOn)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsAbsOn);
        return asyncCallWithArgumentList(QStringLiteral("setIsAbsOn"), argumentList);
    }

    inline QDBusPendingReply<> setIsCarBatteryWarning(bool newIsCarBatteryWarning)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsCarBatteryWarning);
        return asyncCallWithArgumentList(QStringLiteral("setIsCarBatteryWarning"), argumentList);
    }

    inline QDBusPendingReply<> setIsCarBrakeParkingOn(bool newIsCarBrakeParkingOn)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsCarBrakeParkingOn);
        return asyncCallWithArgumentList(QStringLiteral("setIsCarBrakeParkingOn"), argumentList);
    }

    inline QDBusPendingReply<> setIsCarChildSeatWarning(bool newIsCarChildSeatWarning)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsCarChildSeatWarning);
        return asyncCallWithArgumentList(QStringLiteral("setIsCarChildSeatWarning"), argumentList);
    }

    inline QDBusPendingReply<> setIsCarPressureWarning(bool newIsCarPressureWarning)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsCarPressureWarning);
        return asyncCallWithArgumentList(QStringLiteral("setIsCarPressureWarning"), argumentList);
    }

    inline QDBusPendingReply<> setIsCarTractionControlWarning(bool newIsCarTractionControlWarning)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsCarTractionControlWarning);
        return asyncCallWithArgumentList(QStringLiteral("setIsCarTractionControlWarning"), argumentList);
    }

    inline QDBusPendingReply<> setIsHighBeamOn(bool newIsHighBeamOn)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsHighBeamOn);
        return asyncCallWithArgumentList(QStringLiteral("setIsHighBeamOn"), argumentList);
    }

    inline QDBusPendingReply<> setIsLeftIndicatorOn(bool newIsLeftIndicatorOn)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsLeftIndicatorOn);
        return asyncCallWithArgumentList(QStringLiteral("setIsLeftIndicatorOn"), argumentList);
    }

    inline QDBusPendingReply<> setIsOilCanWarning(bool newIsOilCanWarning)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsOilCanWarning);
        return asyncCallWithArgumentList(QStringLiteral("setIsOilCanWarning"), argumentList);
    }

    inline QDBusPendingReply<> setIsRightIndicatorOn(bool newIsRightIndicatorOn)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsRightIndicatorOn);
        return asyncCallWithArgumentList(QStringLiteral("setIsRightIndicatorOn"), argumentList);
    }

    inline QDBusPendingReply<> setIsSeatBeltWarning(bool newIsSeatBeltWarning)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(newIsSeatBeltWarning);
        return asyncCallWithArgumentList(QStringLiteral("setIsSeatBeltWarning"), argumentList);
    }

    inline QDBusPendingReply<> setRpm(int rpmValue)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(rpmValue);
        return asyncCallWithArgumentList(QStringLiteral("setRpm"), argumentList);
    }

    inline QDBusPendingReply<> setSpeed(int speed)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(speed);
        return asyncCallWithArgumentList(QStringLiteral("setSpeed"), argumentList);
    }

    inline QDBusPendingReply<> setTemperatureRange(int TemperatureRange)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(TemperatureRange);
        return asyncCallWithArgumentList(QStringLiteral("setTemperatureRange"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace experion {
  namespace server {
    using dbus = ::ExperionServerDbusInterface;
  }
}
#endif
