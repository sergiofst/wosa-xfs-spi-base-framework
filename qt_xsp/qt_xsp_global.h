#ifndef QT_XSP_GLOBAL_H
#define QT_XSP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QT_XSP_LIBRARY)
#  define QT_XSPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QT_XSPSHARED_EXPORT Q_DECL_IMPORT
#endif

#include <XFSSPI.H>

#endif // QT_XSP_GLOBAL_H
