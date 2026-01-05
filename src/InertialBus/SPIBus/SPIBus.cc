/**
 * @file SPIBus.cc
 * @brief Implementation of the SPIBus transport layer.
 */

#include "SPIBus.h"

/**
 * @brief Construct an SPIBus instance
 *
 * @param bus Pointer to SPIClass instance
 * @param cs Chip select pin
 * @param sdi MOSI pin
 * @param sdo MISO pin
 * @param scl SPI clock pin
 */
SPIBus::SPIBus(SPIClass *bus, int cs, int sdi, int sdo, int scl)
  : InertialBus(bus, cs, sdi, sdo, scl)
{
}

/**
 * @brief Initialize the SPI bus
 *
 * Configures the SPI peripheral and chip select pin.
 *
 * @param addr Unused parameter (interface compatibility)
 * @return true if initialization succeeds, false otherwise
 */
bool
SPIBus::begin(int addr)
{
  if(!_SPIBus)
    return false;
  _SPIBus->begin(_scl, _sdi, _sdo, _cs);
  pinMode(_cs, OUTPUT);
  digitalWrite(_cs, HIGH);
  return true;
}

/**
 * @brief Read a single register over SPI
 *
 * @param addr Register address
 * @return Value read from the register
 */
uint8_t
SPIBus::read(uint8_t addr)
{
  digitalWrite(_cs, LOW);         /**< Enable data communication */
  _SPIBus->transfer(addr | 0x80); /**< Send read command */
  uint8_t __data =
    _SPIBus->transfer(0x00); /**< Read the data using dummy byte */
  digitalWrite(_cs, HIGH);   /**< Disable data communication */
  return __data;             /**< Return received data */
}

/**
 * @brief Write a single register over SPI
 *
 * @param addr Register address
 * @param data Value to write
 */
void
SPIBus::write(uint8_t addr, uint8_t data)
{
  digitalWrite(_cs, LOW);          /**< Enable data communication */
  _SPIBus->transfer(addr & ~0x80); /**< Send write command */
  _SPIBus->transfer(data);         /**< Send data byte */
  digitalWrite(_cs, HIGH);         /**< Disable data communication */
}

/**
 * @brief Read multiple consecutive registers over SPI
 *
 * @param addr Starting register address
 * @param data Pointer to destination buffer
 * @param len Number of bytes to read
 */
void
SPIBus::readBytes(uint8_t addr, uint8_t *data, size_t len)
{
  digitalWrite(_cs, LOW);                  /**< Enable data communication */
  _SPIBus->transfer(addr | 0x80);          /**< Send read command */
  _SPIBus->transferBytes(NULL, data, len); /**< Read requested bytes */
  digitalWrite(_cs, HIGH);                 /**< Disable communication */
}

/**
 * @brief Write multiple consecutive registers over SPI
 *
 * @param addr Starting register address
 * @param data Pointer to source buffer
 * @param len Number of bytes to write
 */
void
SPIBus::writeBytes(uint8_t addr, uint8_t *data, size_t len)
{
  digitalWrite(_cs, LOW);                  /**< Enable data communication */
  _SPIBus->transfer(addr & ~0x80);         /**< Send write command */
  _SPIBus->transferBytes(data, NULL, len); /**< Write requested bytes */
  digitalWrite(_cs, HIGH);                 /**< Disable communication */
}
