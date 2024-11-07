#include "copyclipboard.h"
/*
 * Use QWidget: This can act as your base window.

Set Window Flags: Use setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint). This gives the window a lightweight, floating style, without a title bar or minimize/maximize buttons. Qt::Tool keeps it above the main window but does not force it to take focus.

Manage Focus: To emulate the clipboard's behavior, connect the focusOutEvent to close or hide the window when it loses focus, making it disappear when you click away.

Optional Styling: You can use QGraphicsDropShadowEffect for shadow effects to make it appear as a floating panel.
*/
copyclipboard::copyclipboard(QWidget *parent)
    : QWidget{parent}
{

}
