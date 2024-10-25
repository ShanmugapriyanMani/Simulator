#ifndef DBUSCLIENT_H
#define DBUSCLIENT_H

#include <QObject>
#include <QtDBus/QDBusInterface>
#include <QtDBus/QDBusReply>
#include <QRandomGenerator>
#include "cluster_interface.h"

class DbusClient : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool isWarningOil READ isWarningOil WRITE setIsWarningOil NOTIFY isWarningOilChanged FINAL)

    Q_PROPERTY(bool isCarBatteryWarning READ isCarBatteryWarning WRITE setIsCarBatteryWarning NOTIFY isCarBatteryWarningChanged FINAL)
    Q_PROPERTY(bool isCarPressureWarning READ isCarPressureWarning WRITE setIsCarPressureWarning NOTIFY isCarPressureWarningChanged FINAL)
    Q_PROPERTY(bool isCarChildSeatWarning READ isCarChildSeatWarning WRITE setIsCarChildSeatWarning NOTIFY isCarChildSeatWarningChanged FINAL)
    Q_PROPERTY(bool isCarTractionControlWarning READ isCarTractionControlWarning WRITE setIsCarTractionControlWarning NOTIFY isCarTractionControlWarningChanged FINAL)
    Q_PROPERTY(bool isSeatBeltWarning READ isSeatBeltWarning WRITE setIsSeatBeltWarning NOTIFY isSeatBeltWarningChanged FINAL)
    Q_PROPERTY(bool isHighBeamOn READ isHighBeamOn WRITE setIsHighBeamOn NOTIFY isHighBeamOnChanged FINAL)
    Q_PROPERTY(bool isCarBrakeParkingOn READ isCarBrakeParkingOn WRITE setIsCarBrakeParkingOn NOTIFY isCarBrakeParkingOnChanged FINAL)
    Q_PROPERTY(bool isAbsOn READ isAbsOn WRITE setIsAbsOn NOTIFY isAbsOnChanged FINAL)
    Q_PROPERTY(bool isLeftIndicatorOn READ isLeftIndicatorOn WRITE setIsLeftIndicatorOn NOTIFY isLeftIndicatorOnChanged FINAL)
    Q_PROPERTY(bool isRightIndicatorOn READ isRightIndicatorOn WRITE setIsRightIndicatorOn NOTIFY isRightIndicatorOnChanged FINAL)
    Q_PROPERTY(DbusClient::DrivingModeList driveMode READ driveMode WRITE setDriveMode NOTIFY driveModeChanged FINAL)
    Q_PROPERTY(int speedoMeterStartingRange READ speedoMeterStartingRange WRITE setSpeedoMeterStartingRange NOTIFY speedoMeterStartingRangeChanged FINAL)
    Q_PROPERTY(int speedoMeterStopingRange READ speedoMeterStopingRange WRITE setSpeedoMeterStopingRange NOTIFY speedoMeterStopingRangeChanged FINAL)
    Q_PROPERTY(int rpmMeterStartingRange READ rpmMeterStartingRange WRITE setRpmMeterStartingRange NOTIFY rpmMeterStartingRangeChanged FINAL)
    Q_PROPERTY(int rpmMeterEndingRange READ rpmMeterEndingRange WRITE setRpmMeterEndingRange NOTIFY rpmMeterEndingRangeChanged FINAL)
    Q_PROPERTY(int fuelRange READ fuelRange WRITE setFuelRange NOTIFY fuelRangeChanged FINAL)


