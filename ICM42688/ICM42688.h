#pragma once
#ifndef ICM42688_H
#define ICM42688_H

#include <InertialIO.h>

#include "registers.h"

class ICM42688 : InertialIO
{
private:
public:
  ICM42688();
  void begin() override;
  void whoAMI() override;
};

#endif