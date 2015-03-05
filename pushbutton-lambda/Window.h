/*
 * pushbutton-lambda -- demonstrate a pushbutton. This version uses the new
 *  C++11 lamda function as a slot function.
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
        QPushButton* button;
};

#endif // WINDOW_H
