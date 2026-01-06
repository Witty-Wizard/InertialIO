InertialIO
==========

InertialIO is a lightweight Arduino-compatible library that provides a
bus-agnostic interface for inertial sensors.

The library is structured around three layers:

* **InertialIO** – abstract sensor interface
* **InertialBus** – abstract transport layer (I2C / SPI)
* **Device drivers** – sensor-specific implementations

Features
--------

* Unified interface for SPI and I2C transports
* Clean separation between transport and device logic
* Raw accelerometer and gyroscope data access
* Designed for embedded and resource-constrained systems

Examples
--------

Basic usage examples demonstrating initialization and data access
over different transports.

.. toctree::
   :maxdepth: 1

   examples/basic_i2c
   examples/basic_spi

.. _apidocumentation:

API Documentation
-----------------

.. doxygenindex::
   :project: InertialIO

License
-------

.. image:: https://www.gnu.org/graphics/gplv3-or-later.svg
   :target: https://www.gnu.org/licenses/gpl-3.0.en.html
   :alt: GPL-3.0-or-later
   :width: 160

This library is distributed under the
`GNU General Public License v3.0 or later <https://www.gnu.org/licenses/gpl-3.0.en.html>`_.
