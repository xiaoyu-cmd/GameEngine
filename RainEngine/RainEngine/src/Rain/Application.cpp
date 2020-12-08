#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Rain {

	Application::Application()
	{
		
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1200, 7200);
		LOG(e.ToString());
		while (true)
		{

		}
	}

}


