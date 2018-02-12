int incomingByte = 0;   // for incoming serial data

void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}
int i = 0;
void loop() {

  Serial.println("HERE COMES THE MESSAGE");
  Serial.println("                      ");
  Serial.print("THE MESSAGE IS  ; 12345678910 ABCDEFGHIJKLMNOPQRSTUVWXYZ");

  for (i = 0; i < 256; i++){
    Serial.print(" ");
    Serial.println(i);
    
        }
}
