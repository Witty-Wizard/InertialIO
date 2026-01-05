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