#include "InertialIO.h"

InertialIO::InertialIO(SPIClass *spiBus, uint8_t sdo, uint8_t sdi, uint8_t sck,
                       uint8_t cs)
  : _spiBus(spiBus), _sdo(sdo), _sdi(sdi), _sck(sck), _cs(cs)
{
}

void
InertialIO::writeReg(uint8_t addr, uint8_t data)
{
  _spiBus->write16((addr << 8) | data);
}

// void
// readReg(uint8_t reg, size_t size)
// {
//   size_t _size = size + sizeof(reg);
//   uint8_t *_reg = (uint8_t *)malloc(_size);
//   uint8_t *_out = (uint8_t *)malloc(_size);
//   memset(_reg, 0, _size);
//   *_reg = (reg | (1 << 7));
//   SPI.transferBytes(_reg, _out, _size);
//   int16_t acc = _out[2] | (_out[1] << 8);
//   float accc = ((float)acc) / 2048.0f;
//   Serial.println(accc);
//   free(_out);
//   free(_reg);
// }