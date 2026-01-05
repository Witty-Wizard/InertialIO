#pragma once

#include "InertialIO.h"
#include "Registers.h"

class ICM42688 : public InertialIO
{
private:
  inline uint8_t whoAmI();

public:
  ICM42688(TwoWire *bus, int sda = -1, int scl = -1);

  ICM42688(SPIClass *bus, int cs, int sdi = -1, int sdo = -1, int scl = -1);
  bool begin() override;
  gyroData_t readGyro() override;
  accelData_t readAccel() override;
};
