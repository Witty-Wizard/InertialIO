/**
 * @file InertialIO.h
 * @brief Abstract interface for inertial sensor I/O.
 *
 * Defines common data structures and the base class used to
 * communicate with inertial sensors over I2C or SPI.
 *
 * @author Witty Wizard
 */
#pragma once

#ifndef INERTIALIO_H
#define INERTIALIO_H

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <type_traits>
#include <cstdint>

#include "InertialBus/InertialBus.h"

/**
 * @brief Gyroscope raw data container
 *
 * Holds signed 16-bit raw gyroscope samples for
 * the X, Y, and Z axes.
 */
typedef struct gyroData_s
{
  int16_t x; /**< X-axis angular rate */
  int16_t y; /**< Y-axis angular rate */
  int16_t z; /**< Z-axis angular rate */
} __attribute__((packed)) gyroData_t;

/**
 * @brief Accelerometer raw data container
 *
 * Holds signed 16-bit raw accelerometer samples for
 * the X, Y, and Z axes.
 */
typedef struct accelData_s
{
  int16_t x; /**< X-axis acceleration */
  int16_t y; /**< Y-axis acceleration */
  int16_t z; /**< Z-axis acceleration */
} __attribute__((packed)) accelData_t;

/**
 * @brief Abstract base class for inertial sensors
 *
 * Provides a common interface for inertial devices
 * using different transport buses.
 */
class InertialIO
{
protected:
  /** Pointer to the underlying transport bus implementation */
  InertialBus *_transportBus = NULL;

public:
  /**
   * @brief Construct using an I2C bus
   * @param bus Pointer to TwoWire instance
   * @param sci SDA pin
   * @param scl SCL pin
   */
  InertialIO(TwoWire *bus, int sci, int scl);

  /**
   * @brief Construct using an SPI bus
   * @param bus Pointer to SPIClass instance
   * @param cs Chip select pin
   * @param sdi MOSI pin
   * @param sdo MISO pin
   * @param scl SPI clock pin
   */
  InertialIO(SPIClass *bus, int cs, int sdi, int sdo, int scl);

  /**
   * @brief Initialize the inertial device
   * @return true if initialization succeeds
   */
  virtual bool begin() = 0;

  /**
   * @brief Read gyroscope data
   * @return Gyroscope raw data
   */
  virtual gyroData_t readGyro() = 0;

  /**
   * @brief Read accelerometer data
   * @return Accelerometer raw data
   */
  virtual accelData_t readAccel() = 0;

  /**
   * @brief Destructor
   */
  ~InertialIO();
};

#include "ICM42688/ICM42688.h"

#endif // INERTIALIO_H
