/*
 * pushbutton-lambda -- demonstrate a pushbutton. This version uses the new
 *  C++11 lamda function as a slot function.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("Qt PushButton");
    window.show();

    return app.exec();
}
