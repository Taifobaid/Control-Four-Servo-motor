#include <Servo.h>
Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
int i = 0;
void setup() {
  servo1.attach(2);
  servo2.attach(8); 
  servo3.attach(9); 
  servo4.attach(10); 
}
void loop() {
  for (i = 0; i < 180; i++) { 
    servo1.write(i);              
    servo2.write(i);     
    servo3.write(i);
    servo4.write(i);         
    delay(10);                      
  }
  for (i = 180; i > 0; i--) { 
    servo1.write(i);                
    servo2.write(i);     
    servo3.write(i);
    servo4.write(i);          
    delay(10);                      
  }
}
