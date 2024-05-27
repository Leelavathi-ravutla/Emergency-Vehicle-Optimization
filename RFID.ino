String card1="51007E6DF1B3";
int led=7;
int buzzer=8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  digitalWrite(led,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    String s=Serial.readString();
    Serial.println(s);
    digitalWrite(buzzer,1);
    delay(2000);
    digitalWrite(buzzer,0);
    if(s==card1) {
      digitalWrite(led,0);
      Serial.println("Authorized");
    } else {
      digitalWrite(led,1);
      Serial.println("UnAuthorized");
    }
  }

}
