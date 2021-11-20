#pragma once

#include "Core.h"
namespace CrayonCruncher
{
	class CRAYONCRUNCHER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//will be given cock and balls in client probably
	Application* CreateApplication();
}
