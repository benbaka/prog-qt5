/*
 * lcd-slider -- connect a slider to an LCD widget
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

/*
 * Create a new Window
 *
 * Params:
 *   parent - this Window's parent
 */
Window::Window(QWidget* parent) : QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout;
    this->setLayout(layout);
    this->setContentsMargins(6, 6, 6, 6);
    this->resize(320, 200);

    lcd = new QLCDNumber(2);
    layout->addWidget(lcd);

    slider = new QSlider(Qt::Vertical);
    slider->setRange(0, 99);
    connect(slider, SIGNAL(valueChanged(int)), lcd, SLOT(display(int)));
    layout->addWidget(slider);
}

