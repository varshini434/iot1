int led =5;
int led1=6;
int led2=4;
int led3=8;
void setup() {
  // put your setup code here, to run once:
  pinMode (led,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  
                  
                  
                  

}
