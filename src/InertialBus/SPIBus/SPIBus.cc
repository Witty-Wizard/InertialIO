#include "SPIBus.h"

SPIBus::SPIBus(SPIClass *bus, int cs, int sdi, int sdo, int scl)
  : InertialBus(bus, cs, sdi, sdo, scl)
{
}

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

uint8_t
SPIBus::read(uint8_t addr)
{
  digitalWrite(_cs, LOW);         /**< Enable data comms */
  _SPIBus->transfer(addr | 0x80); /**< Send read command */
  uint8_t __data =
    _SPIBus->transfer(0x00); /**< Read the data (0x00 is dummy data) */
  digitalWrite(_cs, HIGH);   /**< Disable data comms */
  return __data;             /**< Return the data you read */
}

void
SPIBus::write(uint8_t addr, uint8_t data)
{
  digitalWrite(_cs, LOW);          /**< Enable data comms */
  _SPIBus->transfer(addr & ~0x80); /**< Send Write Command (clear MSB) */
  _SPIBus->transfer(data);         /**< Send the Data */
  digitalWrite(_cs, HIGH);         /**< Disable data comms */
}

void
SPIBus::readBytes(uint8_t addr, uint8_t *data, size_t len)
{
  uint8_t __dummy[len];
  memset(__dummy, 0, len);                    /**< set all indexes as zero */
  digitalWrite(_cs, LOW);                     /**< Enable data comms */
  _SPIBus->transfer(addr | 0x80);             /**< Send read command */
  _SPIBus->transferBytes(__dummy, data, len); /**< Read requested Bytes */
  digitalWrite(_cs, HIGH);                    /**< Disable comms */
}

void
SPIBus::writeBytes(uint8_t addr, uint8_t *data, size_t len)
{

  digitalWrite(_cs, LOW);                  /**< Enable data comms */
  _SPIBus->transfer(addr & ~0x80);         /**< Send write command */
  _SPIBus->transferBytes(data, NULL, len); /**< Read requested Bytes */
  digitalWrite(_cs, HIGH);                 /**< Disable comms */
}