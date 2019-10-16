# ArduinoUtils
Utilidades imprescindibles para trabajar con Arduino

1. [I2CScanner](#i2cscanner)
2. [OneWireScan](#onewirescan)
3. [comandosAT](#comandosat)
4. [softwareReset](#softwarereset)

***

## I2CScanner
Sketch que escanea los dispositivos conectados al bus I2C del Arduino y devuelve la dirección de los mismos.

### Dependencias
- [Wire Library](https://www.arduino.cc/en/Reference/Wire) *-- Uso del bus I2C*

***

## OneWireScan
Sketch que escanea los dispositivos conectados mediante el protocolo One Wire y devuelve la dirección de los mismos.

### Dependencias
- [OneWire Library](https://www.arduinolibraries.info/libraries/one-wire) *-- Uso del protocolo One Wire*

***

## comandosAT
Sketch que permite enviar comandos AT a un dispositivo conectado a la placa Arduino mediante un puerto serie software.

### Dependencias
- - [SoftwareSerial Library](https://www.arduino.cc/en/Reference/SoftwareSerial)

***

## softwareReset
Sketch que resetea la placa Arduino mediante la llamada a una función.
