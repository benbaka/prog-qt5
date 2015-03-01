/*
 * lcd-sliders -- show several LCD sliders
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("LCD Sliders");
    window.show();

    return app.exec();
}
