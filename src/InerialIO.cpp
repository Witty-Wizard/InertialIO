#include "InertialIO.h"



IneritalIO::InertialIO(Stream *rxPort, int rxPin, int txPin, bool inverted)
    : _rxPort(rxPort), _rxPin(rxPin), _txPin(txPin), _inverted(inverted) {
  // Constructor implementation
}