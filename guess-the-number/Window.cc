/*
 * guess-the-number -- a number guessing game
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"
#include "Game.h"

Window::Window(QWidget* parent) : QWidget(parent)
{
    m_game = new Game();

    QVBoxLayout* layout = new QVBoxLayout;
    this->setLayout(layout);
    this->setContentsMargins(6, 6, 6, 6);

    m_scoreBoard = new QLCDNumber(2);
    layout->addWidget(m_scoreBoard);

    layout->addWidget(makeGuessWidget()); 

    connect(m_game, SIGNAL(guessMade(int)), this, SLOT(onGuess(int)));
    connect(m_game, SIGNAL(guessTooHigh(int)), this, 
            SLOT(onGuessTooHigh(int)));
    connect(m_game, SIGNAL(guessTooLow(int)), this,
            SLOT(onGuessTooLow(int)));
    connect(m_game, SIGNAL(guessCorrect(int)), this,
            SLOT(onGuessCorrect(int)));
    connect(m_game, SIGNAL(gameOver()), this, SLOT(onGameOver()));
    connect(m_game, SIGNAL(cheat(int)), this, SLOT(onCheat(int)));
}

QWidget* Window::makeGuessWidget()
{
    QWidget* widget = new QWidget;
    QHBoxLayout* layout = new QHBoxLayout;
    widget->setLayout(layout);

    m_guessEdit = new QLineEdit;
    layout->addWidget(m_guessEdit);

    m_guessButton = new QPushButton("Guess!");
    connect(m_guessButton, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    layout->addWidget(m_guessButton);

    return widget;
} 

void Window::onButtonClicked()
{
    m_game->guess(m_guessEdit->text().toInt());
}

void Window::onGuess(int count)
{
    m_scoreBoard->display(count);
    m_guessEdit->setText("");
}

void Window::onGuessTooHigh(int guess)
{
    QMessageBox::information(this, "Status", "Too high!");
}

void Window::onGuessTooLow(int guess)
{
    QMessageBox::information(this, "Status", "Too low!");
}

void Window::onGuessCorrect(int guess) 
{
    QMessageBox::information(this, "Status", "Correct!");
}

void Window::onGameOver()
{
    QMessageBox::information(this, "You win!", "Not too bad");
    m_guessButton->setEnabled(false);
}

void Window::onCheat(int cheat)
{}

