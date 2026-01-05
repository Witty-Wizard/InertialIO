/**
 * @file ICM42688.h
 * @brief Header file for the ICM42688 inertial sensor driver.
 */

#pragma once

#include "InertialIO.h"
#include "Registers.h"

/**
 * @brief Driver class for the ICM42688 inertial measurement unit
 *
 * Implements sensor-specific initialization and data access
 * for gyroscope and accelerometer readings.
 */
class ICM42688 : public InertialIO
{
private:
  /**
   * @brief Read the device identification register
   * @return Device ID value
   */
  inline uint8_t whoAmI();

public:
  /**
   * @brief Construct an ICM42688 instance using I2C transport
   * @param bus Pointer to TwoWire instance
   * @param sda SDA pin (optional)
   * @param scl SCL pin (optional)
   */
  ICM42688(TwoWire *bus, int sda = -1, int scl = -1);

  /**
   * @brief Construct an ICM42688 instance using SPI transport
   * @param bus Pointer to SPIClass instance
   * @param cs Chip select pin
   * @param sdi MOSI pin (optional)
   * @param sdo MISO pin (optional)
   * @param scl SPI clock pin (optional)
   */
  ICM42688(SPIClass *bus, int cs, int sdi = -1, int sdo = -1, int scl = -1);

  /**
   * @brief Initialize the ICM42688 sensor
   * @return true if initialization succeeds
   */
  bool begin() override;

  /**
   * @brief Read gyroscope data from the sensor
   * @return Gyroscope raw data
   */
  gyroData_t readGyro() override;

  /**
   * @brief Read accelerometer data from the sensor
   * @return Accelerometer raw data
   */
  accelData_t readAccel() override;
};
