#include "mainwindow.h"
#include "ui_mainwindow.h"


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

void MainWindow::InitializeGame(GameType gameType)
{
    InitializeScenes(gameType);
}

void MainWindow::InitializeScenes(GameType gameType)
{
    scenes.clear();
    QGraphicsScene *scene = nullptr;

    switch(gameType){
    case CRAZY_ARCADE:
    {
        scene = new QGraphicsScene(this);
        scenes.insert(MAP_1, scene);
    } break;

    default:
        break;
    }
}
