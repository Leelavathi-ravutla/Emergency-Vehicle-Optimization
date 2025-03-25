String card1 = "51007E6DF1B3"; // Authorized RFID tag ID
int led = 7; // LED pin
int buzzer = 8; // Buzzer pin

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(led, 1); // Initialize LED to unauthorized state
}

void loop() {
  while (Serial.available()) {
    String s = Serial.readString();
    Serial.println(s);
    digitalWrite(buzzer, 1); // Alert of potential access
    delay(2000);
    digitalWrite(buzzer, 0);
    if (s == card1) { // Check if RFID tag ID matches authorized ID
      digitalWrite(led, 0); // Set LED to authorized state
      Serial.println("Authorized");
      // Send signal to traffic signal controller to change signals
    } else {
      digitalWrite(led, 1); // Set LED to unauthorized state
      Serial.println("UnAuthorized");
    }
  }
}


