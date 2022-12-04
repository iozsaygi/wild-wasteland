#include "Platform/InitializeProcessor.h"

int main( int argc, char* argv[] ) 
{
	struct SNativePlatformCard nativePlatformCard = { nullptr, nullptr };
	struct SPlatformWindowProperties platformWindowProperties = { 640, 480, "Wild Wasteland" };

	// Try to initialize native platform card that holds required window and renderer references.
	if ( TryInitializeNativePlatformCard( &nativePlatformCard, &platformWindowProperties ) )
	{
		// TODO: Implement core game loop and start updating the scene.
	}

	return 0;
}