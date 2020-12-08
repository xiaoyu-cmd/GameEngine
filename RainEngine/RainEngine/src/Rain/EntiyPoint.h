#pragma once

#ifdef RN_PLATFORM_WINDOWS
#include "Log.h"


//extern Rain::Application* Rain::CreateApplication();
//
//int main(int argc, char** argv)
//{
//	printf("hello rain engine!");
//	auto app = Rain::CreateApplication();
//	app->Run();
//	delete app;
//}

// extern表面这个函数是外部实现的
extern Rain::Application* Rain::CreateApplication();

int main()
{
	Rain::Log::Init();
	auto app = Rain::CreateApplication();

	LOG("My Engine Log Msg");
	LOG_WARNING("My Engine Warnning Msg");
	LOG_ERROR("My Engine Error Msg");

	app->Run();
	delete app;
}


#endif // RN_PLATFORM_WINDOWS
