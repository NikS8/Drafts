/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\
            createDataString
\*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
String createDataString() {
  String resultData;

  resultData.concat(F("{"));
  resultData.concat(F("\n\"deviceId\":\""));
  resultData.concat(DEVICE_ID);
  //  resultData.concat(F("\"edusya\""));
  resultData.concat(F("\",\n\"version\":"));
  resultData.concat(VERSION);

  resultData.concat(F(",\n\"data\": {"));

  
  resultData.concat(F("\n\"br-trans-1\":"));
  resultData.concat(String(emon1.calcIrms(1480), 1));
  resultData.concat(F(","));
  resultData.concat(F("\n\"br-trans-2\":"));
  resultData.concat(String(emon2.calcIrms(1480), 1));
  resultData.concat(F(","));
  resultData.concat(F("\n\"br-trans-3\":"));
  resultData.concat(String(emon3.calcIrms(1480), 1));
 
  resultData.concat(F("\n\t }"));
  resultData.concat(F(",\n\"freeRam\":"));
  resultData.concat(freeRam());
  resultData.concat(F(",\n\"upTime\":\""));
  resultData.concat(upTime(millis()));
  resultData.concat(F("\"\n }"));

  return resultData;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/