/**
 * @file InertialBus.cc
 * @brief Implementation of the InertialBus base class constructors.
 */

#include "InertialBus.h"

/**
 * @brief Construct an InertialBus using I2C transport
 *
 * Initializes internal references and pin configuration
 * for I2C-based communication.
 *
 * @param bus Pointer to TwoWire instance
 * @param sdi SDA pin
 * @param scl SCL pin
 */
InertialBus::InertialBus(TwoWire *bus, int sdi, int scl)
  : _twBus(bus), _sdi(sdi), _scl(scl)
{
}

/**
 * @brief Construct an InertialBus using SPI transport
 *
 * Initializes internal references and pin configuration
 * for SPI-based communication.
 *
 * @param bus Pointer to SPIClass instance
 * @param cs Chip select pin
 * @param sdi MOSI pin
 * @param sdo MISO pin
 * @param scl SPI clock pin
 */
InertialBus::InertialBus(SPIClass *bus, int cs, int sdi, int sdo, int scl)
  : _SPIBus(bus), _sdi(sdi), _sdo(sdo), _scl(scl), _cs(cs)
{
}
