#ifndef LOGGER_H
#define LOGGER_H

#include "LogLevel.h"

class CLogger
{
public:
	static void Print( const enum ELogLevel logLevel, const char* message );
};

#endif // !LOGGER_H