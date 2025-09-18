int step=11;
int dir=12;
char direction=0;
int speed=0;
void setup() {
  pinMode(step, OUTPUT);
  pinMode(dir,OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter direction and speed of motor(w for clockwise and s for anti clockwise)");
}

void loop(){
  if (Serial.available()>0)
  {
    direction=Serial.read();
    speed=Serial.parseInt();
  }
  if(direction=='w')
  {
    for(int i=0;i<speed;i++)
    {
    digitalWrite(dir, HIGH);
    digitalWrite(step, HIGH);
    delay(50);
    digitalWrite(step, LOW);
    delay(50);
    }
  }
  else if(direction=='s')
  {
    for(int i=0;i<speed;i++){
    digitalWrite(dir, LOW);
    digitalWrite(step, HIGH);
    delay(50);
    digitalWrite(step, LOW);
    delay(50);
  }
  else
  {
    Serial.print("Invalid input");
  }
}
}
