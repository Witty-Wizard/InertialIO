/**
 * @file ICM42688.cc
 * @brief Implementation of the ICM42688 inertial sensor driver.
 */

#include "ICM42688.h"

/**
 * @brief Construct an ICM42688 instance using I2C transport
 *
 * @param bus Pointer to TwoWire instance
 * @param sda SDA pin
 * @param scl SCL pin
 */
ICM42688::ICM42688(TwoWire *bus, int sda, int scl) : InertialIO(bus, sda, scl)
{
}

/**
 * @brief Construct an ICM42688 instance using SPI transport
 *
 * @param bus Pointer to SPIClass instance
 * @param cs Chip select pin
 * @param sdi MOSI pin
 * @param sdo MISO pin
 * @param scl SPI clock pin
 */
ICM42688::ICM42688(SPIClass *bus, int cs, int sdi, int sdo, int scl)
  : InertialIO(bus, cs, sdi, sdo, scl)
{
}

/**
 * @brief Initialize the ICM42688 sensor
 *
 * Initializes the transport bus, verifies the device identity,
 * and configures the power management settings.
 *
 * @return true if initialization succeeds, false otherwise
 */
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

/**
 * @brief Read the WHO_AM_I register
 *
 * @return Device identification value
 */
inline uint8_t
ICM42688::whoAmI()
{
  return _transportBus->read(WHO_AM_I);
}

/**
 * @brief Read raw gyroscope data
 *
 * Reads the gyroscope output registers and assembles
 * the raw 16-bit signed axis values.
 *
 * @return Gyroscope raw data
 */
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

/**
 * @brief Read raw accelerometer data
 *
 * Reads the accelerometer output registers and assembles
 * the raw 16-bit signed axis values.
 *
 * @return Accelerometer raw data
 */
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
