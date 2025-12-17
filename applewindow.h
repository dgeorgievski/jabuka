#ifndef APPLEWINDOW_H
#define APPLEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class AppleWindow;
}
QT_END_NAMESPACE

class AppleWindow : public QMainWindow
{
    Q_OBJECT

public:
    AppleWindow(QWidget *parent = nullptr);
    ~AppleWindow();

private:
    void save();
    Ui::AppleWindow *ui;
};
#endif // APPLEWINDOW_H
