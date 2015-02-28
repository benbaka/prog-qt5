/*
 * click-counters -- display multiple buttons that each have their own
 *   click counter.
 *
 * Author: Lorenzo Cabrini <lorenzo.cabrini@gmail.com>
 */

#include "ClickCounter.h"

/*
 * Create a new ClickCounter.
 *
 * Params:
 *   parent - the parent of this ClickCounter
 */
ClickCounter::ClickCounter(QWidget* parent) : QWidget(parent)
{
    QBoxLayout* layout = new QVBoxLayout;
    this->setLayout(layout);

    lcd = new QLCDNumber(2);
    layout->addWidget(lcd);

    button = new QPushButton("Click me!");
    connect(button, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    layout->addWidget(button);
}

/*
 * Called when the pushbutton is clicked
 */
void ClickCounter::onButtonClicked()
{
    lcd->display(lcd->intValue() + 1);
}
