/*  "AFANDA Smartwatch.ino"  |  Dec 2024 IT Dev by @afandarobotic.   */

// #include <SD.h>                 // TF Memoriable Function.
#include <SPI.h>                   // Device Communication.
#include "Arduino.h"               // Base on display.
#include "Print.h"                 // Screen Functionaly.
#include "printable.h"
#include <Adafruit_GFX.h>          // Core graphics 64bit display library.
#include <Adafruit_ST7735.h>       // Hardware-specification library of driver.

/*
Arduino Pico Micro Leonardo Setup : 
#define TFT_SCLK     3
#define TFT_MOSI     2
#define TFT_CS      10
#define TFT_DC       8  // (A0)
#define SD_CS        4
#define TFT_RST     14  // (Or set to pin 1 and connect to Arduino RESET pin)
*/

// Arduino Uno R3 Setup : 
#define TFT_SCLK    13
#define TFT_MOSI    11
#define TFT_CS      10
#define TFT_DC       9  // (A0) 
#define TFT_RST      8
#define SD_CS        4

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
