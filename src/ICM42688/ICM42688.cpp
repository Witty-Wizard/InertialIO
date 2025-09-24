#include "ICM42688.h"

ICM42688::ICM42688() {}

void
ICM42688::csLow()
{
  digitalWrite(_cs, LOW);
}
void
ICM42688::csHigh()
{
  digitalWrite(_cs, HIGH);
}

void
ICM42688::begin()
{
  SPI.begin();
  _cs = SPI.pinSS();
  pinMode(_cs, OUTPUT);
  csHigh();
}

bool
ICM42688::init()
{
  if(whoAmI() != ICM42688_WHOAMI)
    return false;

  writeReg(REG_PWR_MGMT0, 0x0F);
  delay(10);

  return true;
}

uint8_t
ICM42688::whoAmI()
{
  return readReg(REG_WHO_AM_I);
}

void
ICM42688::readAccel(float &ax, float &ay, float &az)
{
  uint8_t buf[6];
  readBurst(REG_ACCEL_DATA_X1, buf, 6);

  int16_t x = toSigned16(buf[0], buf[1]);
  int16_t y = toSigned16(buf[2], buf[3]);
  int16_t z = toSigned16(buf[4], buf[5]);

  float scale = 16.0f * 9.81f / 32768.0f;
  ax = x * scale;
  ay = y * scale;
  az = z * scale;
}

void
ICM42688::readGyro(float &gx, float &gy, float &gz)
{
  uint8_t buf[6];
  readBurst(REG_GYRO_DATA_X1, buf, 6);

  int16_t x = toSigned16(buf[0], buf[1]);
  int16_t y = toSigned16(buf[2], buf[3]);
  int16_t z = toSigned16(buf[4], buf[5]);

  float scale = 2000.0f / 32768.0f;
  gx = x * scale;
  gy = y * scale;
  gz = z * scale;
}

uint8_t
ICM42688::readReg(uint8_t reg)
{
  csLow();
  SPI.transfer(reg | 0x80);
  uint8_t val = SPI.transfer(0x00);
  csHigh();
  return val;
}

void
ICM42688::readBurst(uint8_t startReg, uint8_t *buf, uint8_t len)
{
  csLow();
  SPI.transfer(startReg | 0x80);
  for(uint8_t i = 0; i < len; i++) {
    buf[i] = SPI.transfer(0x00);
  }
  csHigh();
}

void
ICM42688::writeReg(uint8_t reg, uint8_t val)
{
  csLow();
  SPI.transfer(reg & 0x7F);
  SPI.transfer(val);
  csHigh();
}

int16_t
ICM42688::toSigned16(uint8_t hi, uint8_t lo)
{
  return (int16_t)((hi << 8) | lo);
}
