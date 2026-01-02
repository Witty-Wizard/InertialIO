#pragma once

#ifndef SPIBUS_H
#define SPIBUS_H

#include "../InertialBus.h"

class SPIBus : public InertialBus
{
public:
  explicit SPIBus(SPIClass *bus, int cs, int sdi = -1, int sdo = -1,
                  int scl = -1);
  bool begin(int addr = -1) override;
  uint8_t read(uint8_t addr) override;
  void write(uint8_t addr, uint8_t data) override;
  void readBytes(uint8_t addr, uint8_t *data, size_t len) override;
  virtual void writeBytes(uint8_t addr, uint8_t *data, size_t len) override;

private:
};

#endif