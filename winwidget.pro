
CONFIG(debug, debug|release) {
    BUILD_SUFFIX = d
} else {
}


#QT       += core gui widgets 
QT       += quick-private quickcontrols2-private quicktemplates2-private


TEMPLATE = lib
TARGET = winwidget$${BUILD_SUFFIX}

CONFIG += c++11 plugin
DEFINES += QWIN_LIB

LIBS += -L"C:\Program Files (x86)\Microsoft SDKs\Windows\v7.1A\Lib\x64" \
    -ldwmapi \
    -lgdi32

SOURCES += \
    #$$PWD/qwinwidget.cpp \
    qwinquickapplicationwindow.cpp

HEADERS += \
    #$$PWD/qwinwidget.h \
    #$$PWD/qwinwidget_p.h \
    qwinquickwindow.h \
    qwinquickapplicationwindow_p.h
