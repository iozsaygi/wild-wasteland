#ifndef INITIALIZE_PROCESSOR_H
#define INITIALIZE_PROCESSOR_H

#include "NativePlatformCard.h"
#include "PlatformWindowProperties.h"

bool TryInitializePlatformDependencies();
bool TryInitializeNativePlatformCard( struct SNativePlatformCard* nativePlatformCard, const struct SPlatformWindowProperties* platformWindowProperties );
void ClearNativePlatformCard( struct SNativePlatformCard* nativePlatformCard );
void ClearPlatformDependencies();

#endif // !INITIALIZE_PROCESSOR_H