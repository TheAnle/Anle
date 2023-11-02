#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Anle {

	class ANLE_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }


	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};


}

//core log
#define AL_CORE_TRACE(...)		::Anle::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AL_CORE_INFO(...)		::Anle::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AL_CORE_WARN(...)		::Anle::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AL_CORE_ERROR(...)		::Anle::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AL_CORE_FATAL(...)		::Anle::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log
#define AL_TRACE(...)			::Anle::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AL_INFO(...)			::Anle::Log::GetClientLogger()->info(__VA_ARGS__)
#define AL_WARN(...)			::Anle::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AL_ERROR(...)			::Anle::Log::GetClientLogger()->error(__VA_ARGS__)
#define AL_FATAL(...)			::Anle::Log::GetClientLogger()->fatal(__VA_ARGS__)
