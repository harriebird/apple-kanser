# apple-kanser
Kanser your Apple fan friends using ESP32's BLE capability.This was project inspired by
[Techryptic's Flipper Zero Bluetooth Prank](https://techryptic.github.io/2023/09/01/Annoying-Apple-Fans/).

This will broadcast ADV packets for Apple TV to nearby iOS devices via BLE (Bluetooth Low Energy).

## Setup
1. Clone this repository.
2. Install [Adruino IDE](https://www.arduino.cc/en/software).
3. Go to `Preferences > Additional Boards Manager URLs` and add the link below:
    * https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
4. Open the Boards Manager and install `esp32`.
5. Set `ESP32 Dev Module` as your board.
6. Upload the sketch to your Development Board.

## Requirements
### Software
* Arduino IDE
* Board:
    * ESP32
* VSCodium (optional)

### Hardware
* DOIT ESP32 DEVKIT V1

## Disclaimer
This project is a proof of concept for testing and educational purposes.
The author won't take any responsibility for what you do with this program.