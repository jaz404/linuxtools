#include "mainwindow.h"
#include "copyclipboard/copyclipboard.h"
#include "ui_mainwindow.h"
#include <QShortcut>

using namespace Qt;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize copyClipboard and shortcut
    copyclipboard = new copyClipboard(this);  // Keep it as a member if you want it accessible across the class
    copyclipboard->hide();
    QShortcut *shortcut = new QShortcut(QKeySequence("Ctrl+Shift+C"), this);
    connect(shortcut, &QShortcut::activated, this, &MainWindow::showCopyClipboard);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showCopyClipboard()
{
    copyclipboard->show();
    copyclipboard->activateWindow(); // Brings the window to the front
    copyclipboard->setFocus();       // Sets focus to the copyClipboard window
}

void MainWindow::on_homeButton_clicked()
{
    ui->stackedPages->setCurrentIndex(0);
}

void MainWindow::on_aboutButton_clicked()
{
    ui->stackedPages->setCurrentIndex(1);
}

void MainWindow::on_settingsButton_clicked()
{
    ui->stackedPages->setCurrentIndex(2);
}


void MainWindow::on_copyButton_clicked()
{
    ui->stackedPages->setCurrentIndex(3);
}





