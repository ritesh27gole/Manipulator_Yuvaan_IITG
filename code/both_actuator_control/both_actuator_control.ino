const int bottom_actuator_extend = 10;
const int bottom_actuator_retract = 9;
const int top_actuator_extend = 8;
const int top_actuator_retract = 7;

int top_actuator_direction = 0; // = 1 -> extend; = -1 -> retract; = 0 -> stop
int bottom_actuator_direction = 0; // = 1 -> extend; = -1 -> retract; = 0 -> stop

void setup() {
  pinMode(bottom_actuator_extend, OUTPUT);
  pinMode(bottom_actuator_retract, OUTPUT);
  pinMode(top_actuator_extend, OUTPUT);
  pinMode(top_actuator_retract, OUTPUT);
  digitalWrite(bottom_actuator_extend, LOW);
  digitalWrite(bottom_actuator_retract, LOW);
  digitalWrite(top_actuator_extend, LOW);
  digitalWrite(top_actuator_retract, LOW);
}

void drive_top_actuator(int top_actuator_direction){
  if (top_actuator_direction == 1){
    digitalWrite(top_actuator_retract, LOW);
    digitalWrite(top_actuator_extend, HIGH);
  }
  else if (top_actuator_direction == -1){
    digitalWrite(top_actuator_extend, LOW);
    digitalWrite(top_actuator_retract, HIGH);
  }
  else if (top_actuator_direction == 0){
    digitalWrite(top_actuator_extend, LOW);
    digitalWrite(top_actuator_retract, LOW);
  }

  delay(250);
}

void drive_bottom_actuator(int bottom_actuator_direction){
  if (bottom_actuator_direction == 1){
    digitalWrite(bottom_actuator_retract, LOW);
    digitalWrite(bottom_actuator_extend, HIGH);
  }
  else if (bottom_actuator_direction == -1){
    digitalWrite(bottom_actuator_extend, LOW);
    digitalWrite(bottom_actuator_retract, HIGH);
  }
  else if (bottom_actuator_direction == 0){
    digitalWrite(bottom_actuator_extend, LOW);
    digitalWrite(bottom_actuator_retract, LOW);
  }

  delay(250);
}

void loop() {
  drive_top_actuator(top_actuator_direction);
  drive_bottom_actuator(bottom_actuator_direction);
}
