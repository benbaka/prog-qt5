/*
 * lcd-sliders -- show several LCD sliders
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>
#include "LCDSlider.h"

class Window : public QWidget
{
    public:
        Window(QWidget* parent=0);

    private:
        LCDSlider* lcdSliders[16];
};

#endif // WINDOW_H
