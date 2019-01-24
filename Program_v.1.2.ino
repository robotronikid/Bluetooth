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
  Serial.print("SMART HOME");
}
void loop()
{
  if (Serial.available()> 0)
  {
    DataBluetooth=Serial.read() -40;
  }
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
      Serial.print("Kunci Mati");
    }
    if (DataBluetooth == 4)
    {
      digitalWrite (Key,HIGH);
      Serial.print("Kunci AKtif");
    }
    if (DataBluetooth == 5)
    {
      digitalWrite (Lamp,LOW);
      Serial.print("Lampu Mati");
    }
    if (DataBluetooth == 6)
    {
      digitalWrite (Lamp,HIGH);
      Serial.print("Lampu Aktif");
    }
    if (DataBluetooth == 7)
    {
      digitalWrite (Fan,LOW);
      Serial.print("Kipas Mati");
    }
    else if (DataBluetooth == 8)
    {
      digitalWrite (Fan,HIGH);
      Serial.print("Kipas Aktif");
    }}
