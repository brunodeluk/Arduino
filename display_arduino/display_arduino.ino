#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 10, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  lcd.print("Hello World");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("settig cursor");
  delay(3000);
  lcd.clear();
}
