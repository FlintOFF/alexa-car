String serialCommand = "";
int serialValue = 0;

void controlPC() {
  while (true) {
    SerialReadCommandAndValue();
    
    if (serialCommand != "") {
      if (serialCommand == "forward") {
        m_forward();
        delay(serialValue);
        m_stop();
        SerialSendOk();
      }
      else if(serialCommand == "reverse"){
        m_reverse();
        delay(serialValue);
        m_stop();
        SerialSendOk();
      }
      else if(serialCommand == "right"){
        m_right();
        delay(serialValue);
        m_stop();
        SerialSendOk();
      }
      else if(serialCommand == "left"){
        m_left();
        delay(serialValue);
        m_stop();
        SerialSendOk();
      }
      else if (serialCommand == "stop") {
        m_stop();
        SerialSendOk();
      }
      else if (serialCommand == "servo") {
        servo.write(serialValue); 
        SerialSendOk();
      }
      else if (serialCommand == "laser_on") {
        laser_on();
        SerialSendOk();
      }
      else if (serialCommand == "laser_off") {
        laser_off();
        SerialSendOk();
      }
      else if (serialCommand == "laser_shot") {
        laser_shot();
        SerialSendOk();
      }
      else {
        SerialSendError();
      }
    }

  }
}

void SerialReadCommandAndValue() {
  while (true) {
    String s = Serial.readStringUntil("\n");
    if (s != "") {
      s.replace("\n", "");
      char myBuffer[s.length()+1];
      s.toCharArray(myBuffer, s.length()+1);

      serialCommand = strtok(myBuffer, ":");
      serialValue = atoi(strtok(NULL, ":"));
      break;
    }
  }
}

void SerialSendOk() {
  Serial.println("OK");
}

void SerialSendError() {
  Serial.println("ERROR");
}
