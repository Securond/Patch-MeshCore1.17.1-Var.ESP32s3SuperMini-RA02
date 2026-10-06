#pragma once

#include <helpers/ESP32Board.h>

class ESP32S3RA02Board : public ESP32Board {
public:
  uint32_t getIRQGpio() override {
    return P_LORA_DIO_0; // SX127x uses DIO0 as the main IRQ
  }

  const char* getManufacturerName() const override {
    return "ESP32-S3 + RA-02";
  }
};
