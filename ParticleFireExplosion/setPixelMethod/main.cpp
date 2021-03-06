#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.h"
using namespace std;
using namespace dzrnic;

int main(int argc, char const *argv[]) {

        Screen screen;

        if(screen.init() == false) {
                cout << "Error initialising SDL." << endl;
        }

        while(true) {
                // Update particles

                // Draw particles
                for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
                        for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
                                screen.setPixel(x, y, 128, 0, 255);
                        }
                }

                screen.setPixel(400, 300, 255, 255, 255);

                screen.update();

                if(screen.processEvents() == false) {
                        break;
                }
        }

        return 0;
}

#include "Screen.cpp"
