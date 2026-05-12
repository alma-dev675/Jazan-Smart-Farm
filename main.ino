// كود مشروع ري مزارع جازان الذكي
int soilMoisturePin = A0; 
int pumpPin = 13;

void setup() {
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(soilMoisturePin);
  if (moistureValue < 500) { 
    digitalWrite(pumpPin, HIGH); // تشغيل المضخة
  } else {
    digitalWrite(pumpPin, LOW); // إيقاف المضخة
  }
  delay(1000);
}
