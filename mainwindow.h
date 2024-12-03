#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override; // Объявление метода keyPressEvent

private slots:
    void handleKeyPress(QString key);

private:
    Ui::MainWindow *ui;
    QVector<QLineEdit*> lineEdits;
    QString targetWord;
    int currentRow;
    int currentColumn;

    void setupGame();
    void checkWord(const QString &guess); // Объявление метода checkWord
    void updateColors(const QString &guess);
    void resetGame(); // Объявление метода resetGame
};

#endif // MAINWINDOW_H
