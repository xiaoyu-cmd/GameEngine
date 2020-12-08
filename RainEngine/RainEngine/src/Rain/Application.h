#pragma once
#include "Core.h"

namespace Rain {

	class RAIN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	// to be define
	Application* CreateApplication();

}


