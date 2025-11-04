#pragma once
#ifndef ICM42688_H
#define ICM42688_H

#include <Arduino.h>
#include "../InertialIO.h"

#include "registers.h"

class ICM42688 : public InertialIO
{
public:
  explicit ICM42688(SPIClass *spiBus, uint8_t sdo, uint8_t sdi, uint8_t sck,
                    uint8_t cs);
  void begin();
};

#endif
