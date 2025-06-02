#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  // put your setup code here, to run once:
display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // If 0x3C doesn't work, try 0x3D
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(0,0);
display.println("A Pig without 9.89 is equal to 3.14, but a Pig without 3.14 is equal to 9.89..!");
display.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
