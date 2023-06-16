#include "ESPConfiguration.h"

void* getAPI_Cron(String subtype, String params);
void* getAPI_Loging(String subtype, String params);
void* getAPI_LogingDaily(String subtype, String params);
void* getAPI_Timer(String subtype, String params);
void* getAPI_Variable(String subtype, String params);
void* getAPI_VariableColor(String subtype, String params);
void* getAPI_VButton(String subtype, String params);
void* getAPI_Dht1122(String subtype, String params);
void* getAPI_Ds18b20(String subtype, String params);
void* getAPI_Impulse(String subtype, String params);
void* getAPI_RTC(String subtype, String params);
void* getAPI_UART(String subtype, String params);
void* getAPI_ButtonIn(String subtype, String params);
void* getAPI_ButtonOut(String subtype, String params);
void* getAPI_Buzzer(String subtype, String params);
void* getAPI_Encoder(String subtype, String params);
void* getAPI_IoTServo(String subtype, String params);
void* getAPI_Pwm8266(String subtype, String params);
void* getAPI_TelegramLT(String subtype, String params);
void* getAPI_Thermostat(String subtype, String params);
void* getAPI_Lcd2004(String subtype, String params);

void* getAPI(String subtype, String params) {
void* tmpAPI;
if ((tmpAPI = getAPI_Cron(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Loging(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_LogingDaily(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Timer(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Variable(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_VariableColor(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_VButton(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Dht1122(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Ds18b20(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Impulse(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_RTC(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_UART(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_ButtonIn(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_ButtonOut(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Buzzer(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Encoder(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_IoTServo(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Pwm8266(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_TelegramLT(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Thermostat(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Lcd2004(subtype, params)) != nullptr) return tmpAPI;
return nullptr;
}