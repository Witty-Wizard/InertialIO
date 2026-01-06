Basic SPI Example
=================

This example demonstrates initializing and reading from an inertial sensor
using InertialIO over SPI.

Example Code
------------

.. code-block:: cpp

   #include <SPI.h>
   #include <InertialIO.h>

   constexpr uint8_t CS_PIN = 10;

   SPIBus bus(SPI, CS_PIN);
   InertialIO imu(bus);

   void setup() {
       Serial.begin(115200);
       SPI.begin();

       if (!imu.begin()) {
           Serial.println("Initialization failed");
           while (1);
       }

       Serial.println("InertialIO ready");
   }

   void loop() {
       float ax, ay, az;
       float gx, gy, gz;

       imu.readAccel(ax, ay, az);
       imu.readGyro(gx, gy, gz);

       Serial.print("Accel: ");
       Serial.print(ax); Serial.print(", ");
       Serial.print(ay); Serial.print(", ");
       Serial.println(az);

       Serial.print("Gyro: ");
       Serial.print(gx); Serial.print(", ");
       Serial.print(gy); Serial.print(", ");
       Serial.println(gz);

       delay(100);
   }
