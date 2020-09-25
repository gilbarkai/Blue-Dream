#include <BD.h>

class Sandbox : public Dream::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

Dream::Application* Dream::CreateApplication()
{
	return new Sandbox();
}