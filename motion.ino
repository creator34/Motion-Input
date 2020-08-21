#include <Keyboard.h>

#include <NewPing.h>
 NewPing sonar(13,12);
 

void setup() {
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Keyboard.begin();
  delay(100);// put your setup code here, to run once:
 Keyboard.releaseAll();
}

void loop() {
  while(digitalRead(2))
  {}
  int dist= sonar.ping_cm();
  while( dist<=10)
  {Keyboard.press(KEY_LEFT_ARROW);
  delay(200);
  dist=sonar.ping_cm();}
  while(dist >=11 && dist<=20 )
 { Keyboard.press(KEY_RIGHT_ARROW);
  delay(200) ;
  dist = sonar.ping_cm();}
  Keyboard.releaseAll();
   

}
