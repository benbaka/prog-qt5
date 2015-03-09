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

#if __cplusplus < 201103
    private slots:
        void onButtonClicked();
#endif
};

#endif // WINDOW_H
