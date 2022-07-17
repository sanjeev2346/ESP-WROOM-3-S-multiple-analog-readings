//Declaration of GPIO pins based on the Datasheet
const int pot = 34;
const int pot1 = 35;
const int pot4 = 25;
const int pot5 = 26;

int potValue = 0;

void setup() {
  Serial.begin(9600);
  delay(500);
  
}


void loop() {
  
  //function call
  float mq1;
  mq1=wroom(pot);
  Serial.println(mq1,pot);
  float mq2;
  mq2=wroom(pot1);
  Serial.println(mq2,pot1);
  float mq5;
  mq5=wroom(pot4);
  Serial.println(mq5,pot4);
  float mq6;
  mq6=wroom(pot5);
  Serial.println(mq6,pot5);
  delay(5000);
  
}
//fuction declaration
// user defined functions is used
float wroom(int x){
    float sensorVoltage;
    float percentage;
    //analog values from the sensors
    potValue = analogRead(x);
    sensorVoltage = potValue*(3.0/4095);
    percentage = (sensorVoltage/3)*100;
    delay(250);
    return percentage;
}
