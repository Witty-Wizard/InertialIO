#include <InertialIO.h>

ICM42688 IMU;

void setup() {
  Serial.begin(115200);
  IMU.begin();
  IMU.init();
}

void loop() {
  float x, y, z;
  IMU.readAccel(x, y, z);

  Serial.print("Acc X: ");
  Serial.print(x);
  Serial.print(" m/s^2, Y: ");
  Serial.print(y);
  Serial.print(" m/s^2, Z: ");
  Serial.print(z);
  Serial.println(" m/s^2");
}