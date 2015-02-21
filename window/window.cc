/*
 * window -- Qt5 starter app. It just displays an empty window.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */
#include <QtWidgets>

int main(int argc, char* argv[])
{
    // First create the Qt application object
    QApplication app(argc, argv);

    // Now create a widget without a parent. This becomes a "window".
    QWidget window;

    // Set some attributes
    window.resize(640, 400);
    window.setWindowTitle("Qt Window");

    // Now show the widget
    window.show();

    // Enter the Qt event loop
    return app.exec();
}
