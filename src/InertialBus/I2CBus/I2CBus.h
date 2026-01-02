#pragma once

#ifndef I2CBUS_H
#define I2CBUS_H

#include "../InertialBus.h"

class I2CBus : public InertialBus
{
public:
  explicit I2CBus(TwoWire *bus, int sdi, int scl);
  bool begin(int addr = -1) override;
  uint8_t read(uint8_t addr) override;
  void write(uint8_t addr, uint8_t data) override;
  void readBytes(uint8_t addr, uint8_t *data, size_t len) override;
  void writeBytes(uint8_t addr, uint8_t *data, size_t len) override;
};

#endif