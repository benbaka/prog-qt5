/*
 * lcd-sliders -- show several LCD sliders
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

Window::Window(QWidget* parent) : QWidget(parent)
{
    QGridLayout* layout = new QGridLayout;
    this->setLayout(layout);
    this->setContentsMargins(6, 6, 6, 6);

    for (int i = 0; i < 12; ++i) {
        lcdSliders[i] = new LCDSlider;
        layout->addWidget(lcdSliders[i], i/4, i%4);
    }
}
