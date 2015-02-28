/*
 * click-counters -- display multiple buttons that each have their own
 *   click counter.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>
#include "ClickCounter.h"

class Window : public QWidget
{
    public:
        Window(QWidget* parent=0);

    private:
        ClickCounter* clickCounters[12];
};

#endif // WINDOW_H
