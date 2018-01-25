#define LEFT 0
#define RIGHT 1

int distance(int direction) {
  //TODO implement
}

bool white_line(int direction) {
  //TODO implement
}

void turn(int direction) {
  //TODO implement
}

void swerve(int direction) {
  //TODO implement
}

void charge() {
  //TODO implement
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  if  (white_line(LEFT)) {
    turn(RIGHT);
  }
  else if (white_line(RIGHT)) {
    turn(LEFT);
  }
  else if (distance(LEFT) < 77) {
    if (distance(RIGHT) < 77) {
      charge();
    }
    else {
      swerve(LEFT);
    }
  } else if (distance(RIGHT)) {
    swerve(RIGHT);
  }
  else {
    turn(RIGHT);
  }
}
