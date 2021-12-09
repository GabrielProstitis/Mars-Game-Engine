#include "Log.h"

namespace Mars
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() {

		// Formatting
		spdlog::set_pattern("%^[%T] %n %v%$");
		
		//Creating Log for Mars Game Engine and setting log level
		s_CoreLogger = spdlog::stdout_color_mt("MARS");
		s_CoreLogger->set_level(spdlog::level::trace); // trace --> print everything
		
		//Creating Log for Client
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_CoreLogger->set_level(spdlog::level::trace);
	}
}