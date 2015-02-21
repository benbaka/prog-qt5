/*
 * quitbutton -- click a pushbutton to quit the application
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

/*
 * Create a new Window
 *
 * Params:
 *   parent -- the parent widget (default to 0)
 */
Window::Window(QWidget* parent) : QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout;
    this->setLayout(layout);

    quitButton = new QPushButton("&Quit");
    connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));
    layout->addWidget(quitButton);
}
