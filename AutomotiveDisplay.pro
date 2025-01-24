QT += quick

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        animation.cpp \
        gpio.cpp \
        main.cpp

RESOURCES += qml.qrc

# To running in the QT Creator IDE it might be change WIRINGPI_ACTIVE from 1 to 0
# and comment lines LIBS and INCLUDEPATH
DEFINES += WIRINGPI_ACTIVE=1

#LIBS += -L/usr/local/lib -lwiringPi
#INCLUDEPATH += /usr/local/include

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    animation.h \
    gpio.h