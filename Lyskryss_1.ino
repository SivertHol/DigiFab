// Pins
int red = 10;
int yellow = 9;
int green = 8;
int button = 12;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button, INPUT);
  digitalWrite(green, HIGH);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    delay(15);
    if (digitalRead(button) == HIGH) {
      // Changelights starte when button is pressed
      changeLights();
      // Can hold the button down, but will wait 15second after first iteration
      delay(15000);
    }
  }
}

void changeLights() {

  // Turn off green --> yellow 3sec
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);

  // Turn of yellow --> red 5 sec
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);

  // Red still on --> yellow and red for 2 sec
  digitalWrite(yellow, HIGH);
  delay(2000);

  // Turn of red and yellow --> Green
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(3000);
}
