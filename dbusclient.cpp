#include "dbusclient.h"

using experion::server::dbus;

DbusClient::DbusClient(QObject *parent)
    : QObject{parent}
{
    dbusclient = new ExperionServerDbusInterface("experion.server.dbus", "/experion/server/dbus", QDBusConnection::sessionBus(), this);
}

bool DbusClient::isWarningOil() const
{
    return m_isWarningOil;
}

void DbusClient::setIsWarningOil(bool newIsWarningOil)
{
    if (m_isWarningOil == newIsWarningOil)
        return;
    m_isWarningOil = newIsWarningOil;

    QDBusReply<void> reply = dbusclient->call("setIsOilCanWarning", m_isWarningOil);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsOilCanWarning:" << reply.error().message(); }

    emit isWarningOilChanged();
}

bool DbusClient::isCarBatteryWarning() const
{
    return m_isCarBatteryWarning;
}

void DbusClient::setIsCarBatteryWarning(bool newIsCarBatteryWarning)
{
    if (m_isCarBatteryWarning == newIsCarBatteryWarning)
        return;
    m_isCarBatteryWarning = newIsCarBatteryWarning;

    QDBusReply<void> reply = dbusclient->call("setIsCarBatteryWarning", m_isCarBatteryWarning);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsCarBatteryWarning:" << reply.error().message(); }

    emit isCarBatteryWarningChanged();
}

bool DbusClient::isCarPressureWarning() const
{
    return m_isCarPressureWarning;
}

void DbusClient::setIsCarPressureWarning(bool newIsCarPressureWarning)
{
    if (m_isCarPressureWarning == newIsCarPressureWarning)
        return;
    m_isCarPressureWarning = newIsCarPressureWarning;

    QDBusReply<void> reply = dbusclient->call("setIsCarPressureWarning", m_isCarPressureWarning);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsCarPressureWarning:" << reply.error().message(); }

    emit isCarPressureWarningChanged();
}

bool DbusClient::isCarChildSeatWarning() const
{
    return m_isCarChildSeatWarning;
}

void DbusClient::setIsCarChildSeatWarning(bool newIsCarChildSeatWarning)
{
    if (m_isCarChildSeatWarning == newIsCarChildSeatWarning)
        return;
    m_isCarChildSeatWarning = newIsCarChildSeatWarning;

    QDBusReply<void> reply = dbusclient->call("setIsCarChildSeatWarning", m_isCarChildSeatWarning);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsCarChildSeatWarning:" << reply.error().message(); }

    emit isCarChildSeatWarningChanged();
}

bool DbusClient::isCarTractionControlWarning() const
{
    return m_isCarTractionControlWarning;
}

void DbusClient::setIsCarTractionControlWarning(bool newIsCarTractionControlWarning)
{
    if (m_isCarTractionControlWarning == newIsCarTractionControlWarning)
        return;
    m_isCarTractionControlWarning = newIsCarTractionControlWarning;

    QDBusReply<void> reply = dbusclient->call("setIsCarTractionControlWarning", m_isCarTractionControlWarning);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsCarTractionControlWarning:" << reply.error().message(); }

    emit isCarTractionControlWarningChanged();
}

bool DbusClient::isSeatBeltWarning() const
{
    return m_isSeatBeltWarning;
}

void DbusClient::setIsSeatBeltWarning(bool newIsSeatBeltWarning)
{
    if (m_isSeatBeltWarning == newIsSeatBeltWarning)
        return;
    m_isSeatBeltWarning = newIsSeatBeltWarning;

    QDBusReply<void> reply = dbusclient->call("setIsSeatBeltWarning", m_isSeatBeltWarning);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsSeatBeltWarning:" << reply.error().message(); }

    emit isSeatBeltWarningChanged();
}

bool DbusClient::isHighBeamOn() const
{
    return m_isHighBeamOn;
}

void DbusClient::setIsHighBeamOn(bool newIsHighBeamOn)
{
    if (m_isHighBeamOn == newIsHighBeamOn)
        return;
    m_isHighBeamOn = newIsHighBeamOn;

    QDBusReply<void> reply = dbusclient->call("setIsHighBeamOn", m_isHighBeamOn);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsHighBeamOn:" << reply.error().message(); }

    emit isHighBeamOnChanged();
}

