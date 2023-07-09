
int LedJaune=2;
int LedVerte=3;
int LedRouge=4;
int LedBlanche=5;
int touche;

void setup()
{
  Serial.begin(9600);
  Serial.flush();
  pinMode(LedJaune,OUTPUT);
  pinMode(LedVerte,OUTPUT);
  pinMode(LedRouge,OUTPUT);
  pinMode(LedBlanche,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    touche=Serial.read();
    if(touche=='A' || touche=='a')
    {
      digitalWrite(LedJaune,HIGH);
      Serial.println("Led touche A ou a appuyée");
      delay(1000);
    }
    if(touche=='B' || touche=='b')
    {
      digitalWrite(LedVerte,HIGH);
      Serial.println("Led touche B ou b appuyée");
      delay(1000);
    }
    if(touche=='C' || touche=='c')
    {
      digitalWrite(LedRouge,HIGH);
      Serial.println("Led touche C ou c appuyée");
      delay(1000);
    }
    if(touche=='D' || touche=='d')
    {
      digitalWrite(LedBlanche,HIGH);
      Serial.println("Led touche D ou d appuyée");
      delay(1000);
    }
    else
    {
      digitalWrite(LedJaune,LOW);
      digitalWrite(LedVerte,LOW);
      digitalWrite(LedRouge,LOW);
      digitalWrite(LedBlanche,LOW);
      Serial.println("Led éteinte");
      touche=="";
    }
  }
}
