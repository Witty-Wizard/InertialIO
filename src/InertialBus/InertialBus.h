/**
 * @file InertialBus.h
 * @brief Abstract transport bus interface for inertial sensors.
 */

#pragma once

#ifndef INERTIALBUS_H
#define INERTIALBUS_H

#include <stdint.h>
#include <SPI.h>
#include <Wire.h>

/**
 * @brief Base class for inertial sensor transport buses
 *
 * Provides a common interface for I2C and SPI bus
 * implementations used by inertial sensors.
 */
class InertialBus
{

protected:
  int _sdo;                 /**< MISO pin */
  int _sdi;                 /**< MOSI/SDA pin */
  int _scl;                 /**< Clock pin */
  int _cs;                  /**< Chip select pin */
  SPIClass *_SPIBus = NULL; /**< Pointer to SPI bus instance */
  TwoWire *_twBus = NULL;   /**< Pointer to I2C bus instance */

public:
  /**
   * @brief Construct an InertialBus using I2C transport
   *
   * @param bus Pointer to TwoWire instance
   * @param sdi SDA pin
   * @param scl SCL pin
   */
  InertialBus(TwoWire *bus, int sdi, int scl);

  /**
   * @brief Construct an InertialBus using SPI transport
   *
   * @param bus Pointer to SPIClass instance
   * @param cs Chip select pin
   * @param sdi MOSI pin
   * @param sdo MISO pin
   * @param scl SPI clock pin
   */
  InertialBus(SPIClass *bus, int cs, int sdi, int sdo, int scl);

  /**
   * @brief Initialize the transport bus
   *
   * @param addr Device address (I2C only)
   * @return true if initialization succeeds
   */
  virtual bool begin(int addr = -1) = 0;

  /**
   * @brief Read a single register
   *
   * @param addr Register address
   * @return Register value
   */
  virtual uint8_t read(uint8_t addr) = 0;

  /**
   * @brief Write a single register
   *
   * @param addr Register address
   * @param data Value to write
   */
  virtual void write(uint8_t addr, uint8_t data) = 0;

  /**
   * @brief Read multiple consecutive registers
   *
   * @param addr Starting register address
   * @param data Pointer to destination buffer
   * @param len Number of bytes to read
   */
  virtual void readBytes(uint8_t addr, uint8_t *data, size_t len) = 0;

  /**
   * @brief Write multiple consecutive registers
   *
   * @param addr Starting register address
   * @param data Pointer to source buffer
   * @param len Number of bytes to write
   */
  virtual void writeBytes(uint8_t addr, uint8_t *data, size_t len) = 0;
};

#include "I2CBus/I2CBus.h"
#include "SPIBus/SPIBus.h"

#endif
