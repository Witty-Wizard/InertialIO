#pragma once
#ifndef INERTIALIO_H
#define INERTIALIO_H

#include <Arduino.h>
#include <SPI.h>

#define PACKED __attribute__((packed))

class InertialIO
{
protected:
  SPIClass *_spiBus;
  uint8_t _sdo;
  uint8_t _sdi;
  uint8_t _sck;
  uint8_t _cs;

  uint8_t readReg(uint8_t addr);

public:
  InertialIO(SPIClass *spiBus, uint8_t sdo, uint8_t sdi, uint8_t sck,
             uint8_t cs);
  void writeReg(uint8_t addr, uint8_t data);
  virtual void begin() = 0;
};

#include "ICM42688/ICM42688.h"

#endif // INERTIALIO_H
