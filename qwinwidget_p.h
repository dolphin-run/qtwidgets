#ifndef QWINWIDGETPRIVATE_H
#define QWINWIDGETPRIVATE_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include "Windows.h"
#include "Windowsx.h"

class QWinWidgetPrivate
{
    friend class QWinWidget;
protected:
    QWinWidgetPrivate(QWinWidget *parent);
    LRESULT HitTestNCA(WPARAM wParam, LPARAM lParam);
    LRESULT CustomCaptionProc(UINT message, WPARAM wParam, LPARAM lParam, bool *procOk);

private:
    HWND hWnd;

    int LEFTEXTENDWIDTH = 4;
    int RIGHTEXTENDWIDTH = 4;
    int BOTTOMEXTENDWIDTH = 4;
    int TOPEXTENDWIDTH = 40;
    
    Q_DECLARE_PUBLIC(QWinWidget)
    QWinWidget *q_ptr;
};

#endif // QWINWIDGETPRIVATE_H
