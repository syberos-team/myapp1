#-------------------------------------------------
#
# Project created by QtCreator 2020-04-15T22:52:42
#
#-------------------------------------------------

QT       += widgets

TARGET = telephony
TEMPLATE = lib

DEFINES += TELEPHONY_LIBRARY

CONFIG += plugin
CONFIG += c++11

SOURCES += telephony.cpp

HEADERS += telephony.h\
        telephony_global.h

INCLUDEPATH += $$[QT_INSTALL_HEADERS]/../syberos_application
LIBS += -L$$[QT_INSTALL_LIBS] -lsyberos-application


INCLUDEPATH += $$absolute_path("nativesdk/src", $$SYBERH_APP)
INCLUDEPATH += $$absolute_path("pluginmanager/src", $$SYBERH_APP)

LIB_OUT_DIR = $$absolute_path("lib", $$SYBERH_APP)
LIBS += -L$$LIB_OUT_DIR -lnativesdk -lpluginmanager

DESTDIR = $$absolute_path("plugins", $$SYBERH_APP)

CONFIG(release, debug|release){
    QMAKE_POST_LINK=$(STRIP) $(DESTDIR)$(TARGET)
}