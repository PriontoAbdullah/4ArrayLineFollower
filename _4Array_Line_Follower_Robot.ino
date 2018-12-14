int
sensor1,
sensor2,
sensor3,
sensor4;

int
motorpin1 = 2,
motorpin2 = 3,
motorpin3 = 4,
motorpin4 = 5,
enable1 = 9, 
enable2 = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(11, INPUT);

  
  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
  pinMode(motorpin3, OUTPUT);
  pinMode(motorpin4, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
  digitalWrite(enable1, HIGH);
  digitalWrite(enable2, HIGH); 
}


void loop()
{
  Serial.print("");
  int sensor1 = digitalRead(6);
 Serial.print("");
  int sensor2 = digitalRead(7);
Serial.print("");
  int sensor3 = digitalRead(8);
Serial.print("");
  int sensor4 = digitalRead(11);
Serial.print("");

  Serial.println(sensor1);
  Serial.println(sensor2);
  Serial.println(sensor3);
  Serial.println(sensor4);

if ((sensor1==HIGH)&&(sensor2==HIGH)&&(sensor3==HIGH)&&(sensor4==HIGH)) 
    
    {
      digitalWrite(motorpin1, HIGH); //FOWFORD
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
    // delay(50);
    } else
   
 if ((sensor1==LOW)&&(sensor2==HIGH)&&(sensor3==HIGH)&&(sensor4==LOW)) 
    
    {
      digitalWrite(motorpin1, HIGH); //FOWFORD
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
    // delay(50);
    } else
if ((sensor1==HIGH)&&(sensor2==LOW)&&(sensor3==LOW)&&(sensor4==HIGH))
    {
      digitalWrite(motorpin1, HIGH); //FORWARD
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
    //  delay(50);
    } else
if ((sensor1==LOW)&&(sensor2==LOW)&&(sensor3==HIGH)&&(sensor4==HIGH)) 
   
    {
      digitalWrite(motorpin1, HIGH); //RIGHT
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, LOW);
      digitalWrite(motorpin4, HIGH);
     // delay(50);
    } else
   if ((sensor1 == HIGH)&&(sensor2 == HIGH)&&(sensor3 == LOW)&&(sensor4 == LOW))  
    {
      digitalWrite(motorpin1, LOW); //LEFT
      digitalWrite(motorpin2, HIGH);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
    //  delay(50);
    } else
   if ((sensor1 == HIGH)&&(sensor2 == HIGH)&&(sensor3 == HIGH)&&(sensor4 == LOW)) 
{
      digitalWrite(motorpin1, LOW); //LEFT
      digitalWrite(motorpin2, HIGH);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
    //  delay(50);
    } else
if ((sensor1==LOW)&&(sensor2==LOW)&&(sensor3==LOW)&&(sensor4==HIGH)) 
    {
      digitalWrite(motorpin1, HIGH); //RIGHT
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, LOW);
      digitalWrite(motorpin4, HIGH);
      delay(50);
    } else
if ((sensor1==HIGH)&&(sensor2==HIGH)&&(sensor3==HIGH)&&(sensor4==HIGH)) 
    {
      digitalWrite(motorpin1, LOW); //BACKWORD
      digitalWrite(motorpin2, HIGH);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
   //   delay(50);
    } else
if ((sensor1==HIGH)&&(sensor2==HIGH)&&(sensor3==LOW)&&(sensor4==LOW)) 
    {
      digitalWrite(motorpin1, LOW); //RIGHT
      digitalWrite(motorpin2, HIGH);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
     // delay(50);
    } else
if ((sensor1==HIGH)&&(sensor2==LOW)&&(sensor3==LOW)&&(sensor4==LOW)) 
    {
      digitalWrite(motorpin1, LOW); //LEFT
      digitalWrite(motorpin2, HIGH);
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
    //  delay(50);
    } else
if ((sensor1==LOW)&&(sensor2==HIGH)&&(sensor3==HIGH)&&(sensor4==HIGH)) 
    {
      digitalWrite(motorpin1, HIGH); //RIGHT
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, LOW);
      digitalWrite(motorpin4, HIGH);
     // delay(50);
    } 
else
    {
      digitalWrite(motorpin1, LOW); //STOP
      digitalWrite(motorpin2, LOW);
      digitalWrite(motorpin3, LOW);
      digitalWrite(motorpin4, LOW);
    //  delay(50);
    }
}


