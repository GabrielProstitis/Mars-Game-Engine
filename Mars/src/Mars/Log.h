#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Mars
{
	class MARS_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	};
}

//
// Core Log Macros
//

#define MR_CORE_TRACE(...) ::Mars::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MR_CORE_INFO(...)  ::Mars::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MR_CORE_WARN(...)  ::Mars::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MR_CORE_ERROR(...) ::Mars::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MR_CORE_FATAL(...) ::Mars::Log::GetCoreLogger()->critical(__VA_ARGS__)

//
// Client Log Macros
//

#define MR_TRACE(...) ::Mars::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MR_INFO(...)  ::Mars::Log::GetClientLogger()->info(__VA_ARGS__)
#define MR_WARN(...)  ::Mars::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MR_ERROR(...) ::Mars::Log::GetClientLogger()->error(__VA_ARGS__)
#define MR_FATAL(...) ::Mars::Log::GetClientLogger()->critical(__VA_ARGS__)

