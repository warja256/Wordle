#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QRandomGenerator>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , currentRow(0)
    , currentColumn(0)
{
    ui->setupUi(this);
    setupGame();
    ui->centralwidget->setStyleSheet("background-color: #1C1C1E;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupGame()
{
    // Список слов для отгадывания
    QVector<QString> words = {"БАЛКА", "ВЕНИК", "ГОРКА","ЗАПАД", "ИГРОК", "МАНИЯ", "НАБОР", "ПАЛКА", "РАДИО", "САЛАТ", "ТАБЛО", "ФАКЕЛ", "ЭКРАН"};
    targetWord = words[QRandomGenerator::global()->bounded(words.size())];

    // Инициализация QLineEdit
    lineEdits = {ui->lineEdit_00, ui->lineEdit_01, ui->lineEdit_02, ui->lineEdit_03, ui->lineEdit_04,
                 ui->lineEdit_10, ui->lineEdit_11, ui->lineEdit_12, ui->lineEdit_13, ui->lineEdit_14,
                 ui->lineEdit_20, ui->lineEdit_21, ui->lineEdit_22, ui->lineEdit_23, ui->lineEdit_24,
                 ui->lineEdit_30, ui->lineEdit_31, ui->lineEdit_32, ui->lineEdit_33, ui->lineEdit_34,
                 ui->lineEdit_40, ui->lineEdit_41, ui->lineEdit_42, ui->lineEdit_43, ui->lineEdit_44,
                 ui->lineEdit_50, ui->lineEdit_51, ui->lineEdit_52, ui->lineEdit_53, ui->lineEdit_54, ui->lineEdit, ui->lineEdit_2, ui->lineEdit_3};

    for (QLineEdit* lineEdit : lineEdits) {
        lineEdit->setReadOnly(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setStyleSheet("background-color: #121213; color: white; border: 2px solid #3A3A3C; border-radius: 10px;");
        lineEdit->setFixedSize(50, 50);
        lineEdit->setFocusPolicy(Qt::NoFocus);
    }
    ui->lineEdit->setStyleSheet("background-color: #5F5F5F; border-radius: 10px; border: 2px solid #3A3A3C;");
    ui->lineEdit_2->setStyleSheet("background-color: #FFDD2D; border-radius: 10px; border: 2px solid #3A3A3C;");
    ui->lineEdit_3->setStyleSheet("background-color: #FFFFFF; border-radius: 10px; border: 2px solid #3A3A3C;");
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key pressed:" << event->key();

    if (event->key() == Qt::Key_Backspace || event->key() == Qt::Key_Delete) {
        if (currentColumn > 0) {
            currentColumn--;
            lineEdits[currentRow * 5 + currentColumn]->clear();
        }
        return;
    } else if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) {
        if (currentColumn == 5) {
            QString guess;
            for (int i = 0; i < 5; ++i) {
                guess += lineEdits[currentRow * 5 + i]->text();
            }
            checkWord(guess);
            currentRow++;
            currentColumn = 0;
        }
    } else {
        QString key = event->text().toUpper();
        if (key.length() == 1 && key.at(0).isLetter()) {
            handleKeyPress(key);
        }
    }
}

void MainWindow::handleKeyPress(QString key)
{
    if (currentColumn < 5) {
        lineEdits[currentRow * 5 + currentColumn]->setText(key);
        currentColumn++;
    }
}

void MainWindow::checkWord(const QString &guess)
{
    updateColors(guess);
    if (guess == targetWord) {
        QMessageBox::information(this, "Успех", "Вы угадали слово!");
        resetGame();
    } else if (currentRow == 5) {
        QMessageBox::information(this, "Проигрыш", QString("Вы не угадали слово! Слово было - %1").arg(targetWord));
        resetGame();
    }
}

void MainWindow::updateColors(const QString &guess)
{
    QSet<QChar> presentChars;
    for (int i = 0; i < 5; ++i) {
        QChar letter = guess.at(i);
        if (targetWord.at(i) == letter) {
            lineEdits[currentRow * 5 + i]->setStyleSheet("background-color: #FFDD2D; color: black; border-radius: 10px; border: 2px solid #3A3A3C;");
        } else if (targetWord.contains(letter) && !presentChars.contains(letter)) {
            lineEdits[currentRow * 5 + i]->setStyleSheet("background-color: #FFFFFF; color: black; border-radius: 10px; border: 2px solid #3A3A3C;");
            presentChars.insert(letter);
        } else {
            lineEdits[currentRow * 5 + i]->setStyleSheet("background-color: #5F5F5F; color: white; border-radius: 10px; border: 2px solid #3A3A3C;");
        }
    }
}

void MainWindow::resetGame()
{
    for (QLineEdit* lineEdit : lineEdits) {
        lineEdit->setText("");
        lineEdit->setStyleSheet("background-color: #121213; color: white; border: 2px solid #3A3A3C;");
    }
    currentRow = 0;
    currentColumn = 0;
    setupGame();
}
