#include "ICM42688.h"

ICM42688::ICM42688(TwoWire *bus, int sda, int scl)
  : InertialIO(bus, sda, scl)
{
}

ICM42688::ICM42688(SPIClass *bus, int sdi, int sdo, int scl,
                   int cs)
  : InertialIO(bus, sdi, sdo, scl, cs)
{
}