/**
 * @file InertialIO.h
 * @brief Header file for InertialIO class.
 *
 * @author Witty Wizard
 */
#pragma once

#ifndef INERTIALIO_H
#define INERTIALIO_H

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <type_traits>
#include <cstdint>

#include "InertialBus/InertialBus.h"

class InertialIO
{
protected:
  InertialBus *_transportBus = NULL;

public:
  InertialIO(TwoWire *bus, int sci = -1, int scl = -1);
  InertialIO(SPIClass *bus, int sdi = -1, int sdo = -1, int scl = -1,
             int cs = -1);
  ~InertialIO();
};

#include "ICM42688/ICM42688.h"

#endif // INERTIALIO_H
