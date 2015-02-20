#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.resize(640, 400);
    window.setWindowTitle("Qt Window");
    window.show();

    return app.exec();
}
