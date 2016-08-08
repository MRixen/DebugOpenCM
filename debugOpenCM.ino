int incomingByte = 0;

union REC_DATA
{
	short recData;
	byte bytes[2];
};

union DXL_MSG
{
	int dxl_msg;
	byte bytes[4];
};

void setup() {
	Serial.begin(115200);
}

void loop() {
	int idData[8];

	for (size_t i = 0; i < 8; i++) {
		if((3 & (1 << i)) > 0) idData[i] = 1;
		else idData[i] = 0;

		//Serial.print(i);
		//Serial.print(": ");
		//Serial.println((1 << i));
		Serial.print(i);
		Serial.print(": ");
		Serial.println(idData[i]);


	}
	delay(2000);
}