bool DbusClient::isCarBrakeParkingOn() const
{
    return m_isCarBrakeParkingOn;
}

void DbusClient::setIsCarBrakeParkingOn(bool newIsCarBrakeParkingOn)
{
    if (m_isCarBrakeParkingOn == newIsCarBrakeParkingOn)
        return;
    m_isCarBrakeParkingOn = newIsCarBrakeParkingOn;

    QDBusReply<void> reply = dbusclient->call("setIsCarBrakeParkingOn", m_isCarBrakeParkingOn);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsCarBrakeParkingOn:" << reply.error().message(); }

    emit isCarBrakeParkingOnChanged();
}

bool DbusClient::isAbsOn() const
{
    return m_isAbsOn;
}

void DbusClient::setIsAbsOn(bool newIsAbsOn)
{
    if (m_isAbsOn == newIsAbsOn)
        return;
    m_isAbsOn = newIsAbsOn;

    QDBusReply<void> reply = dbusclient->call("setIsAbsOn", m_isAbsOn);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsAbsOn:" << reply.error().message(); }

    emit isAbsOnChanged();
}


bool DbusClient::isLeftIndicatorOn() const
{
    return m_isLeftIndicatorOn;
}

void DbusClient::setIsLeftIndicatorOn(bool newIsLeftIndicatorOn)
{
    if (m_isLeftIndicatorOn == newIsLeftIndicatorOn)
        return;
    m_isLeftIndicatorOn = newIsLeftIndicatorOn;

    QDBusReply<void> reply = dbusclient->call("setIsLeftIndicatorOn", m_isLeftIndicatorOn);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsLeftIndicatorOn:" << reply.error().message(); }

    emit isLeftIndicatorOnChanged();
}

bool DbusClient::isRightIndicatorOn() const
{
    return m_isRightIndicatorOn;
}

void DbusClient::setIsRightIndicatorOn(bool newIsRightIndicatorOn)
{
    if (m_isRightIndicatorOn == newIsRightIndicatorOn)
        return;
    m_isRightIndicatorOn = newIsRightIndicatorOn;
    QDBusReply<void> reply = dbusclient->call("setIsRightIndicatorOn", m_isRightIndicatorOn);
    if (!reply.isValid()) {
        qDebug() << "Error calling setIsRightIndicatorOn:" << reply.error().message(); }

    emit isRightIndicatorOnChanged();
}


DbusClient::DrivingModeList DbusClient::driveMode() const
{
    return m_driveMode;
}

void DbusClient::setDriveMode(DbusClient::DrivingModeList newDriveMode)
{

    if (m_driveMode == newDriveMode)
        return;

    m_driveMode = newDriveMode;
    QDBusReply<void> reply = dbusclient->call("setDriveMode", static_cast<int>(newDriveMode));
    if (!reply.isValid()) {
        qDebug() << "Error calling setDriveMode:" << reply.error().message(); }

    emit driveModeChanged();
}

//-----------------------------------------------------------SpeedoMeter-----------------------------------------------

int DbusClient::speedoMeterStartingRange() const
{
    return m_speedoMeterStartingRange;
}

void DbusClient::setSpeedoMeterStartingRange(int newSpeedoMeterStartingRange)
{
    if (m_speedoMeterStartingRange == newSpeedoMeterStartingRange)
        return;
    m_speedoMeterStartingRange = newSpeedoMeterStartingRange;
    emit speedoMeterStartingRangeChanged();
}

int DbusClient::speedoMeterStopingRange() const
{
    return m_speedoMeterStopingRange;
}

void DbusClient::setSpeedoMeterStopingRange(int newSpeedoMeterStopingRange)
{
    if (m_speedoMeterStopingRange == newSpeedoMeterStopingRange)
        return;
    m_speedoMeterStopingRange = newSpeedoMeterStopingRange;
    emit speedoMeterStopingRangeChanged();
}

