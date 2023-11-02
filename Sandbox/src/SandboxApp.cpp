#include <Anle.h>

class Sandbox : public Anle::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Anle::Application* Anle::CreateApplication()
{
	return new Sandbox();
}

