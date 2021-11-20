#pragma once

#ifdef CC_PLATFORM_WINDOWS

extern CrayonCruncher::Application* CrayonCruncher::CreateApplication();

int main(int argc, char** argv)
{
	printf("gayballs");
	auto app = CrayonCruncher::CreateApplication();
	app->Run();
	delete app;
}

#endif