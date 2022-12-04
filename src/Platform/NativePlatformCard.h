#ifndef NATIVE_PLATFORM_CARD_H
#define NATIVE_PLATFORM_CARD_H

#include <SDL.h>

// Contains native references to the platform's window and renderer.
struct SNativePlatformCard
{
public:
	SDL_Window* SDLWindow;
	SDL_Renderer* SDLRenderer;
};

#endif // !NATIVE_PLATFORM_CARD_H