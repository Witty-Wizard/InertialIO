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

typedef struct gyroData_s
{
  int16_t x;
  int16_t y;
  int16_t z;
} __attribute__((packed)) gyroData_t;

typedef struct accelData_s
{
  int16_t x;
  int16_t y;
  int16_t z;
} __attribute__((packed)) accelData_t;

class InertialIO
{
protected:
  InertialBus *_transportBus = NULL;

public:
  InertialIO(TwoWire *bus, int sci, int scl);
  InertialIO(SPIClass *bus, int cs, int sdi, int sdo, int scl);
  virtual bool begin() = 0;
  virtual gyroData_t readGyro() = 0;
  virtual accelData_t readAccel() = 0;
  ~InertialIO();
};

#include "ICM42688/ICM42688.h"

#endif // INERTIALIO_H
