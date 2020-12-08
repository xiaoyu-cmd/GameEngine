#include "Log.h"

namespace Rain {

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_CoreLogger = spdlog::stdout_color_mt("Rain");// mt means multi threaded
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("Console");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
	std::shared_ptr<spdlog::logger>Log::s_ClientLogger = nullptr;
	std::shared_ptr<spdlog::logger>Log::s_CoreLogger = nullptr;

	//static const std::string logger_name = "example";
	//std::shared_ptr<spdlog::logger>  Log::setupLogger(std::vector<spdlog::sink_ptr> sinks) {
	//	auto logger = spdlog::get(logger_name);
	//	if (not logger)
	//	{
	//		if (sinks.size() > 0)
	//		{
	//			logger = std::make_shared<spdlog::logger>(logger_name,
	//				std::begin(sinks),
	//				std::end(sinks));
	//			spdlog::register_logger(logger);
	//		}
	//		else
	//		{
	//			logger = spdlog::stdout_color_mt(logger_name);
	//		}
	//	}

	//	return logger;
	//}
}