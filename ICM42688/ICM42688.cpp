#include <Arduino.h>

#include "ICM42688.h"

uint8_t
spiReadRegister(uint8_t reg)
{

  uint8_t addr_byte = reg | 0x80; // read: set MSB
  digitalWrite(SPI.pinSS(), LOW);
  SPI.transfer(addr_byte);
  uint8_t result = SPI.transfer(0x00);
  digitalWrite(SPI.pinSS(), HIGH);
  return result;
}

bool
spiReadBurst(uint8_t startReg, uint8_t *buf, uint8_t len)
{
  uint8_t addr_byte = startReg | 0x80; // read
  digitalWrite(SPI.pinSS(), LOW);
  SPI.transfer(addr_byte);
  for(uint8_t i = 0; i < len; ++i) {
    buf[i] = SPI.transfer(0x00);
  }
  digitalWrite(SPI.pinSS(), HIGH);
  return true;
}

bool
spiWriteRegister(uint8_t reg, uint8_t value)
{
  // For write, clear MSB
  uint8_t addr_byte = reg & 0x7F;
  digitalWrite(SPI.pinSS(), LOW);
  SPI.transfer(addr_byte);
  uint8_t res = SPI.transfer(value);
  digitalWrite(SPI.pinSS(), HIGH);
  return true;
}

int16_t
toSigned16(uint8_t hi, uint8_t lo)
{
  return (int16_t)((uint16_t)hi << 8 | lo);
}

ICM42688::ICM42688() : InertialIO() {}

void
ICM42688::begin()
{
  SPI.begin();
  pinMode(SPI.pinSS(), OUTPUT);
  digitalWrite(SPI.pinSS(), HIGH);
  SPI.beginTransaction(SPISettings(2000000, MSBFIRST, SPI_MODE0));
}

void
ICM42688::whoAMI()
{
  uint8_t who = spiReadRegister(REG_WHO_AM_I);
  Serial.print("WHO_AM_I = 0x");
  Serial.print(who, HEX);
  Serial.print("  (expected 0x47)\n");
}