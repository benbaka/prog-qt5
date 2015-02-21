/*
 * pushbutton -- demonstrate a Qt pushbutton.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>

/* 
 * Application window class
 */
class Window : public QWidget
{
    Q_OBJECT

    public:
        Window(QWidget* parent=0);

    private:
        QPushButton* button;

    private slots:
        void onButtonClicked();
};

#endif // WINDOW_H
