int Lamp = 9;
int Key = 11;
int Fan = 10;
int Motor1 = 6;
int Motor2 = 5;
int DataBluetooth;
void setup()
{
  Serial.begin(9600);
  pinMode (Lamp,OUTPUT);
  pinMode (Key,OUTPUT);
  pinMode (Fan,OUTPUT);
  pinMode (Motor1,OUTPUT);
  pinMode (Motor2,OUTPUT);
}
void loop() {
  if (Serial.available()> 0)
  {
    DataBluetooth=Serial.read();
    if (DataBluetooth == 1)
    {
      analogWrite (Motor1,500);
      delay (400);
      analogWrite (Motor1,0);
    }
    if (DataBluetooth == 2)
    {
    analogWrite (Motor2,500);
    delay (400);
    analogWrite (Motor1,0);
    }
    if (DataBluetooth == 3)
    {
      digitalWrite (Key,LOW);
    }
    if (DataBluetooth == 4)
    {
      digitalWrite (Key,HIGH);
    }
    if (DataBluetooth == 5)
    {
      digitalWrite (Lamp,LOW);
    }
    if (DataBluetooth == 6)
    {
      digitalWrite (Lamp,HIGH);
    }
    if (DataBluetooth == 7)
    {
      digitalWrite (Fan,LOW);
    }
    if (DataBluetooth == 8)
    {
      digitalWrite (Fan,HIGH);
    }
    delay(100);
}}
