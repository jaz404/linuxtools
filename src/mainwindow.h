#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "copyclipboard/copyclipboard.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_homeButton_clicked();

    void on_copyButton_clicked();

    void on_aboutButton_clicked();

    void on_settingsButton_clicked();

    void showCopyClipboard();

private:
    Ui::MainWindow *ui;
    copyClipboard *copyclipboard;
};
#endif // MAINWINDOW_H
