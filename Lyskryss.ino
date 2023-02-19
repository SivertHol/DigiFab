//Pins
int red = 10;
int yellow = 9;
int green = 8;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop(){
  changeLights();
  delay(15000);
}

// The logic
void changeLights(){

// Start with green off --> yellow on 3 sec
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);

// yellow off --> red on 5 sec
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);

// yellow on, red on --> 2 sec
  digitalWrite(yellow, HIGH);
  delay(2000);
  
// yellow, red off --> green on.
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(3000);
}

