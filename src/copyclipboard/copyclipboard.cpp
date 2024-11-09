#include "copyclipboard.h"
#include "ui_copyclipboard.h"
#include <QShortcut>
#include <QEvent>

copyClipboard::copyClipboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::copyClipboard)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint); // Make it floating and frameless

    // Set focus policy to enable focusOutEvent
    setFocusPolicy(Qt::StrongFocus);
    ui->title->setAlignment(Qt::AlignCenter);
}

copyClipboard::~copyClipboard()
{
    delete ui;
}

void copyClipboard::showWindow()
{
    show();
    activateWindow(); // Brings the window to the front
    setFocus();       // Ensures the window has focus
}

void copyClipboard::focusOutEvent(QFocusEvent *event)
{
    QWidget::focusOutEvent(event);
    hide(); // Hide the window when focus is lost
}

void copyClipboard::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);
    hide(); // Hide the window when mouse is clicked outside
}
