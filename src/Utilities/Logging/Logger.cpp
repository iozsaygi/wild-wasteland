#include <iostream>
#include <string>
#include "Logger.h"

void CLogger::Print( const enum ELogLevel logLevel, const char* message )
{
	std::string logLevelTag;
	switch ( logLevel )
	{
	case ELogLevel::Debug:
		logLevelTag = "[Debug] ";
		break;

	case ELogLevel::Warning:
		logLevelTag = "[Warning] ";
		break;

	case ELogLevel::Error:
		logLevelTag = "[Error] ";
		break;
	}

	std::cout << logLevelTag << message << std::endl;
}