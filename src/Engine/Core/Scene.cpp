#include <SDL.h>
#include "Scene.h"

void CScene::Warmup()
{
}

void CScene::Tick( struct SPlatformWindowProperties platformWindowProperties )
{
	uint32_t frameDelay = 1000 / platformWindowProperties.TargetFrameRate;
	uint32_t frameStart = 0;
	uint32_t frameTime = 0;
	SDL_Event event;

	while ( IsActive )
	{
		frameStart = SDL_GetTicks();

		if ( SDL_PollEvent( &event ) )
		{
			if ( event.type == SDL_QUIT )
				IsActive = false;
		}

		// TODO: Handle events, update actors and render the scene here.
		// EventSubSystem::ProcessEvents();
		// UpdateActors( frameTime );
		// Render();

		frameTime = SDL_GetTicks() - frameStart;
		if ( frameDelay > frameTime ) 
		{
			SDL_Delay( frameDelay - frameTime );
			frameTime += ( frameDelay - frameTime );
		}
	}
}

void CScene::Shutdown()
{
}