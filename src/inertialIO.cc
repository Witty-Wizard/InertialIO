/**
 * @file InertialIO.cc
 * @brief Implementation of the InertialIO base class.
 *
 * Contains constructor implementations for selecting
 * the appropriate transport bus and the class destructor.
 *
 * @author Witty Wizard
 */

#include "InertialIO.h"

/**
 * @brief Construct an InertialIO instance using I2C transport
 *
 * Initializes the underlying I2C transport bus with the
 * provided Wire instance and pin configuration.
 *
 * @param bus Pointer to TwoWire instance
 * @param sci SDA pin
 * @param scl SCL pin
 */
InertialIO::InertialIO(TwoWire *bus, int sci, int scl)
{
  _transportBus = new I2CBus(bus, sci, scl);
}

/**
 * @brief Construct an InertialIO instance using SPI transport
 *
 * Initializes the underlying SPI transport bus with the
 * provided SPI instance and pin configuration.
 *
 * @param bus Pointer to SPIClass instance
 * @param cs Chip select pin
 * @param sdi MOSI pin
 * @param sdo MISO pin
 * @param scl SPI clock pin
 */
InertialIO::InertialIO(SPIClass *bus, int cs, int sdi, int sdo, int scl)
{
  _transportBus = new SPIBus(bus, cs, sdi, sdo, scl);
}

/**
 * @brief Destroy the InertialIO instance
 *
 * Releases the allocated transport bus resources.
 */
InertialIO::~InertialIO()
{
  delete _transportBus;
}
