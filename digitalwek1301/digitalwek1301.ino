// these constants won't chage:
const int ledCount=11; //the number of LEDs in the bar graph
int ledPins[]={
  2,3,4,5,6,7,8,9,10,11};

  void setup(){
    for (int thisLed=0;thisLed<ledCount;thisLed++){
      pinMode(ledPins[thisLed],OUTPUT);
      }
  }
void loop(){


  for (int thisLed=0;thisLed<5;thisLed++){ 
    digitalWrite(ledPins[thisLed],HIGH);
    digitalWrite(ledPins[9-thisLed],HIGH);
    delay(100);
    digitalWrite(ledPins[thisLed],LOW);
    digitalWrite(ledPins[9-thisLed],LOW);
  }

  for (int thisLed=4;thisLed>0;thisLed--){ 
    digitalWrite(ledPins[thisLed],HIGH);
    digitalWrite(ledPins[9-thisLed],HIGH);
    delay(100);
    digitalWrite(ledPins[thisLed],LOW);
    digitalWrite(ledPins[9-thisLed],LOW);
  }
  }


  



