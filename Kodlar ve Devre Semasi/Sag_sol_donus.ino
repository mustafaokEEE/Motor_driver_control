// Pin tanımlamaları
int IN1_FORWARD = 7;
int IN2_BACKWARD = 8;
int ENA = 9;  // PWM pini (hız kontrolü)

void setup() {
  // Pin modları
  pinMode(IN1_FORWARD, OUTPUT);
  pinMode(IN2_BACKWARD, OUTPUT);
  pinMode(ENA, OUTPUT);

  // Başlangıçta motoru durdur
  digitalWrite(IN1_FORWARD, LOW);
  digitalWrite(IN2_BACKWARD, LOW);
}

void loop() {

  digitalWrite(IN1_FORWARD, HIGH);
  digitalWrite(IN2_BACKWARD, LOW);
  analogWrite(ENA, 255); 

  delay(5000); 

  digitalWrite(IN1_FORWARD, LOW);
  digitalWrite(IN2_BACKWARD, LOW); 

  delay(2000);

  digitalWrite(IN1_FORWARD, LOW);
  digitalWrite(IN2_BACKWARD, HIGH);
  analogWrite(ENA, 255);  

  delay(5000);  
  
  digitalWrite(IN1_FORWARD, LOW);
  digitalWrite(IN2_BACKWARD, LOW); 

  delay(2000);  // 2 saniye bekle
}
