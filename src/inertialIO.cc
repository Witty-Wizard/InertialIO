/**
 * @file InertialIO.cc
 * @brief Source file for InertialIO class.
 *
 * @author Witty Wizard
 */

#include "InertialIO.h"

InertialIO::InertialIO(TwoWire *bus, int sci, int scl)
{
  _transportBus = new I2CBus(bus, sci, scl);
}

InertialIO::InertialIO(SPIClass *bus, int cs, int sdi, int sdo, int scl)
{
  _transportBus = new SPIBus(bus, cs, sdi, sdo, scl);
}

InertialIO::~InertialIO()
{
  delete _transportBus;
}