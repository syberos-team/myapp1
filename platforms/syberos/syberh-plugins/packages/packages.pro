#-------------------------------------------------
#
# Project created by QtCreator 2020-04-28T10:08:46
#
#-------------------------------------------------

QT       += widgets

TARGET = packages
TEMPLATE = lib

DEFINES += PACKAGES_LIBRARY

SOURCES += packages.cpp

HEADERS += packages.h\
        packages_global.h

CONFIG += link_pkgconfig
CONFIG += C++11
CONFIG += plugin

PKGCONFIG += syberos-qt

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