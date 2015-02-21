/*
 * quitbutton -- click a pushbutton to quit the application
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>

class Window : public QWidget
{
    public:
        Window(QWidget* parent=0);

    private:
        QPushButton* quitButton;
};

#endif // WINDOW_H
