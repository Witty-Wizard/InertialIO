#include "I2CBus.h"

I2CBus::I2CBus(TwoWire *bus, int sdi, int scl) : InertialBus(bus, sdi, scl) {}

bool
I2CBus::begin(int addr)
{
  if(!_twBus)
    return -1;

  _twBus->setPins(_sdi, _scl);
  return _twBus->begin(addr);
}

uint8_t
I2CBus::read(uint8_t addr)
{
  // Will implement
  return 0;
}
void
I2CBus::write(uint8_t addr, uint8_t data)
{
  // Will implement
}

void
I2CBus::readBytes(uint8_t addr, uint8_t *data, size_t len)
{
  // definately will implement
}

void
I2CBus::writeBytes(uint8_t addr, uint8_t *data, size_t len)
{
  // hopefully will implement
}