#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

namespace dzrnic {

        class Screen {
public:
                const static int SCREEN_WIDTH = 800;
                const static int SCREEN_HEIGHT = 600;
private:
                SDL_Window *m_window;
                SDL_Renderer *m_renderer;
                SDL_Texture *m_texture;
                Uint32 *m_buffer;
public:
                Screen();
                bool init();
                void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
                void update();
                bool processEvents();
                void close();
        };
} /* namespace dzrnic */

#endif /* SCREEN_H_ */
