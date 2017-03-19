void laser_shot(){
  analogWrite(pin_laser, laser_pwm_shot);
  delay(laser_time_shot);
  analogWrite(pin_laser, laser_pwm_on);
}

void laser_on(){
  analogWrite(pin_laser, laser_pwm_on);
}

void laser_off(){
  analogWrite(pin_laser, 0);
}
