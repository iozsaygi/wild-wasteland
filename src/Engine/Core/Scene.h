#ifndef SCENE_H
#define SCENE_H

#include "Platform/PlatformWindowProperties.h"

// Scene is a container for subsystems and actors.
class CScene
{
public:
	bool IsActive;

	void Warmup();
	void Tick( struct SPlatformWindowProperties platformWindowProperties );
	void Shutdown();
};

#endif // !SCENE_H