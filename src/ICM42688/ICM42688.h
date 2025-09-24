#ifndef ICM42688_H
#define ICM42688_H

#include <Arduino.h>
#include <SPI.h>
#include <InertialIO.h>

#include "registers.h"

class ICM42688 : InertialIO {
public:
    ICM42688();
    void begin() override;
    bool init();
    uint8_t whoAmI();
    void readAccel(float &ax, float &ay, float &az);
    void readGyro(float &gx, float &gy, float &gz);

private:
    uint8_t _cs;
    void csLow();
    void csHigh();
    uint8_t readReg(uint8_t reg);
    void readBurst(uint8_t startReg, uint8_t *buf, uint8_t len);
    void writeReg(uint8_t reg, uint8_t val);
    int16_t toSigned16(uint8_t hi, uint8_t lo);
};

#endif
