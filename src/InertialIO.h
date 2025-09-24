#pragma once
#ifndef INERTIALIO_H
#define INERTIALIO_H

#include <Arduino.h>

#define PACKED __attribute__((packed))

class InertialIO
{
public:

  InertialIO(Stream *rxPort, int rxPin, int txPin, bool inverted);
};

#endif // INERTIALIO_H
