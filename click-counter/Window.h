/*
 * click-counter -- track how many times a button is clicked
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
        QPushButton* button;
        QLCDNumber* lcd;

    private slots:
        void onButtonClicked();
};

#endif // WINDOW_H
