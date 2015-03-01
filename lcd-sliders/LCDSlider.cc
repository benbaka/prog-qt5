/*
 * lcd-sliders -- show several LCD sliders
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "LCDSlider.h"

LCDSlider::LCDSlider(QWidget* parent) : QWidget(parent)
{
    QBoxLayout* layout = new QHBoxLayout;
    this->setLayout(layout);

    lcd = new QLCDNumber(2);
    layout->addWidget(lcd);

    slider = new QSlider;
    slider->setRange(0, 99);
    connect(slider, SIGNAL(valueChanged(int)), lcd, SLOT(display(int)));
    layout->addWidget(slider);
}
