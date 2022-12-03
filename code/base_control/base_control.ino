const int base_cw = 6;
const int base_ccw = 5;

int base_direction = 0; // = 1 -> cw; = -1 -> ccw; = 0 -> stop

void setup() {
  pinMode(base_cw, OUTPUT);
  pinMode(base_ccw, OUTPUT);
  digitalWrite(base_cw, LOW);
  digitalWrite(base_ccw, LOW);
}

void rotate_base(int base_direction){
  if (base_direction == 1){
    digitalWrite(base_ccw, LOW);
    digitalWrite(base_cw, HIGH);
  }
  else if (base_direction == -1){
    digitalWrite(base_cw, LOW);
    digitalWrite(base_ccw, HIGH);
  }
  else if (base_direction == 0){
    digitalWrite(base_cw, LOW);
    digitalWrite(base_ccw, LOW);
  }

  delay(250);
}

void loop() {
  rotate_base(base_direction);
}