void DbusClient::speedoMeterRandSpeedGenerator()
{
    std::pair<int, int> speedoMeterNumber;
    // speedoMeterNumber = startingAndEndingRandNumberForSpeedoMeter();
    speedoMeterNumber.first = speedoMeterStartingRange();
    speedoMeterNumber.second = speedoMeterStopingRange();
    qDebug() << "startingRange" << speedoMeterNumber.first;
    qDebug() << "stopingRange" << speedoMeterNumber.second;

    int speedGenerated= QRandomGenerator::global()->bounded(speedoMeterNumber.first, speedoMeterNumber.second);
    qDebug() << "Speed Generated" << speedGenerated;
    QDBusReply<void> reply = dbusclient->call("setSpeed", speedGenerated);
    if (!reply.isValid()) {
        qDebug() << "Error calling setSpeedoMeterRange:" << reply.error().message(); }
}

// -----------------------------------------------------------RPM-------------------------------------------------
int DbusClient::rpmMeterStartingRange() const
{
    return m_rpmMeterStartingRange;
}

void DbusClient::setRpmMeterStartingRange(int newRpmMeterStartingRange)
{
    if (m_rpmMeterStartingRange == newRpmMeterStartingRange)
        return;
    m_rpmMeterStartingRange = newRpmMeterStartingRange;
    emit rpmMeterStartingRangeChanged();
}

int DbusClient::rpmMeterEndingRange() const
{
    return m_rpmMeterEndingRange;
}

void DbusClient::setRpmMeterEndingRange(int newRpmMeterEndingRange)
{
    if (m_rpmMeterEndingRange == newRpmMeterEndingRange)
        return;
    m_rpmMeterEndingRange = newRpmMeterEndingRange;
    emit rpmMeterEndingRangeChanged();
}

void DbusClient::rpmMeterRandRPMGenerator()
{
    std::pair<int, int> rpmMeterNumber;
    float rpmGeneratedInFloat = 0;
    rpmMeterNumber.first = rpmMeterStartingRange();
    rpmMeterNumber.second = rpmMeterEndingRange();

    qDebug() << "startingRange of RPM" << rpmMeterNumber.first;
    qDebug() << "endingRange of RPM" << rpmMeterNumber.second;

    int rpmGenerated = QRandomGenerator::global()->bounded(rpmMeterNumber.first, rpmMeterNumber.second + 1);

    qDebug() << "rpm created" << rpmGenerated;

    if(2000 >= rpmGenerated && 0 < rpmGenerated)
    {
        qDebug() << "1" ;
        rpmGeneratedInFloat = rpmGenerated * 0.04;
    }
    else if (4000 >= rpmGenerated && 2000 < rpmGenerated)
    {
        qDebug() << "2" ;
        rpmGeneratedInFloat = (2000 * 0.04) + (rpmGenerated - 2000) * 0.05;
    }
    else if (6000 >= rpmGenerated && 4000 < rpmGenerated)
    {
        qDebug() << "3" ;
        rpmGeneratedInFloat = ((2000) * (0.04 + 0.05)) + (rpmGenerated - 4000) * 0.04;
    }

    rpmGenerated = static_cast<int>((rpmGeneratedInFloat) - 40 );

    qDebug() << "Angle created" << rpmGenerated;

    // rpmMeterNumber = startingAndEndingRandNumberForRPMMeter();
    QDBusReply<void> reply = dbusclient->call("setRpm", rpmGenerated);

    if (!reply.isValid()) {
        qDebug() << "Error calling setRPMMeterRange:" << reply.error().message(); }
}

int DbusClient::fuelRange() const
{
    return m_fuelRange;
}

void DbusClient::setFuelRange(int newFuelRange)
{

    qDebug() << "Fuel range set to " << newFuelRange;
    if (m_fuelRange == newFuelRange)
        return;
    m_fuelRange = newFuelRange;

    newFuelRange = (newFuelRange * 60)/100;

    qDebug() << "Fuel range set to " << newFuelRange;

    QDBusReply<void> reply = dbusclient->call("setFuelRange", static_cast<int>(newFuelRange));
    if (!reply.isValid()) {
        qDebug() << "Error calling setFuelRange:" << reply.error().message(); }
    emit fuelRangeChanged();
}
