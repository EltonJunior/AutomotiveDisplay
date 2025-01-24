import QtQuick 2.12
import QtQuick.Window 2.12
import AnimationClass 1.0

Window {

    id: mainWindow
    width: 1024
    height: 600
    visible: true
    title: qsTr("AutomotiveDisplay")

    FontLoader { id: digital_7; source: "/fonts/digital-7.ttf" }

    Animation{
        id: animation
    }

    Image {
        id: background
        source: "images/ReCar_Background.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: imageCESLogo
        x: 30
        y: 500
        width: 280
        height: 80
        source: "images/CES_logo.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: imageCustomerLogo
        x: 700
        y: 500
        width: 280
        height: 80
        source: "images/Customer_logo.png"
        fillMode: Image.PreserveAspectFit
    }

    Item {
        id: leftTurn
        x: 25
        y: 400
        width: 90
        height: 90

        TurnIndication {
            id: leftTurnIndication
            rotation: 180
        }
    }

    Item {
        id: rightTurn
        x: 925
        y: 400
        width: 90
        height: 90

        TurnIndication {
            id: rightTurnIndication
        }
    }

    Text {
        id: odometerNumber
        x: 369
        y: 508
        color: "#ffffff"
        text: qsTr("337287")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
        font.family: digital_7.name
        font.pointSize: 50
    }

    Text {
        id: driverInformation
        x: 136
        y: 404
        width: 754
        height: 82
        color: "#ffffff"
        text: animation.DriverInfoVar
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 35
    }

    Text {
        id: batteryLabel
        x: 667
        y: 285
        width: 223
        height: 32
        color: "#ffffff"
        text: qsTr("Battery:")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 24
    }

    Text {
        id: batteryInformation
        x: 667
        y: 319
        width: 223
        height: 35
        color: "#ffffff"
        text: animation.BatteryInfoVar
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 24
    }

    Rectangle {
        id: batteryFilling
        x: 549
        y: 170
        width: 68
        height: animation.BatteryFillImgVar
        color: "#ffffff"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 303
    }

    Text {
        id: rangeNumber
        x: 667
        y: 173
        width: 167
        height: 116
        color: "#ffffff"
        text: animation.RangeVar
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 90
        font.family:  digital_7.name

    }

    Text {
        id: speedNumber
        x: 122
        y: 128
        width: 313
        height: 210
        color: "#ffffff"
        text: animation.VelocityVar
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 170
        font.family:  digital_7.name
    }

    Text {
        id: batteryPercentage
        x: 539
        y: 308
        color: "#ffffff"
        text: animation.BatteryVar
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
        font.pointSize: 35
        font.family: "calibri"
    }

    Item {
        id: upperLeds
        height: 45
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.rightMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0

        UpperBarLed {
            id: upperBarLed
        }

    }

    //visibility:Window.FullScreen

}
