int led1 =5;
int led2=6;
int led3=4;
int led4=1;
int led5=2;
int led6=3;
int led7=6;
int led8=9;
int button1=7;
int button2=8;
void setup() {
  // put your setup code here, to run once:
  pinMode (button1,INPUT);
  pinMode (button2,INPUT);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);
  pinMode (led6,OUTPUT);
  pinMode (led7,OUTPUT);
  pinMode (led8,OUTPUT);
  


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(button1,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(button1,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(button2,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  delay(1000);
  digitalWrite(button2,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(1000);
  
                  
                  
                  

}
