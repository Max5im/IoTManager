#pragma once

#include <Arduino.h>
float yourSensorReading(String type, String addr);

void HDC1080_init(String addr);
void AHTX0_init();
void LCD_init();
void BH1750_init();
