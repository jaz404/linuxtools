#ifndef COPYCLIPBOARD_H
#define COPYCLIPBOARD_H

#include <QWidget>
#include <QFocusEvent>
#include <QMouseEvent>

namespace Ui {
class copyClipboard;
}

class copyClipboard : public QWidget
{
    Q_OBJECT

public:
    explicit copyClipboard(QWidget *parent = nullptr);
    ~copyClipboard();
    void setShortcutKey(QString key);
    void showWindow();

protected:
    void focusOutEvent(QFocusEvent *event) override; // Declaring the override
    void mousePressEvent(QMouseEvent *event) override; // Declaring the override

private:
    Ui::copyClipboard *ui;
};

#endif // COPYCLIPBOARD_H
