
/*
  Hello World Sketch
*/

#include<Serial.h>

//Setup von allen nötigen PINs etc
void setup() {

  Serial.begin(9600);
  // C
  pinMode(13, OUTPUT);


  //Hier wird dem Compilter mitgeteilt, dass es sich hierbei bereits um Assembler Code handelt
  asm volatile
  (
    //0x20 wird hier in die Adresse R16 geladen
    " LDI R16, 0x20\n"
    //Der Inhalt von R16 wird nun in 0x04 ausgegeben
    " OUT 0x04, R16\n"
  );
}



//IN der Loop Metode wird ein Code erstellt, welches der Onboard LED ermöglicht in einem festgesetzten Zeitraum zu blinken
void loop() {

  //Die LED leuchtet
  digitalWrite(13, HIGH);

  //Verzögerung
  delay(1000);

  //Die LED wird ausgeschaltet
  digitalWrite(13, LOW);

  //Verzögerung
  delay(1000);

}
