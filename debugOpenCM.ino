int incomingByte = 0;

union DXL_IDs
{
  short dxl_ids;
  byte bytes[2];
};
byte controlData[2];
void setup() {

Serial.begin(115200); // opens serial port, sets data rate to 9600 bps

}

void loop() {
  if (Serial.available() > 0) {

    Serial.println(Serial.read());
  }
}
