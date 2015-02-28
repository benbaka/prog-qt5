/*
 * click-counters -- display multiple buttons that each have their own
 *   click counter.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef CLICKCOUNTER_H
#define CLICKCOUNTER_H

#include <QtWidgets>

class ClickCounter : public QWidget
{
    Q_OBJECT

    public:
        ClickCounter(QWidget* parent=0);

    private:
        QPushButton* button;
        QLCDNumber* lcd;

    private slots:
        void onButtonClicked();
};

#endif // CLICKCOUNTER_H
