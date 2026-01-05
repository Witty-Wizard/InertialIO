#include "ICM42688.h"

ICM42688::ICM42688(TwoWire *bus, int sda, int scl) : InertialIO(bus, sda, scl)
{
}

ICM42688::ICM42688(SPIClass *bus, int cs, int sdi, int sdo, int scl)
  : InertialIO(bus, cs, sdi, sdo, scl)
{
}

bool
ICM42688::begin()
{
  if(!_transportBus->begin())
    return false;

  if(whoAmI() != 0x47)
    return false;

  _transportBus->write(PWR_MGMT0, 0b00001111);

  return true;
}

inline uint8_t
ICM42688::whoAmI()
{
  return _transportBus->read(WHO_AM_I);
}

gyroData_t
ICM42688::readGyro()
{
  uint8_t buf[6];
  gyroData_t data;

  _transportBus->readBytes(GYRO_DATA_X1, buf, 6);

  data.x = (int16_t)((buf[0] << 8) | buf[1]);
  data.y = (int16_t)((buf[2] << 8) | buf[3]);
  data.z = (int16_t)((buf[4] << 8) | buf[5]);

  return data;
}

accelData_t
ICM42688::readAccel()
{
  uint8_t buf[6];
  accelData_t data;

  _transportBus->readBytes(ACCEL_DATA_X1, buf, 6);

  data.x = (int16_t)((buf[0] << 8) | buf[1]);
  data.y = (int16_t)((buf[2] << 8) | buf[3]);
  data.z = (int16_t)((buf[4] << 8) | buf[5]);

  return data;
}
