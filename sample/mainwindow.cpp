#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QImage>
#include <QDir>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Forms/mainwindow.ui
    ui->setupUi(this);

    // Initialize setup
    InitializeGame(CRAZY_ARCADE);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitializeGame(GameType gameType)
{
    // game(crazy arcade)에 필요한 scene loading해놓고..
    InitializeScenes(gameType);

    // 초기 scene 불러와서 gameView에 할당함
    auto scene = m_scenes[DEFAULT];
    ui->gameView->setScene(scene);
}

void MainWindow::InitializeScenes(GameType gameType)
{
    m_scenes.clear();
    QGraphicsScene *scene = nullptr;

    switch(gameType){
    case CRAZY_ARCADE:
    {
        scene = new QGraphicsScene(this);

        auto pixmap = new QPixmap(":/resources/check.png");
        *pixmap = pixmap->scaledToHeight(50);

        scene->setBackgroundBrush(*pixmap);

        m_scenes.insert(DEFAULT, scene);
    } break;

    default:
        break;
    }
}

