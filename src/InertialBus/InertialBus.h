#pragma once

#ifndef INERTIALBUS_H
#define INERTIALBUS_H

#include <stdint.h>
#include <SPI.h>
#include <Wire.h>

class InertialBus
{

protected:
  int _sdo;
  int _sdi;
  int _scl;
  int _cs;
  SPIClass *_SPIBus = NULL;
  TwoWire *_twBus = NULL;

public:
  InertialBus(TwoWire *bus, int sdi, int scl);
  InertialBus(SPIClass *bus, int cs, int sdi, int sdo, int scl);

  virtual bool begin(int addr = -1) = 0;
  virtual uint8_t read(uint8_t addr) = 0;
  virtual void write(uint8_t addr, uint8_t data) = 0;
  virtual void readBytes(uint8_t addr, uint8_t *data, size_t len) = 0;
  virtual void writeBytes(uint8_t addr, uint8_t *data, size_t len) = 0;
};

#include "I2CBus/I2CBus.h"
#include "SPIBus/SPIBus.h"

#endif