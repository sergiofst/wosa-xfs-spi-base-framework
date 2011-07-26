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

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE35CC31D
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = qt_xsp.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}




win32: LIBS += -L$$PWD/../depends/LIB/ -lmsxfs
win32: LIBS += -L$$PWD/../depends/LIB/ -lxfs_conf
win32: LIBS += -L$$PWD/../depends/LIB/ -lxfs_supp

INCLUDEPATH += $$PWD/../depends/INCLUDE
DEPENDPATH += $$PWD/../depends/INCLUDE
