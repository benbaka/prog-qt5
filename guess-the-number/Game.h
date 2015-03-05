/*
 * guess-the-number -- a number guessing game
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef GAME_H
#define GAME_H

#include <QtCore>

class Game : public QObject
{
    Q_OBJECT

    public:
        Game();

        int guessCount();
        bool cheatMode();
        void enableCheatMode();
        void guess(int n);

    private:
        int m_secret;
        int m_guessCount;
        bool m_cheatMode;
        
    signals:
        void guessMade(int count);
        void guessTooHigh(int guess);
        void guessTooLow(int guess);
        void guessCorrect(int guess);
        void gameOver();
        void cheat(int secret);
};

#endif // GAME_H
