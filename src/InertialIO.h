#pragma once
#ifndef INERTIALIO_H
#define INERTIALIO_H

#include <Arduino.h>

#define PACKED __attribute__((packed))

class InertialIO
{
public:
  InertialIO();
  virtual void begin() = 0;
};

#include "ICM42688/ICM42688.h"

#endif // INERTIALIO_H
