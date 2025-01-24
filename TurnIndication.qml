import QtQuick 2.0

Item {
    id: turnIndication
    width: 75
    height: 90

    Image {
        id: turnIndicationGray
        source: "images/gray-turn.png"
    }

    Image {
        id: turnIndicationGreen
        opacity: 0
        source: "images/green-turn.png"
    }

    SequentialAnimation {
        running: true
        loops: -1
        PauseAnimation {
            duration: 1000 // Wait for 1000ms
        }
        NumberAnimation {
            target: turnIndicationGreen
            property: 'opacity'
            to: 1.0
            duration: 500 // Then fade away for 500ms
        }
        NumberAnimation {
            target: turnIndicationGreen
            property: 'opacity'
            to: 0
            duration: 500
        }

    }
}
