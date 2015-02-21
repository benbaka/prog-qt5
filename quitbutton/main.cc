/*
 * quitbutton -- click a pushbutton to quit the application
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("Quit Button");
    window.show();

    return app.exec();
}

