#-------------------------------------------------
#
# Project created by QtCreator 2015-11-14T13:32:16
#
#-------------------------------------------------

QT       += core gui

QT += widgets
CONFIG +=c++11
TARGET = Hello
TEMPLATE = app

#CONFIG += staticlib
#CONFIG += static

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
QT += network

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        /home/taz/QTApps/Hello/../../Documents/openssl/libssl.so \
        $$PWD/../../Documents/openssl/libcrypto.so
}
