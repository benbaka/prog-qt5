/*
 * toggle-button -- demonstrate a toggle button
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

Window::Window(QWidget* parent) : QWidget(parent)
{
    QBoxLayout* layout = new QVBoxLayout;
    this->setLayout(layout);
    this->setContentsMargins(6, 6, 6, 6);

    button = new QPushButton("Click me");
    connect(button, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    layout->addWidget(button);

    toggleButton = new QPushButton("Toggle me");
    toggleButton->setCheckable(true);
    connect(toggleButton, SIGNAL(toggled(bool)), this, 
            SLOT(onButtonToggled(bool)));
    layout->addWidget(toggleButton);
}

void Window::onButtonToggled(bool state)
{
    button->setEnabled(!state);
}

void Window::onButtonClicked()
{
    QMessageBox::information(this, "Click", 
            "The button was clicked so it is enabled.");
}
