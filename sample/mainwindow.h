#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QList<QGraphicsScene> scenes;
    QGraphicsScene *currentScene;

    void InitializeGame(int gameType);
    void InitializeScenes(int gameType);
};

#endif // MAINWINDOW_H
