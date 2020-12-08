#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/sinks/daily_file_sink.h"

namespace Rain {
	class RAIN_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

		//std::shared_ptr<spdlog::logger>  setupLogger(std::vector<spdlog::sink_ptr> sinks);

		//void test(std::string message)
		//{
		//	auto logger = spdlog::get(logger_name);
		//	if (logger)
		//	{
		//		logger->debug("{}::{}", __FUNCTION__, message);
		//	}
		//}


	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define LOG(...)      ::Rain::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARNING(...)   ::Rain::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)     ::Rain::Log::GetClientLogger()->error(__VA_ARGS__)


