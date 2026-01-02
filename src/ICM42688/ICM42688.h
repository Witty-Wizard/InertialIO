#pragma once

#include "InertialIO.h"
#include "Registers.h"

class ICM42688 : public InertialIO
{
public:
  ICM42688(TwoWire *bus, int sda = -1, int scl = -1);

  ICM42688(SPIClass *bus, int sdi = -1, int sdo = -1, int scl = -1,
           int cs = -1);
};
