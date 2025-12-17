#include "applewindow.h"
#include "./ui_applewindow.h"

AppleWindow::AppleWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AppleWindow)
{
    ui->setupUi(this);
    ui->editor->setPlainText("Hello Class");
    connect(ui->actionSave, &QAction::triggered, this, &AppleWindow::save);
}

AppleWindow::~AppleWindow()
{
    delete ui;
}

void AppleWindow::save()
{
    auto text = ui->editor->toPlainText();
    qDebug() << "Saving" << text;
}
