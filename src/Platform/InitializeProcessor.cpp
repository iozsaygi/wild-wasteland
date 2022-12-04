#include <assert.h>
#include "InitializeProcessor.h"

bool TryInitializeNativePlatformCard( struct SNativePlatformCard* nativePlatformCard, const struct SPlatformWindowProperties* platformWindowProperties )
{
	assert( nativePlatformCard != nullptr );
	assert( platformWindowProperties != nullptr );

	nativePlatformCard->SDLWindow = SDL_CreateWindow( platformWindowProperties->Title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		platformWindowProperties->Width, platformWindowProperties->Height, SDL_WINDOW_SHOWN );

	if ( nativePlatformCard->SDLWindow == nullptr )
	{
		// TODO: Implement logging subsystem and use it here. 
		return false;
	}

	nativePlatformCard->SDLRenderer = SDL_CreateRenderer( nativePlatformCard->SDLWindow, -1, 0 );
	if ( nativePlatformCard->SDLRenderer == nullptr )
	{
		// TODO: Implement logging subsystem and use it here. 
		return false;
	}

	SDL_Delay( 3000 );

	return true;
}