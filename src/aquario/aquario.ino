#include <OneWire.h>
#include <Wire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>


OneWire oneWire(5);
DallasTemperature sensors(&oneWire);


LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

const int redPin = 2;
const int greenPin = 1;
const int bluePin = 0;
const int buttonPin1 = 3; 
const int buttonPin2 = 4;
const int motorPin1 = 9;
const int motorPin2 = 6;
const int relePin = 7;

float temp = 0; 
int maxTemp = 30;
int minTemp = 21;
int okTemp = 25;
int buttonState1 = 0; 
int buttonState2 = 0;
int menu = 0; 

void setup() {
  sensors.begin();
  lcd.begin(16,2);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(relePin, OUTPUT);
 
}

void loop() {
  lcd.setBacklight(HIGH);
  sensors.requestTemperatures();
  temp = sensors.getTempCByIndex(0);
  buttonState1 = digitalRead(buttonPin1); 
  buttonState2 = digitalRead(buttonPin2);

  if(buttonState1 == 1 && buttonState2 == 1){
    if(menu == 1){
      menu = 0;
   }else{
      menu = 1; 
   }
 }
 
  if(menu == 0){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature:");
    lcd.setCursor(0,1); 
    lcd.print(temp);
    
 }else if(menu == 1){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("change ideal temp:");
    lcd.setCursor(0,1);
    lcd.print("->");
    lcd.print(okTemp);
    delay(200);
    lcd.setCursor(1,1);
    lcd.print(" "); 
    lcd.setCursor(0,1);
    lcd.print(" "); 
      if(buttonState1 == 1 && buttonState2 == 0){
        okTemp ++;
        maxTemp ++;
        minTemp ++;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("change ideal temp:");
        lcd.print("-> ");
        lcd.print(okTemp);
        delay(200);
        lcd.setCursor(1,1);
        lcd.print(" ");
        lcd.setCursor(0,1);
        lcd.print(" "); 
     }else if(buttonState1 == 0 && buttonState2 == 1){
        okTemp --;
        maxTemp --; 
        minTemp --;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("change ideal temp:"); 
        lcd.print("-> ");
        lcd.print(okTemp);
        delay(200);
        lcd.setCursor(1,1);
        lcd.print(" ");
        lcd.setCursor(0,1);
        lcd.print(" "); 
     }
  }
  if(temp<minTemp){
    delay(200);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    delay(200);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW); 
    analogWrite(motorPin1, 0);
    digitalWrite(relePin, LOW);
  }else if(temp>=minTemp && temp<=okTemp){
    delay(200);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    delay(200);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, HIGH);
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, 0);
    digitalWrite(relePin, HIGH);
  }else if(temp>maxTemp){
    delay(200);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    delay(200);
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    analogWrite(motorPin1, 150);
    analogWrite(motorPin2, 150);
    digitalWrite(relePin, HIGH);
  }else{
    delay(200);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW); 
    delay(200);
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, HIGH);
    analogWrite(motorPin1, 75);
    analogWrite(motorPin2, 75);
    digitalWrite(relePin, HIGH);  
  }
  delay(500);
}