public:
    explicit DbusClient(QObject *parent = nullptr);


    Q_INVOKABLE bool isWarningOil() const;
    Q_INVOKABLE void setIsWarningOil(bool newIsWarningOil);

    Q_INVOKABLE bool isCarBatteryWarning() const;
    Q_INVOKABLE void setIsCarBatteryWarning(bool newIsCarBatteryWarning);

    Q_INVOKABLE bool isCarPressureWarning() const;
    Q_INVOKABLE void setIsCarPressureWarning(bool newIsCarPressureWarning);

    Q_INVOKABLE bool isCarChildSeatWarning() const;
    Q_INVOKABLE void setIsCarChildSeatWarning(bool newIsCarChildSeatWarning);

    Q_INVOKABLE bool isCarTractionControlWarning() const;
    Q_INVOKABLE void setIsCarTractionControlWarning(bool newIsCarTractionControlWarning);

    Q_INVOKABLE bool isSeatBeltWarning() const;
    Q_INVOKABLE void setIsSeatBeltWarning(bool newIsSeatBeltWarning);

    Q_INVOKABLE bool isHighBeamOn() const;
    Q_INVOKABLE void setIsHighBeamOn(bool newIsHighBeamOn);

    Q_INVOKABLE bool isCarBrakeParkingOn() const;
    Q_INVOKABLE void setIsCarBrakeParkingOn(bool newIsCarBrakeParkingOn);

    Q_INVOKABLE bool isAbsOn() const;
    Q_INVOKABLE void setIsAbsOn(bool newIsAbsOn);

    bool isLeftIndicatorOn() const;
    Q_INVOKABLE void setIsLeftIndicatorOn(bool newIsLeftIndicatorOn);

    bool isRightIndicatorOn() const;
    Q_INVOKABLE void setIsRightIndicatorOn(bool newIsRightIndicatorOn);

    enum DrivingModeList {
        REVERSE = 0,
        PARKING = 1,
        DRIVE = 2
    };

    Q_ENUM(DrivingModeList)

    Q_INVOKABLE DbusClient::DrivingModeList driveMode() const;
    Q_INVOKABLE void setDriveMode(DbusClient::DrivingModeList newDriveMode);

    Q_INVOKABLE void speedoMeterRandSpeedGenerator();
    Q_INVOKABLE void rpmMeterRandRPMGenerator();


    int fuelRange() const;
    Q_INVOKABLE void setFuelRange(int newFuelRange);

    int speedoMeterStartingRange() const;
    Q_INVOKABLE void setSpeedoMeterStartingRange(int newSpeedoMeterStartingRange);

    int speedoMeterStopingRange() const;
    Q_INVOKABLE void setSpeedoMeterStopingRange(int newSpeedoMeterStopingRange);

    int rpmMeterStartingRange() const;
    Q_INVOKABLE void setRpmMeterStartingRange(int newRpmMeterStartingRange);

    int rpmMeterEndingRange() const;
    Q_INVOKABLE void setRpmMeterEndingRange(int newRpmMeterEndingRange);

signals:
    void isWarningOilChanged();
    void isCarBatteryWarningChanged();

    void isCarPressureWarningChanged();

    void isCarChildSeatWarningChanged();

    void isCarTractionControlWarningChanged();

    void isSeatBeltWarningChanged();

    void isHighBeamOnChanged();

    void isCarBrakeParkingOnChanged();

    void isAbsOnChanged();

    void isLeftIndicatorOnChanged();

    void isRighttIndicatorOnChanged();

    void isRightIndicatorOnChanged();

    void driveModeChanged();

    void fuelRangeChanged();

    void speedoMeterStartingRangeChanged();

    void speedoMeterStopingRangeChanged();

    void rpmMeterStartingRangeChanged();

    void rpmMeterEndingRangeChanged();

private:
    bool m_isWarningOil;
    bool m_isCarBatteryWarning;
    bool m_isCarPressureWarning;
    bool m_isCarChildSeatWarning;
    bool m_isCarTractionControlWarning;
    bool m_isSeatBeltWarning;
    bool m_isHighBeamOn;
    bool m_isCarBrakeParkingOn;
    bool m_isAbsOn;
    bool m_isLeftIndicatorOn;
    bool m_isRightIndicatorOn;
    DbusClient::DrivingModeList m_driveMode;

    experion::server::dbus *dbusclient;

    std::pair<int, int> startingAndEndingRandNumberForSpeedoMeter();
    std::pair<int, int> startingAndEndingRandNumberForRPMMeter();

    int m_fuelRange;
    int m_speedoMeterStartingRange;
    int m_speedoMeterStopingRange;
    int m_rpmMeterStartingRange;
    int m_rpmMeterEndingRange;
};

#endif // DBUSCLIENT_H
