#ifndef PLATFORM_WINDOW_PROPERTIES_H
#define PLATFORM_WINDOW_PROPERTIES_H

// Contains basic information about the window.
struct SPlatformWindowProperties
{
public:
	int Width;
	int Height;
	int TargetFrameRate;
	const char* Title;
};

#endif // !PLATFORM_WINDOW_PROPERTIES_H