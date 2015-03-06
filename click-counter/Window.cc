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

    m_lcd = new QLCDNumber(3);
    layout->addWidget(m_lcd);

    m_button = new QPushButton("Click me!");
    layout->addWidget(m_button);

    connect(m_button, &QPushButton::clicked, [this]()
    {
        m_lcd->display(m_lcd->intValue() + 1);
    });
}
