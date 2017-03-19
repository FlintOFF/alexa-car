void m_left(){
  digitalWrite(left_forward, LOW);
  digitalWrite(left_reverse, HIGH);
  digitalWrite(right_forward, HIGH);
  digitalWrite(right_reverse, LOW);
}

void m_right(){
  digitalWrite(left_forward, HIGH);
  digitalWrite(left_reverse, LOW);
  digitalWrite(right_forward, LOW);
  digitalWrite(right_reverse, HIGH);
}

void m_reverse(){
  digitalWrite(left_forward, LOW);
  digitalWrite(left_reverse, HIGH);
  digitalWrite(right_forward, LOW);
  digitalWrite(right_reverse, HIGH);
}

void m_stop(){
  //LOW - установить пин в 0В
  //HIGH - устновитьпин в +5В
  digitalWrite(left_forward, LOW);
  digitalWrite(left_reverse, LOW);
  digitalWrite(right_forward, LOW);
  digitalWrite(right_reverse, LOW);
}

void m_forward(){
  digitalWrite(left_forward, HIGH);
  digitalWrite(left_reverse, LOW);
  digitalWrite(right_forward, HIGH);
  digitalWrite(right_reverse, LOW);
}

