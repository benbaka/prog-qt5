/*
 * toggle-button -- demonstrate a toggle button
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("Qt Toggle Button");
    window.show();

    return app.exec();
}
