import QtQuick 2.0
import AnimationClass 1.0

Item {
    width: 1024
    height: 50


    Animation{
        id: animation
    }

    Image {
        id: upperLed0
        x: 25
        y: 16
        visible: animation.UpperLeds0Var
        source: "images/uperLed_0.png"
    }

    Image {
        id: upperLed1
        x: 125
        y: 16
        visible: animation.UpperLeds1Var
        source: "images/uperLed_1.png"
    }

    Image {
        id: upperLed2
        x: 225
        y: 16
        visible: animation.UpperLeds2Var
        source: "images/uperLed_2.png"
    }

    Image {
        id: upperLed3
        x: 325
        y: 16
        visible: animation.UpperLeds3Var
        source: "images/uperLed_3.png"
    }

    Image {
        id: upperLed4
        x: 425
        y: 16
        visible: animation.UpperLeds4Var
        source: "images/uperLed_4.png"
    }

    Image {
        id: upperLed5
        x: 525
        y: 16
        visible: animation.UpperLeds5Var
        source: "images/uperLed_5.png"
    }

    Image {
        id: upperLed6
        x: 625
        y: 16
        visible: animation.UpperLeds6Var
        source: "images/uperLed_6.png"
    }

    Image {
        id: upperLed7
        x: 725
        y: 16
        visible: animation.UpperLeds7Var
        source: "images/uperLed_7.png"
    }

    Image {
        id: upperLed8
        x: 825
        y: 16
        visible: animation.UpperLeds8Var
        source: "images/uperLed_8.png"
    }

    Image {
        id: upperLed9
        x: 925
        y: 16
        visible: animation.UpperLeds9Var
        source: "images/uperLed_9.png"
    }


}

