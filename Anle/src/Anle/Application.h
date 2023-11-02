#pragma once

#include "Core.h"

namespace Anle {

	class ANLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		virtual void Run();
	};

	//To be define in client
	Application* CreateApplication();

}

