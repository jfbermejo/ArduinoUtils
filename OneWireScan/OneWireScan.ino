#include <OneWire.h>
 
const int oneWirePin = 2;
OneWire oneWireBus(oneWirePin);
 
void setup(void) {
  Serial.begin(9600);
  discoverOneWireDevices();
}
 
void discoverOneWireDevices(void) {
  byte i;
  byte present = 0;
  byte data[12];
  byte addr[8];
  
  Serial.println("Buscando dispositivos OneWire");
  Serial.println();
  
  while(oneWireBus.search(addr)) {
    Serial.println("Encontrado dispositivo OneWire en direccion:");
    
    for( i = 0; i < 8; i++) {
      
      Serial.print("0x");
      
      if (addr[i] < 16) {
        Serial.print('0');
      }
      
      Serial.print(addr[i], HEX);
      
      if (i < 7) {
        Serial.print(", ");
      }
      
    }

    Serial.println();
    Serial.println();
    
    if ( OneWire::crc8( addr, 7) != addr[7]) {
        Serial.println("Error en dispositivo, CRC invalido!\n");
        return;
    }
    
  }
  
  Serial.println("Búsqueda finalizada");
  oneWireBus.reset_search();
  return;
}
 
void loop(void) {
  // nada que hacer aqui
}
