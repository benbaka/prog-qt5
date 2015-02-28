/*
 * click-counters -- display multiple buttons that each have their own
 *   click counter.
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
        clickCounters[i] = new ClickCounter;
        layout->addWidget(clickCounters[i], i/4, i%4);
    }
}
