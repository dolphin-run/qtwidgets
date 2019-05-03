#ifndef QWINWIDGET_H
#define QWINWIDGET_H

#include <QWidget>

#ifdef QWIN_LIB
# define QWIN_EXPORT Q_DECL_EXPORT
#else
# define QWIN_EXPORT Q_DECL_IMPORT
#endif

class QWinWidgetPrivate;
class QWIN_EXPORT QWinWidget : public QWidget
{
    Q_OBJECT
public:
    QWinWidget();

protected:
    virtual bool hitTopMenu(int x, int y);
    bool nativeEvent(const QByteArray &eventType, void *message, long *result) override;

private:
    QWinWidgetPrivate *d_ptr;
    Q_DECLARE_PRIVATE(QWinWidget)
};

#endif // QWINWIDGET_H
