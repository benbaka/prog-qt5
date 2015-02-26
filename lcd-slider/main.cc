/*
 * lcd-slider -- connect a slider to an LCD widget
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("LCD Slider");
    window.show();

    return app.exec();
}
