
#include <QtWidgets>
#include "Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window win;
    win.setWindowTitle("Guess the Number");
    win.resize(250, 350);
    win.show();

    return app.exec();
}
