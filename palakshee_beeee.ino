//http://alialkarkuki.blogspot.com/
//Ali Al Karkuki 


#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int a =0;
int e = 7;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Game points");
  pinMode(e,INPUT);
}

void loop() {
  int button = digitalRead(e);
  
  
   lcd.setCursor(3, 1);
    lcd.print(a);
  
  
  if (button == HIGH) {
    a ++;
    lcd.setCursor(3, 1);
    lcd.print(a);
     delay(200);
    }
 
   
    
  
}


