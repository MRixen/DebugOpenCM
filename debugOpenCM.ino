int incomingByte = 0;

union REC_DATA
{
	short recData;
	byte bytes[2];
};

byte ids[2];
byte speed[1];
byte posData1[2];
byte posData2[2];
byte msgStart[2];
byte msgStopp[2];

byte incomingData[8] ;

void setup() {
	Serial.begin(115200);
}

void loop() {
	if (Serial.available() > 0) {
		for (size_t i = 0; i < 8; i++) incomingData[i] = Serial.read();
	}
		// Read msg start
		//Serial.readBytes(msgStart, 2);


		REC_DATA data;
		data.bytes[0] = incomingData[0];
		data.bytes[1] = incomingData[1];
		data.bytes[2] = incomingData[2];
		data.bytes[3] = incomingData[3];


		Serial.print(data.recData);

		//REC_DATA data;
		//data.bytes[0] = msgStart[0];
		//data.bytes[1] = msgStart[1];

		////if (data.recData == 9999) {
		//	// Read IDs
		//	Serial.readBytes(ids, 2);
		//	//REC_DATA data;
		//	data.bytes[0] = ids[0];
		//	data.bytes[1] = ids[1];

		//	// Read speed
		//	Serial.readBytes(speed, 1);

		//	// Read position
		//	Serial.readBytes(posData1, 2);
		//	REC_DATA dataPos1Temp;
		//	dataPos1Temp.bytes[0] = posData1[0];
		//	dataPos1Temp.bytes[1] = posData1[1];

		//	Serial.readBytes(posData2, 2);
		//	REC_DATA dataPos2Temp;
		//	dataPos2Temp.bytes[0] = posData2[0];
		//	dataPos2Temp.bytes[1] = posData2[1];

		//	// Print
		//	Serial.print(data.recData);
		//	Serial.print(" ");
		//	Serial.print(speed[0]);
		//	Serial.print(" ");
		//	Serial.print(dataPos1Temp.recData);
		//	Serial.print(" ");
		//	Serial.print(dataPos2Temp.recData);
		//}
	
}
