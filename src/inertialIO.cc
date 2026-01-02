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

InertialIO::InertialIO(SPIClass *bus, int sdi, int sdo, int scl, int cs)
{
  _transportBus = new SPIBus(bus, sdi, sdo, scl, cs);
}

InertialIO::~InertialIO()
{
  delete _transportBus;
}