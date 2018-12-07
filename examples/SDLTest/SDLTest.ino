#include <SDL.h>

#pragma parameter extra.libs=-lSDL2

SDL tft(320, 240, SDL::Windowed | SDL::DoubleBuffered);

void setup() {
	Console.begin(0);
	Console.println("Started running");
	tft.initializeDevice();
	tft.fillScreen(Color::Black);
	tft.setWindowOpacity(0.4);
	tft.setWindowTitle("SDL 2 Test");
}

void loop() {
	tft.startBuffer();
	tft.fillScreen(Color::Black);
	tft.setCursor(100, 100);
	tft.setTextColor(Color::Yellow);
	tft.print(millis());
	tft.endBuffer();	
	delay(100);
}
