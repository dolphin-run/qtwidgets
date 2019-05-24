#ifndef QWINQUICKWINDOW_H
#define QWINQUICKWINDOW_H

#ifdef QWIN_LIB
# define QWIN_EXPORT Q_DECL_EXPORT
#else
# define QWIN_EXPORT Q_DECL_IMPORT
#endif

class QWIN_EXPORT QWinQuickWindow
{
public:
    static void qmlRegisterType(const char *uri, int versionMajor, int versionMinor, const char *qmlName);
};

#endif // QWINQUICKWINDOW_H
