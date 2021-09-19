#include <iostream>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include <math.h>
#include "time.h"
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
using namespace std;
using namespace dzrnic;

int main(int argc, char const *argv[]) {

        srand(time(NULL));

        Screen screen;

        if(screen.init() == false) {
                cout << "Error initialising SDL." << endl;
        }

        Swarm swarm;

        while(true) {
                // Update particles
                // Draw particles

                int elapsed  = SDL_GetTicks();

                swarm.update(elapsed);

                unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
                unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
                unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);


                const Particle * const pParticles = swarm.getParticles();
                for(int i=0; i<Swarm::NPARTICLES; i++) {
                        Particle particle = pParticles[i];

                        int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
                        int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

                        screen.setPixel(x, y, red, green, blue);
                }

                screen.boxBlur();

                //Draw screen
                screen.update();

                // Check for messages/events
                if(screen.processEvents() == false) {
                        break;
                }
        }

        return 0;
}

#include "Screen.cpp"
#include "Swarm.cpp"
#include "Particle.cpp"
