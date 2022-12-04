#include <SDL.h>
#include <iostream>

int main( int argc, char* argv[] ) 
{
	SDL_Init( SDL_INIT_VIDEO );
	SDL_Window* window;

	window = SDL_CreateWindow( "An SDL2 window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN );

	if ( window == NULL ) 
	{
		// In the event that the window could not be made...
		std::cout << "Could not create window: " << SDL_GetError() << '\n';
		SDL_Quit();
		return 1;
	}

	SDL_Delay( 3000 );
	SDL_DestroyWindow( window );
	SDL_Quit();

	return 0;
}