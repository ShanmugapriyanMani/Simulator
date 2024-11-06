import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import com.client.dbus

Window {
    width: 1920
    height: 1080
    visible: true
    title: qsTr("Hello World")

    property bool isOilWarning: false

    property bool isCarBatteryWarning: false
    property bool isCarPressureWarning: false
    property bool isCarChildSeatWarning: false
    property bool isCarTractionControlWarning: false
    property bool isSeatBeltWarning: false
    property bool isHighBeamOn: false
    property bool isCarBrakeParkingOn: false
    property bool isAbsOn: false

    property bool isLeftIndicatorOn: false
    property bool isRightIndicatorOn: false

    property color speedoButtonColor: "lightblue"



    ScrollView {
        anchors.fill: parent
        clip: true
        Column {
            spacing: 20

            Row {
                spacing: 50

                Text {
                    text: "Oil Warning:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: booleanComboBox
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isOilWarning = (booleanComboBox.currentText === "true") ? true : false;
                        MyDbusClient.setIsWarningOil(isOilWarning);
                        console.log("Oil Warning:", isOilWarning);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Car Battery Warning:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: carBatteryWarningId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isCarBatteryWarning = (carBatteryWarningId.currentText === "true") ? true : false;
                        MyDbusClient.setIsCarBatteryWarning(isCarBatteryWarning);
                        console.log("Car Battery Warning:", isCarBatteryWarning);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Car Pressure Warning:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: carPressureWarningId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isCarPressureWarning = (carPressureWarningId.currentText === "true") ? true : false;
                        MyDbusClient.setIsCarPressureWarning(isCarPressureWarning);
                        console.log("Car Pressure Warning:", isCarPressureWarning);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Car Child Seat Warning:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: carChildSeatWarningId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isCarChildSeatWarning = (carChildSeatWarningId.currentText === "true") ? true : false;
                        MyDbusClient.setIsCarChildSeatWarning(isCarChildSeatWarning);
                        console.log("Car Child Seat Warning:", isCarChildSeatWarning);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Car Traction Control Warning:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: carTractionControlWarningId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isCarTractionControlWarning = (carTractionControlWarningId.currentText === "true") ? true : false;
                        MyDbusClient.setIsCarTractionControlWarning(isCarTractionControlWarning);
                        console.log("Car TractionControl Warning:", isCarTractionControlWarning);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Seat Belt Warning:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: seatBeltWarningId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isSeatBeltWarning = (seatBeltWarningId.currentText === "true") ? true : false;
                        MyDbusClient.setIsSeatBeltWarning(isSeatBeltWarning);
                        console.log("Seat Belt Warning:", isSeatBeltWarning);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "High Beam ON:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: highBeamOnId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isHighBeamOn = (highBeamOnId.currentText === "true") ? true : false;
                        MyDbusClient.setIsHighBeamOn(isHighBeamOn);
                        console.log("High Beam On:", isHighBeamOn);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Car Brake Parking ON:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: carBrakeParkingOnId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isCarBrakeParkingOn = (carBrakeParkingOnId.currentText === "true") ? true : false;
                        MyDbusClient.setIsCarBrakeParkingOn(isCarBrakeParkingOn);
                        console.log("Car Brake Parking On:", isCarBrakeParkingOn);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "ABS ON:"
                    font.pointSize: 16
                }

                ComboBox {
                    id: absOnId
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isAbsOn = (absOnId.currentText === "true") ? true : false;
                        MyDbusClient.setIsAbsOn(isAbsOn);
                        console.log("Abs On:", isAbsOn);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Left indicator ON:"
                    font.pointSize: 16
                    color:"black"
                }

                ComboBox {
                    id: leftIndicatorOn
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isLeftIndicatorOn = (leftIndicatorOn.currentText === "true") ? true : false;
                        MyDbusClient.setIsLeftIndicatorOn(isLeftIndicatorOn);
                        console.log("Left indicator On:", isLeftIndicatorOn);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Right indicator ON:"
                    font.pointSize: 16
                    color:"black"
                }

                ComboBox {
                    id: rightIndicatorOn
                    model: ["true", "false"]
                    currentIndex: 1

                    onActivated: {
                        isRightIndicatorOn = (rightIndicatorOn.currentText === "true") ? true : false;
                        MyDbusClient.setIsRightIndicatorOn(isRightIndicatorOn);
                        console.log("Right indicator On:", isRightIndicatorOn);
                    }
                }
            }

            Row {
                spacing: 50

                Text {
                    text: "Drive Mode Selector:"
                    font.pointSize: 16
                    color:"black"
                }

                ComboBox {
                    id: driveModeSelector
                    model: ["REVERSE", "PARKING","DRIVE"]
                    currentIndex: 1

                    onActivated: {
                        (driveModeSelector.currentText === "REVERSE") ? MyDbusClient.setDriveMode(MyDbusClient.REVERSE) :
                        (driveModeSelector.currentText === "PARKING") ? MyDbusClient.setDriveMode(MyDbusClient.PARKING) :
                        (driveModeSelector.currentText === "DRIVE") ? MyDbusClient.setDriveMode(MyDbusClient.DRIVE) : MyDbusClient.setDriveMode(MyDbusClient.PARKING);

                        console.log("Drive Mode Set to :", MyDbusClient.driveMode);
                    }
                }
            }
            Row{
                Text{
                    id: speedoMeter
                    text: qsTr("Set Speedometer inputs")
                    color: "black"
                    font.pointSize: 16
                }
            }

            Row {
                spacing: 50
                Column{
                    id:speedoMeterStartingPosContainer
                    spacing: 20
                    Text {
                        id: idStart
                        text: qsTr("Input Starting range")
                        color: "black"
                    }

                    ComboBox{
                        id: speedoMeterStartingPos
                        model: ListModel {
                                id: modelStartingPos
                                ListElement { value: 260}
                                ListElement { value: 240}
                                ListElement { value: 220}
                                ListElement { value: 200}
                                ListElement { value: 180}
                                ListElement { value: 160}
                                ListElement { value: 140}
                                ListElement { value: 120}
                                ListElement { value: 100}
                                ListElement { value: 80}
                                ListElement { value: 60}
                                ListElement { value: 40}
                                ListElement { value: 20}
                                ListElement { value: 0}
                            }
                        delegate: ItemDelegate {
                                text: model.value
                            }
                        onActivated: {
                                MyDbusClient.setSpeedoMeterStartingRange(model.get(currentIndex).value);
                                console.log(model.get(currentIndex).value);

                                let startValue = model.get(currentIndex).value;
                                modelEndingRange.clear();
                                for (let i = 0; i < modelStartingPos.count; i++) {
                                    let endValue = modelStartingPos.get(i).value;
                                    if (endValue > startValue) {
                                        modelEndingRange.append({ value: endValue });
                                    }
                                }
                            }
                    }
                }

                Column{
                    id:speedoMeterEndingPosContainer
                    spacing:20

                    Text {
                        id: idStop
                        text: qsTr("Input Ending range")
                        color: "black"
                    }

                    ComboBox{
                        id: speedoMeterEndingPos
                        model: ListModel {
                                id: modelEndingRange
                                ListElement { value: 260}
                                ListElement { value: 240}
                                ListElement { value: 220}
                                ListElement { value: 200}
                                ListElement { value: 180}
                                ListElement { value: 160}
                                ListElement { value: 140}
                                ListElement { value: 120}
                                ListElement { value: 100}
                                ListElement { value: 80}
                                ListElement { value: 60}
                                ListElement { value: 40}
                                ListElement { value: 20}
                                ListElement { value: 0}
                            }
                        delegate: ItemDelegate {
                                text: model.value
                            }
                        onActivated: {
                                MyDbusClient.setSpeedoMeterStopingRange(model.get(currentIndex).value);
                                console.log(model.get(currentIndex).value);
                            }
                    }
                }

            }

            Row{
                Text {
                    text: "Generate random speed: "
                    font.pointSize: 16
                    color:"black"
                }

                Button {
                    id: speedoMeterGeneratorId
                    text: "Generate"

                    onClicked: {
                        MyDbusClient.speedoMeterRandSpeedGenerator();
                    }
                }
            }


            // -----------------------------------------------------------RPM------------------------------------

            Row{
                Text{
                    id: rpmMeter
                    text: qsTr("Set RPM inputs")
                    color: "black"
                    font.pointSize: 16
                }
            }

            Row {
                spacing: 50
                Column{
                    id:rpmMeterStartingPosContainer
                    spacing: 20
                    Text {
                        id: idRpmStart
                        text: qsTr("Input Starting range")
                        color: "black"
                    }

                    ComboBox{
                        id: rpmMeterStartingPos
                        model: ListModel {
                                id: modelRPMStartingPos
                                ListElement { value: 6000}
                                ListElement { value: 5500}
                                ListElement { value: 5000}
                                ListElement { value: 4500}
                                ListElement { value: 4000}
                                ListElement { value: 3500}
                                ListElement { value: 3000}
                                ListElement { value: 2500}
                                ListElement { value: 2000}
                                ListElement { value: 1500}
                                ListElement { value: 1000}
                                ListElement { value: 500}
                                ListElement { value: 0}
                            }
                        delegate: ItemDelegate {
                                text: model.value
                            }
                        onActivated: {
                                MyDbusClient.setRpmMeterStartingRange(model.get(currentIndex).value);
                                console.log(model.get(currentIndex).value);
                                let startValue = model.get(currentIndex).value;
                                modelRPMEndingRange.clear();
                                for (let i = 0; i < modelRPMStartingPos.count; i++) {
                                    let endValue = modelRPMStartingPos.get(i).value;
                                    if (endValue > startValue) {
                                        modelRPMEndingRange.append({ value: endValue });
                                    }
                                }
                            }
                    }
                }

                Column{
                    id:rpmMeterEndingPosContainer
                    spacing:20

                    Text {
                        id: idrpmStop
                        text: qsTr("Input Ending range")
                        color: "black"
                    }

                    ComboBox{
                        id: rpmMeterEndingPos
                        model: ListModel {
                                id: modelRPMEndingRange
                                ListElement { value: 6000}
                                ListElement { value: 5500}
                                ListElement { value: 5000}
                                ListElement { value: 4500}
                                ListElement { value: 4000}
                                ListElement { value: 3500}
                                ListElement { value: 3000}
                                ListElement { value: 2500}
                                ListElement { value: 2000}
                                ListElement { value: 1500}
                                ListElement { value: 1000}
                                ListElement { value: 500}
                                ListElement { value: 0}
                            }
                        delegate: ItemDelegate {
                                text: model.value
                            }
                        onActivated: {
                                MyDbusClient.setRpmMeterEndingRange(model.get(currentIndex).value);
                                console.log(model.get(currentIndex).value);
                            }
                    }
                }

            }

            Row{
                Text {
                    text: "Generate random rpm: "
                    font.pointSize: 16
                    color:"black"
                }

                Button {
                    id: rpmMeterId
                    text: "Generate"

                    onClicked: {
                        MyDbusClient.rpmMeterRandRPMGenerator();
                    }
                }
            }

            Row{
                spacing:50

                Text{
                    text: "Percentage of fuel"
                    font.pointSize: 16
                    color: "black"
                }

                ComboBox{
                    id: fuelPercentageSelector
                    model: ListModel {
                            id: modelFuel
                            ListElement { value: 100}
                            ListElement { value: 80}
                            ListElement { value: 60}
                            ListElement { value: 40}
                            ListElement { value: 20}
                            ListElement { value: 0}
                        }
                    delegate: ItemDelegate {
                            text: model.value + "%"
                        }
                    onActivated: {
                            MyDbusClient.setFuelRange(modelFuel.get(currentIndex).value);
                            console.log(modelFuel.get(currentIndex).value);
                        }
                }
            }
            Row{
                spacing:50

                Rectangle{
                    width:engineTempId.implicitWidth + 20
                    height:engineTempId.implicitHeight + 20
                    color:"powderBlue"
                    x:10

                    Text{
                        anchors.centerIn: parent
                        id:engineTempId
                        text: "Percentage of engine temperature"
                        font.pointSize: 16
                        color: "black"
                    }
                }


                ComboBox{
                    id: engineTemperatureSelector
                    model: ListModel {
                            id: modelTemp
                            ListElement { value: 100}
                            ListElement { value: 80}
                            ListElement { value: 60}
                            ListElement { value: 40}
                            ListElement { value: 20}
                            ListElement { value: 0}
                        }
                    delegate: ItemDelegate {
                            text: model.value + "%"
                        }
                    onActivated: {
                            MyDbusClient.setEngineTemperatureRange(modelTemp.get(currentIndex).value);
                            console.log(modelTemp.get(currentIndex).value);
                        }
                }
            }

        }
    }
}
