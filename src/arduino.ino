// Zahrnutie Servo knižnice
#include <Servo.h>.

// Definícia pinov Trigger a Echo ultrazvukového senzora
const int trigPin = 10;
const int echoPin = 11;

// Definícia premenných pre výpočet vzdialenosti
long duration;
int distance;

// Definícia objektu Servo pre ovládanie servomotora
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT); // Nastavenie trigPin ako výstup
  pinMode(echoPin, INPUT); // Nastavenie echoPin ako vstup
  Serial.begin(9600);
  myServo.attach(12);  // Definícia pinu 12 pre servomotor
}

void loop() {
  // Rotuje servomotor od 15 do 165 stupňov
  for (int i = 15; i <= 165; i++) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance(); // Zavolanie funkcie pre výpočet vzdialenosti meranej ultrazvukovým senzorom pre každý stupeň

    Serial.print(i); // Odošle hodnotu uhla do sériovej linky
    Serial.print(","); // Odošle ďalší znak hneď vedľa predchádzajúcej hodnoty potrebný neskôr v Processing IDE pre indexovanie
    Serial.print(distance); // Odošle hodnotu vzdialenosti do sériovej linky
    Serial.print("."); // Odošle ďalší znak hneď vedľa predchádzajúcej hodnoty potrebný neskôr v Processing IDE pre indexovanie
  }

  // Spätný pohyb servomotora od 165 do 15 stupňov
  for (int i = 165; i > 15; i--) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

// Funkcia pre výpočet vzdialenosti meranej ultrazvukovým senzorom
int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Nastaví trigPin na vysoký stav po dobu 10 mikrosekúnd
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Prečíta echoPin, vráti čas cesty zvukovej vlny v mikrosekundách
  distance = duration * 0.034 / 2;
  return distance;
}