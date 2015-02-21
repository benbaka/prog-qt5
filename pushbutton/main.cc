/*
 * pushbutton -- demonstrate a Qt pushbutton.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    // Create the Qt application object
    QApplication app(argc, argv);

    // Create and show the application window
    Window win;
    win.setWindowTitle("Qt PushButton");
    win.show();

    // Enter the Qt event loop
    return app.exec();
}
