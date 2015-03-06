/*
 * click-counter -- track how many times a button is clicked
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>

class Window : public QWidget
{
    public:
        Window(QWidget* parent=0);

    private:
        QPushButton* m_button;
        QLCDNumber* m_lcd;
};

#endif // WINDOW_H
