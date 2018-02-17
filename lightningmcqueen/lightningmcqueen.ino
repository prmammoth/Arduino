
int FORWARD = 0;
int BACKWARD = 1;
int STOP = 2;

int FL = 0;
int FR = 1;
int BL = 2;
int BR = 3;

int I1 = 3;
int I2 = 2;


int count = 1;
void setup() {
  pinMode(I1, OUTPUT);
  pinMode(I2, OUTPUT);
  // put your setup code here, to run once:

}


void control(int motor, int control){

  if (motor == BL) {
    if ( control == FORWARD){
        digitalWrite(I1, HIGH);
        digitalWrite(I2, LOW);    
    } else if (control == BACKWARD) {
        digitalWrite(I1, LOW);
        digitalWrite(I2, HIGH);
    } else if (control == STOP){
        digitalWrite(I1, LOW);
        digitalWrite(I2, LOW);
    } else {
      
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while (count > 0) {
    
    control(BL, FORWARD);
    delay(2000);
    control(BL, STOP);
    delay(2000);
    control(BL, BACKWARD);
    delay(2000);
    control(BL, STOP);
    //count = count - 1;
  }
}
