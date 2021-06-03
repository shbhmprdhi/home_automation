#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); //TX, RX
String command;
void setup()
{
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  while (BT.available())
{
  delay(10);
  char c = BT.read();
  command += c;
  } 
  if (command.length() > 0) {
    Serial.println(command);
  if(command == "light on")
  {
    digitalWrite(2, HIGH);
  }
  else if(command == "light off")
  {
    digitalWrite(2, LOW);
  }
  else if (command == "lamp on")
  {
    digitalWrite (3, HIGH);
  }
  else if ( command == "lamp off")
 {
   digitalWrite (3, LOW);
 }
  else if (command == "fan on")
 {
   digitalWrite (4, HIGH);
 }
  else if (command == "fan of")
 {
   digitalWrite (4, LOW);
 }
  else if (command == "all on")
 {
   digitalWrite (2, HIGH);
   digitalWrite (3, HIGH);
   digitalWrite (4, HIGH);
 }
  else if (command == "off")
 {
   digitalWrite (2, LOW);
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
 }
command="";}}
// Open For suggessions...
//thankyou- SHUBHAM PARDHI
