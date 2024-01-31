#include <Keyboard.h>

void setup() {


  Serial.begin (9600);

  pinMode( 8, INPUT_PULLUP); // C1 
  pinMode( 9, INPUT_PULLUP); // C2
  pinMode(10, INPUT_PULLUP); // C3
  pinMode(11, INPUT_PULLUP); // C4

  pinMode(2, OUTPUT); // R4
  pinMode(3, OUTPUT); // R3
  pinMode(4, OUTPUT); // R2
  pinMode(5, OUTPUT); // R1

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
}

void loop() {

  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW ); // R1

   if (digitalRead(8) == 0) {
  Serial.println("1");
  Keyboard.write('u');
  delay(100);}
   if (digitalRead(9) == 0) {
  Serial.println("2");
   Keyboard.write('o');
  delay(100);}
   if (digitalRead(10) == 0) {
  Serial.println("3");
   Keyboard.write('p');
  delay(100);}
   if (digitalRead(11) == 0) {
  Serial.println("4"); 
  Keyboard.write('l');
  delay(100);}

  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW ); // R2
  digitalWrite(5, HIGH);

   if (digitalRead(8) == 0) {
  Serial.println("5");
   Keyboard.write('w');
  delay(100);}
   if (digitalRead(9) == 0) {
  Serial.println("6");
   Keyboard.write('e');
  delay(100);}
   if (digitalRead(10) == 0) {
  Serial.println("7");
     Keyboard.write('t');
  delay(100);}
   if (digitalRead(11) == 0) {
  Serial.println("8");
     Keyboard.write('y');
  delay(100);}
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW ); // R3
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);



   if (digitalRead(8) == 0) {
  Serial.println("9");
     Keyboard.write('g');
  delay(100);}
   if (digitalRead(9) == 0) {
  Serial.println("10");
     Keyboard.write('h');
  delay(100);}
   if (digitalRead(10) == 0) {
  Serial.println("11");
     Keyboard.write('j');
  delay(100);}
   if (digitalRead(11) == 0) {
  Serial.println("12");
     Keyboard.write('k');
  delay(100);}

  digitalWrite(2, LOW ); // R4 
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);




 if (digitalRead(8) == 0) {
  Serial.println("13");
     Keyboard.write('a');
  delay(100);}
   if (digitalRead(9) == 0) {
  Serial.println("14");
     Keyboard.write('s');
  delay(100);}
   if (digitalRead(10) == 0) {
  Serial.println("15");
     Keyboard.write('d');
  delay(100);}
   if (digitalRead(11) == 0) {
  Serial.println("16");
  Keyboard.write('f');
  delay(100);}
   
  delay (100); }