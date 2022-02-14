#pragma once

struct IoTValue {
    float valD = 0;
    String valS = "";
    bool isDecimal = true;
};

class IoTItem {
   public:
    IoTItem(String parameters);
    ~IoTItem();

    void loop();
    virtual void doByInterval();
    virtual IoTValue execute(String command, std::vector<IoTValue> &param);

    void regEvent(String value, String consoleInfo);
    void regEvent(float value, String consoleInfo);

    String getSubtype();
    String getID();

    unsigned long currentMillis;
    unsigned long prevMillis;
    unsigned long difference;

    IoTValue value;  // хранение основного значения, котрое обновляется из сценария, execute(), loop() или doByInterval()

   protected:
    String _subtype;
    String _id;
    unsigned long _interval;
    
    float _multiply;  // умножаем на значение
    float _plus;  // увеличиваем на значение
    int _map1;
    int _map2;
    int _map3;
    int _map4;
    int _round;  // 1, 10, 100, 1000, 10000
};

IoTItem* findIoTItem(String name);  // поиск экземпляра элемента модуля по имени
