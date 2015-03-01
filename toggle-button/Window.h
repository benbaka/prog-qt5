/*
 * toggle-button -- demonstrate a toggle button
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>

class Window : public QWidget
{
    Q_OBJECT

    public:
        Window(QWidget* parent=0);

    private:
        QPushButton *button;
        QPushButton *toggleButton;

    private slots:
        void onButtonToggled(bool);
        void onButtonClicked();
};

#endif // WINDOW_H
