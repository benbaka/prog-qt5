/*
 * click-counter -- track how many times a button is clicked
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("Click Counter");
    window.show();

    return app.exec();
}
