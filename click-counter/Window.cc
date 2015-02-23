/*
 * click-counter -- track how many times a button is clicked
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

/*
 * Create a new Window.
 *
 * Params:
 *   parent - the parent of this window
 */
Window::Window(QWidget* parent) : QWidget(parent)
{
    QVBoxLayout* layout = new QVBoxLayout;
    this->setLayout(layout);
    this->setContentsMargins(6, 6, 6, 6);
    this->resize(320, 200);

    lcd = new QLCDNumber(3);
    layout->addWidget(lcd);

    button = new QPushButton("Click me!");
    connect(button, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    layout->addWidget(button);
}

void Window::onButtonClicked()
{
    lcd->display(lcd->intValue() + 1);
}
