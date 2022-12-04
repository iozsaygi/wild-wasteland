#include "Platform/InitializeProcessor.h"
#include "Engine/Core/Scene.h"

int main( int argc, char* argv[] ) 
{
	if ( TryInitializePlatformDependencies() )
	{
		struct SNativePlatformCard nativePlatformCard = { nullptr, nullptr };
		struct SPlatformWindowProperties platformWindowProperties = { 640, 480, 30, "Wild Wasteland" };

		// Try to initialize native platform card that holds required window and renderer references.
		if ( TryInitializeNativePlatformCard( &nativePlatformCard, &platformWindowProperties ) )
		{
			// Create a new scene and start updating on it. We should create a scene manager for this boilerplate code.
			CScene scene;
			scene.Warmup();
			scene.Tick( platformWindowProperties );
			scene.Shutdown();

			ClearNativePlatformCard( &nativePlatformCard );
		}

		ClearPlatformDependencies();
	}
	

	return 0;
}