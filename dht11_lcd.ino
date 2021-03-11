#include <dht11.h>
#include <LiquidCrystal.h>
dht11 DHT11;
#define DHT11PIN 8
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // connessione display (pin)
void setup()
{
  //lcd.begin(16, 2); // imposto il tipo di display (colonne, righe)
}

void loop()
{
  lcd.begin(16, 2); // imposto il tipo di display (colonne, righe)
  int chk = DHT11.read(DHT11PIN);
  int t = (float)DHT11.temperature;
  int h = (float)DHT11.humidity;
    lcd.setCursor(0,0);
    lcd.print("Temperatura: ");
    lcd.print(t);
    lcd.print("C");
    lcd.setCursor(0,1);
    lcd.print("Umidita': ");
    lcd.print(h);
    lcd.print("%");

  delay(2000);
}
