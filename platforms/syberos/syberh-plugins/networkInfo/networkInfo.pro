#-------------------------------------------------
#
# Project created by QtCreator 2020-04-27T19:28:38
#
#-------------------------------------------------

QT       += network

TARGET = networkInfo
TEMPLATE = lib

DEFINES += NETWORKINFO_LIBRARY

SOURCES += networkinfo.cpp

HEADERS += networkinfo.h\
        networkinfo_global.h

CONFIG += link_pkgconfig
CONFIG += C++11
CONFIG += plugin

PKGCONFIG += syberos-qt

INCLUDEPATH += $$absolute_path("nativesdk/src", $$SYBERH_APP)
INCLUDEPATH += $$absolute_path("pluginmanager/src", $$SYBERH_APP)

LIB_OUT_DIR = $$absolute_path("lib", $$SYBERH_APP)
LIBS += -L$$LIB_OUT_DIR -lnativesdk -lpluginmanager


DESTDIR = $$absolute_path("plugins", $$SYBERH_APP)

CONFIG(release, debug|release){
    QMAKE_POST_LINK=$(STRIP) $(DESTDIR)$(TARGET)
}