#pragma once

#include "Core.h"

namespace Dream{

	class BD_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}