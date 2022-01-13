#define SensorPin A7 
float sensorValue = 0; 
void setup() { 
  pinMode(3,OUTPUT);
  Serial.begin(9600); 
} 
void loop() { 
  //calculate average of 100 values for accuracy
  for (int i = 0; i <= 100; i++) 
  { 
    sensorValue = sensorValue + analogRead(SensorPin); 
    delay(1); 
  } 
  sensorValue = sensorValue/100.0; 
  if (sensorValue >= 500)
    digitalWrite(3,LOW); // turn the MOSFET Switch ON
  else
    digitalWrite(3,HIGH);//turn the MOSFET Switch OFF

  Serial.println(sensorValue);//send data to Serial Monitor which will be sent to ThingsSpeak
  delay(30); 

}
