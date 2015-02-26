/*
 * lcd-slider -- connect a slider to an LCD widget
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>

class Window : public QWidget {
    public:
        Window(QWidget *parent=0);

    private:
        QLCDNumber* lcd;
        QSlider* slider;
};

#endif // WINDOW_H
