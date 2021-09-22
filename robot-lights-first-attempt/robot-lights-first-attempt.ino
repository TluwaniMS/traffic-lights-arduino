
const int redLight = 13;
const int orangeLight = 12;
const int greenLight = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLight, OUTPUT);
  pinMode(orangeLight, OUTPUT);
  pinMode(greenLight, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchOnRedLight();
  delay(1000);
  switchOnOrangeLight();
  switchOnGreenLight();
}

void switchOnRedLight() {
  digitalWrite(redLight, HIGH);
  delay(4000);
  digitalWrite(redLight, LOW);
};


void switchOnOrangeLight() {
  digitalWrite(orangeLight, HIGH);
  delay(4000);
  digitalWrite(orangeLight, LOW);
  delay(1000);
};

void switchOnGreenLight() {
  digitalWrite(greenLight, HIGH);
  delay(4000);
  digitalWrite(greenLight, LOW);
};
