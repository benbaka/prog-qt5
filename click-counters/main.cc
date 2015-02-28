/*
 * click-counters -- display multiple buttons that each have their own
 *   click counter.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("Click Counters");
    window.show();

    return app.exec();
}
