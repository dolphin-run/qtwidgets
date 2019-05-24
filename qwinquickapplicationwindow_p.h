#ifndef QWINQUICKAPPLICATIONWINDOW_P_H
#define QWINQUICKAPPLICATIONWINDOW_P_H

#include "5.9.5/QtQuickTemplates2/private/qquickapplicationwindow_p.h"
#include "Windows.h"
#include "Windowsx.h"

class QWinQuickApplicationWindow : public QQuickApplicationWindow
{
    Q_OBJECT
public:
    QWinQuickApplicationWindow(QWindow *parent = nullptr);
    LRESULT HitTestNCA(WPARAM wParam, LPARAM lParam);
    LRESULT CustomCaptionProc(UINT message, WPARAM wParam, LPARAM lParam, bool *procOk);

protected:
    virtual bool hitTopMenu(int x, int y);
    bool nativeEvent(const QByteArray &eventType, void *message, long *result) override;

private:
    HWND hWnd;

    int LEFTEXTENDWIDTH = 4;
    int RIGHTEXTENDWIDTH = 4;
    int BOTTOMEXTENDWIDTH = 4;
    int TOPEXTENDWIDTH = 40;
};

#endif // QWINQUICKAPPLICATIONWINDOW_P_H
