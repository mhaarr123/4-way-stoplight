const int redNS = 1;
const int yellowNS = 2;
const int greenNS = 3;
const int redEW = 4;
const int yellowEW = 5;
const int greenEW = 6;
const int walkNS = 8;
const int dontWalkNS = 7;
const int walkEW = 10;
const int dontWalkEW = 9;

const int greenTime = 5000;    
const int yellowTime = 2000;    
const int walkTime = 5000;  

void setup() {
  pinMode(redNS, OUTPUT);
  pinMode(yellowNS, OUTPUT);
  pinMode(greenNS, OUTPUT);
  pinMode(redEW, OUTPUT);
  pinMode(yellowEW, OUTPUT);
  pinMode(greenEW, OUTPUT);
  pinMode(walkNS, OUTPUT);
  pinMode(dontWalkNS, OUTPUT);
  pinMode(walkEW, OUTPUT);
  pinMode(dontWalkEW, OUTPUT);
}

void loop() {
  digitalWrite(greenNS, HIGH);
  digitalWrite(redNS, LOW);
  digitalWrite(redEW, HIGH);
  digitalWrite(greenEW, LOW);
  
  digitalWrite(walkNS, HIGH);
  digitalWrite(dontWalkNS, LOW);
  digitalWrite(walkEW, LOW);
  digitalWrite(dontWalkEW, HIGH);
  delay(greenTime);

  digitalWrite(greenNS, LOW);
  digitalWrite(yellowNS, HIGH);
  digitalWrite(redNS, LOW);
  delay(yellowTime);
  digitalWrite(yellowNS, LOW);

  digitalWrite(redNS, HIGH);
  digitalWrite(greenEW, HIGH);
  digitalWrite(redEW, LOW);
  
  digitalWrite(walkEW, HIGH);
  digitalWrite(dontWalkEW, LOW);
  digitalWrite(walkNS, LOW);
  digitalWrite(dontWalkNS, HIGH);
  delay(greenTime);

  digitalWrite(greenEW, LOW);
  digitalWrite(yellowEW, HIGH);
  digitalWrite(redEW, LOW);
  delay(yellowTime);
  digitalWrite(yellowEW, LOW);
}