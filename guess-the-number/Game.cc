/*
 * guess-the-number -- a number guessing game
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include <random>
#include <chrono>
#include "Game.h"

Game::Game()
{

    unsigned s = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(s);
    std::uniform_int_distribution<int> distribution(1, 100);
    m_secret = distribution(generator);
}

int Game::guessCount()
{
    return m_guessCount;
}

bool Game::cheatMode()
{
    return m_cheatMode;
}

void Game::enableCheatMode()
{
    m_cheatMode = true;
    emit cheat(m_secret);
}

void Game::guess(int n)
{
    emit guessMade(++m_guessCount);

    if (n < m_secret) {
        emit guessTooLow(n);
    } else if (n > m_secret) {
        emit guessTooHigh(n);
    } else {
        emit guessCorrect(n);
        emit gameOver();
    }
}
