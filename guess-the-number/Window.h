/*
 * guess-the-number -- a number guessing game
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>

class Game;

class Window : public QWidget
{
    Q_OBJECT

    public:
        Window(QWidget* parent=0);

    private:
        Game* m_game;
        QLCDNumber* m_scoreBoard;
        QLineEdit* m_guessEdit;
        QPushButton* m_guessButton;

        QWidget* makeGuessWidget();

    private slots:
        void onButtonClicked();
        void onGuess(int n);
        void onGuessTooHigh(int n);
        void onGuessTooLow(int n);
        void onGuessCorrect(int n);
        void onGameOver();
        void onCheat(int secret);
};

#endif // WINDOW_H
