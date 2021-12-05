#pragma once

#include "Core.h"

namespace Mars
{
	class MARS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

