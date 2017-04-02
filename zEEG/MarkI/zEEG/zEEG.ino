// Initialize inputs
int analogPin0 = 0;     
int analogPin1 = 1;
int analogPin2 = 2;     
int analogPin3 = 3;
int analogPin4 = 4;     
int analogPin5 = 5;
int analogPin6 = 6;     
int analogPin7 = 7;
int analogPin8 = 8;     
int analogPin9 = 9;

// Variable to store the value reads

int val0 = 0;   
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int val6 = 0;
int val7 = 0;
int val8 = 0;
int val9 = 0;        


void setup()

{

  Serial.begin(9600);          //  setup serial

}



void loop()

{

  val0 = analogRead(analogPin0);    // read the input pin
  val1 = analogRead(analogPin1);    // read the input pin
  val2 = analogRead(analogPin2);    // read the input pin
  val3 = analogRead(analogPin3);    // read the input pin
  val4 = analogRead(analogPin4);    // read the input pin
  val5 = analogRead(analogPin5);    // read the input pin
  val6 = analogRead(analogPin6);    // read the input pin
  val7 = analogRead(analogPin7);    // read the input pin
  val8 = analogRead(analogPin8);    // read the input pin
  val9 = analogRead(analogPin9);    // read the input pin

  Serial.println(val0);             // debug value
  Serial.println(val1);             // debug value
  Serial.println(val2);             // debug value
  Serial.println(val3);             // debug value
  Serial.println(val4);             // debug value
  Serial.println(val5);             // debug value
  Serial.println(val6);             // debug value
  Serial.println(val7);             // debug value
  Serial.println(val8);             // debug value
  Serial.println(val9);             // debug value

}
