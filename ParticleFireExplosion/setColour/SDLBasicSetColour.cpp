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

        bool quit = false;

        while(true) {
                // Update particles
                // Draw particles
                //Check for messages/events

                if(screen.processEvents() == false) {
                        break;
                }
        }

        return 0;
}

#include "Screen.cpp"
