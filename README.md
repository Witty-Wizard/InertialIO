<p align="center">
    <img src="https://img.shields.io/github/v/release/Witty-Wizard/InertialIO" alt="GitHub Release">
    <img src="https://img.shields.io/github/issues/Witty-Wizard/InertialIO" alt="GitHub Issues">
    <a href="https://github.com/Witty-Wizard/InertialIO/actions/workflows/arduino_ci.yaml">
        <img src="https://github.com/Witty-Wizard/InertialIO/actions/workflows/arduino_ci.yaml/badge.svg" alt="Arduino CI">
    </a>
    <img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/Witty-Wizard/InertialIO?style=flat">
    <a href="https://www.gnu.org/licenses/gpl-3.0.en.html">
        <img src="https://img.shields.io/github/license/Witty-Wizard/InertialIO" alt="License">
    </a>
</p>

# InertialIO

**InertialIO** is a lightweight, Arduino-compatible library that provides a
bus-agnostic interface for inertial sensors. It cleanly separates **transport
logic (SPI / I2C)** from **sensor logic**, making it easy to extend and maintain.

The library currently includes a driver for the **ICM42688** inertial
measurement unit.

## Installation

### Arduino IDE

InertialIO is available via the Arduino Library Manager.

1. Open Arduino IDE
2. Go to Sketch → Include Library → Manage Libraries
3. Search for InertialIO
4. Click Install

### PlatformIO

Add the library to your `platformio.ini` file:

```sh
lib_deps = InertialIO
```

## Contributing to the library

You see a bug or any feature that you require, please feel free to open an issue or if you have fixed the issue then please create a PR on github.

## License

  <a href="https://www.gnu.org/licenses/gpl-3.0.en.html">
    <img src="https://www.gnu.org/graphics/gplv3-or-later.svg" alt="GPL​-3.0​-or​later" width="160">
  </a>

This library is licensed under the [GNU General Public License v3.0 or later](https://www.gnu.org/licenses/gpl-3.0.en.html).