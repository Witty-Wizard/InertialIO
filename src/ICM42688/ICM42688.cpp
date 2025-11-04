#include "ICM42688.h"

ICM42688::ICM42688(SPIClass *spiBus, uint8_t sdo, uint8_t sdi, uint8_t sck,
                   uint8_t cs)
  : InertialIO(spiBus, sdo, sdi, sck, cs)
{
}

void
ICM42688::begin()
{
  _spiBus->begin(_sck, _sdi, _sdo, _cs);
  _spiBus->setHwCs(true);
}