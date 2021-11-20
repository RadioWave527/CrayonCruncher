#include <CrayonCruncher.h>

class Sandbox : public CrayonCruncher::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

CrayonCruncher::Application* CrayonCruncher::CreateApplication() 
{
	return new Sandbox();
}