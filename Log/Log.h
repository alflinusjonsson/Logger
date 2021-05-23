#pragma once
class Log {
public:
	enum Level
	{
		LevelInfo = 0, LevelWarning = 1, LevelError = 2
	};

	void SetLogLevel(Level level);
	void PrintLogLevel();
	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);

private:
	Level m_LogLevel = LevelInfo;
};
