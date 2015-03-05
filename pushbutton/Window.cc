/*
 * pushbutton -- demonstrate a Qt pushbutton.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"
#include <iostream>

/*
 * Create a new Window
 *
 * Params:
 *   parent - the parent widget or 0 to make this a decorated widget
 */
Window::Window(QWidget *parent) : QWidget(parent)
{
    // Set the layout manager
    QVBoxLayout* layout = new QVBoxLayout;
    this->setLayout(layout);
    this->setContentsMargins(6, 6, 6, 6);

    // Create the button and add it to the layout
    button = new QPushButton("Click me");
    connect(button, &QPushButton::clicked, this, &Window::onButtonClicked);
    layout->addWidget(button);
}

/*
 * Called when the button is clicked
 */
void Window::onButtonClicked()
{
    QMessageBox::information(this, "Click", "The button was clicked.");
}
