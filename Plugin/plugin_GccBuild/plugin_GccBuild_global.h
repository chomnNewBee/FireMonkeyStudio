
#ifndef PLUGIN_GCCBUILD_GLOBAL_H
#define PLUGIN_GCCBUILD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLUGIN_GCCBUILD_LIBRARY)
#  define PLUGIN_GCCBUILD_EXPORT Q_DECL_EXPORT
#else
#  define PLUGIN_GCCBUILD_EXPORT Q_DECL_IMPORT
#endif

#endif // PLUGIN_GCCBUILD_GLOBAL_H
