/**
 * @file SPIBus.h
 * @brief SPI transport bus implementation for inertial sensors.
 */

#pragma once

#ifndef SPIBUS_H
#define SPIBUS_H

#include "../InertialBus.h"

/**
 * @brief SPI-based implementation of the InertialBus interface
 *
 * Provides SPI read and write operations for inertial sensors.
 */
class SPIBus : public InertialBus
{
public:
  /**
   * @brief Construct an SPIBus instance
   *
   * @param bus Pointer to SPIClass instance
   * @param cs Chip select pin
   * @param sdi MOSI pin (optional)
   * @param sdo MISO pin (optional)
   * @param scl SPI clock pin (optional)
   */
  explicit SPIBus(SPIClass *bus, int cs, int sdi = -1, int sdo = -1,
                  int scl = -1);

  /**
   * @brief Initialize the SPI bus
   *
   * @param addr Unused parameter (for interface compatibility)
   * @return true if initialization succeeds
   */
  bool begin(int addr = -1) override;

  /**
   * @brief Read a single register over SPI
   *
   * @param addr Register address
   * @return Register value
   */
  uint8_t read(uint8_t addr) override;

  /**
   * @brief Write a single register over SPI
   *
   * @param addr Register address
   * @param data Value to write
   */
  void write(uint8_t addr, uint8_t data) override;

  /**
   * @brief Read multiple consecutive registers over SPI
   *
   * @param addr Starting register address
   * @param data Pointer to destination buffer
   * @param len Number of bytes to read
   */
  void readBytes(uint8_t addr, uint8_t *data, size_t len) override;

  /**
   * @brief Write multiple consecutive registers over SPI
   *
   * @param addr Starting register address
   * @param data Pointer to source buffer
   * @param len Number of bytes to write
   */
  virtual void writeBytes(uint8_t addr, uint8_t *data, size_t len) override;

private:
};

#endif
