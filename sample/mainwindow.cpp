#include "mainwindow.h"
#include "ui_mainwindow.h"


enum GameType
{
    CRAZY_ARCADE,
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitializeGame(CRAZY_ARCADE);
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::InitializeGame(int gameType)
{
    InitializeScenes(gameType);
}

MainWindow::InitializeScenes(int gameType)
{
    switch (gameType) {
    case CRAZY_ARCADE:

        break;
    default:
        break;
    }
}
