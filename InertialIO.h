#pragma once
#ifndef INERTIALIO_H
#define INERITALIO_H

#include <SPI.h>

class InertialIO
{
private:
public:
  InertialIO();
  virtual void begin() = 0;
  virtual void whoAMI() = 0;
};

#include "ICM42688/ICM42688.h"
#endif