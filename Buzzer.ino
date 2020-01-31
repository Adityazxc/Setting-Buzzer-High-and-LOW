#define BUZZER_ON LOW
#define BUZZER_OFF !BUZZER_ON

const byte PIN_BUZZER =2;

void setup(){
  pinMode(PIN_BUZZER, OUTPUT);
 
}

void loop(){
  digitalWrite(PIN_BUZZER, BUZZER_ON);
  delay(200);

  digitalWrite(PIN_BUZZER, BUZZER_OFF);
  delay(100);

  digitalWrite(PIN_BUZZER, BUZZER_ON);
  delay(200);

  digitalWrite(PIN_BUZZER, BUZZER_OFF);
  delay(1000);
}
