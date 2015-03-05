/*
 * pushbutton-lambda -- demonstrate a pushbutton. This version uses the new
 *  C++11 lambda function as a slot function.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

Window::Window(QWidget* parent) : QWidget(parent)
{
    QVBoxLayout* layout = new QVBoxLayout;
    setLayout(layout);
    setContentsMargins(6, 6, 6, 6);

    button = new QPushButton("click me");
    layout->addWidget(button);

    // Eat my lambda! And no Q_OBJECT needed... (On a side note, this is
    // beginning to look as weird as Java.
    connect(button, &QPushButton::clicked, [this]() 
    {
        QMessageBox::information(this, "Click", "Button was clicked!");
    });
}
