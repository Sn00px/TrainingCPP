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
                int elasped  = SDL_GetTicks();
                unsigned char green = (unsigned char)((1 + sin(elasped * 0.0004)) * 128);
                unsigned char red = (unsigned char)((1 + sin(elasped * 0.0001)) * 128);
                unsigned char blue = (unsigned char)((1 + sin(elasped * 0.0002)) * 128);

                cout <<  green << endl;

                for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
                        for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
                                screen.setPixel(x, y, red, green, blue);
                        }
                }

                screen.update();

                if(screen.processEvents() == false) {
                        break;
                }
        }

        return 0;
}

#include "Screen.cpp"
