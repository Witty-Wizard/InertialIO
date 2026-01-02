#include "InertialBus.h"

InertialBus::InertialBus(TwoWire *bus, int sdi, int scl)
  : _twBus(bus), _sdi(sdi), _scl(scl)
{
}

InertialBus::InertialBus(SPIClass *bus, int cs, int sdi, int sdo, int scl)
  : _SPIBus(bus), _sdi(sdi), _sdo(sdo), _scl(scl), _cs(cs)
{
}