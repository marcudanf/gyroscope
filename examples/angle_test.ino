#include <gyroscope.h>

Gyroscope gyroscope(2);

Angle angle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  angle=gyroscope.getypr();
  Serial.print("yaw=");
  Serial.print(angle.yaw);
  Serial.print("\tpitch=");
  Serial.print(angle.pitch);
  Serial.print("\troll");
  Serial.println(angle.roll);
}
