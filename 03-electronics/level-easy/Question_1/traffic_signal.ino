//traffic signal controller with serial output

void setup(){
  Serial.begin(9600); //Opens serial monitor connection (9600)
}

void loop(){
  
  //case 1: to print for RED light
  Serial.println(" RED light - Stop ");
  delay(10000);
  
  //case 2: to print for GREEN light
  Serial.println(" GREEN light - Go ");
  delay(7000);
  
  //case 3: to print for YELLOW light
  Serial.println(" YELLOW light - wait ");
  delay(3000);
}