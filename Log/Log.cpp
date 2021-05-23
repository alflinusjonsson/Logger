#include "Log.h"
#include <iostream>

void Log::SetLogLevel(Level level) {
	m_LogLevel = level;
}

void Log::PrintLogLevel() {
	switch (m_LogLevel) {
		case 0:
			std::cout << "LevelInfo" << std::endl;
			break;
		case 1:
			std::cout << "LevelWarning" << std::endl;
			break;
		case 2:
			std::cout << "LevelError" << std::endl;
			break;
	}
}

void Log::Error(const char* message) {
	if (m_LogLevel <= LevelError)
		std::cout << "[ERROR]: " << message << std::endl;
}

void Log::Warn(const char* message) {
	if (m_LogLevel <= LevelWarning)
		std::cout << "[WARNING]: " << message << std::endl;
}

void Log::Info(const char* message) {
	if (m_LogLevel <= LevelInfo)
		std::cout << "[INFO]: " << message << std::endl;
}