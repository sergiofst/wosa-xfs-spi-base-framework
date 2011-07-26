#-------------------------------------------------
#
# Project created by QtCreator 2011-07-26T15:53:01
#
#-------------------------------------------------

QT       += network xml xmlpatterns

QT       -= gui

TARGET = qt_xsp
TEMPLATE = lib

DEFINES += QT_XSP_LIBRARY

SOURCES += qt_xsp.cpp

HEADERS += qt_xsp.h\
        qt_xsp_global.h

DEF_FILE += $$PWD/out.def



win32: LIBS += -L$$PWD/../depends/LIB/ -lmsxfs
win32: LIBS += -L$$PWD/../depends/LIB/ -lxfs_conf
win32: LIBS += -L$$PWD/../depends/LIB/ -lxfs_supp

INCLUDEPATH += $$PWD/../depends/INCLUDE
DEPENDPATH += $$PWD/../depends/INCLUDE

OTHER_FILES += \
    out.def
