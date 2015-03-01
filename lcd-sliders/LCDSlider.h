/*
 * lcd-sliders -- show several LCD sliders
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef LCDSLIDER_H
#define LCDSLIDER_H

#include <QtWidgets>

class LCDSlider : public QWidget
{
    public:
        LCDSlider(QWidget* parent=0);

    private:
        QLCDNumber* lcd;
        QSlider* slider;
};

#endif // LCDSLIDER_H
