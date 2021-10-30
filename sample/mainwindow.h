#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QHash>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum GameType { CRAZY_ARCADE };
    enum SceneType { MAP_1, };

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QHash<SceneType, QGraphicsScene *> scenes;
    //QMap<SceneType, QGraphicsScene> scenes;
    QGraphicsScene *currentScene;

    void InitializeGame(GameType gameType);
    void InitializeScenes(GameType gameType);
};

#endif // MAINWINDOW_H
