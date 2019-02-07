#include <Wire.h>

#include <LiquidCrystal.h>

//program 2.2.1
int HP = 100;
int A = 6;
int B = 7;
int C = 8;
int D = 9;
int Buzz = 10;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
lcd.begin(16, 2);
lcd.print("Player 1");
pinMode(A, INPUT);
pinMode(B, INPUT);
pinMode(C, INPUT);
pinMode(D, INPUT);
pinMode(Buzz, OUTPUT);
Serial.begin(9600);
}

void loop() {
boolean T1 = digitalRead(A);
boolean T2 = digitalRead(B);
boolean T3 = digitalRead(C);
boolean T4 = digitalRead(D);
Serial.print("T1=");
Serial.println(T1);
Serial.print("T2=");
Serial.println(T2);
Serial.print("T3=");
Serial.println(T3);
Serial.print("T4=");
Serial.println(T4);
lcd.setCursor(0, 1);
lcd.print("HP:");
lcd.setCursor(3, 1);
lcd.print(HP);
if (T1 == 1)
  {
   HP = HP-20;
   if (HP <= 0)
 {
   lcd.setCursor(0, 1);
   lcd.print("HP:00");
   digitalWrite(Buzz, HIGH);
   delay(3000);
   digitalWrite(Buzz, LOW);
   lcd.setCursor(0, 1);
   lcd.print("You Are Dead!");
   delay(3000);
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Player 1");
   HP=100;
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
 }
   lcd.setCursor(0, 1);
   lcd.print("HP:   ");
   lcd.setCursor(3, 1);
   lcd.print(HP);
   digitalWrite(Buzz, HIGH);
   delay(1000);
   digitalWrite(Buzz, LOW);
   delay(2000);
  }
if (T2 == 1)
  {
   HP = HP-20;
   if (HP <= 0)
 {
   lcd.setCursor(0, 1);
   lcd.print("HP:00");
   digitalWrite(Buzz, HIGH);
   delay(3000);
   digitalWrite(Buzz, LOW);
   lcd.setCursor(0, 1);
   lcd.print("You Are Dead!");
   delay(3000);
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Player 1");
   HP=100;
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
 }
   lcd.setCursor(0, 1);
   lcd.print("HP:   ");
   lcd.setCursor(3, 1);
   lcd.print(HP);
   digitalWrite(Buzz, HIGH);
   delay(1000);
   digitalWrite(Buzz, LOW);
   delay(2000);
  }
if (T3 == 1)
  {
   HP = HP-30;
   if (HP <= 0)
 {
   lcd.setCursor(0, 1);
   lcd.print("HP:00");
   digitalWrite(Buzz, HIGH);
   delay(3000);
   digitalWrite(Buzz, LOW);
   lcd.setCursor(0, 1);
   lcd.print("You Are Dead!");
   delay(3000);
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Player 1");
   HP=100;
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
 }
   lcd.setCursor(0, 1);
   lcd.print("HP:   ");
   lcd.setCursor(3, 1);
   lcd.print(HP);
   digitalWrite(Buzz, HIGH);
   delay(1000);
   digitalWrite(Buzz, LOW);
   delay(2000);
  }
if (T4 == 1)
  {
   HP = HP-40;
   if (HP <= 0)
 {
   lcd.setCursor(0, 1);
   lcd.print("HP:00");
   digitalWrite(Buzz, HIGH);
   delay(3000);
   digitalWrite(Buzz, LOW);
   lcd.setCursor(0, 1);
   lcd.print("You Are Dead!");
   delay(3000);
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Player 1");
   HP=100;
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
   digitalWrite(Buzz, HIGH);
   delay(500);
   digitalWrite(Buzz, LOW);
   delay(500);
 }
   lcd.setCursor(0, 1);
   lcd.print("HP:   ");
   lcd.setCursor(3, 1);
   lcd.print(HP);
   digitalWrite(Buzz, HIGH);
   delay(1000);
   digitalWrite(Buzz, LOW);
   delay(2000);
  }
}
