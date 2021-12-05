#include <Mars.h>

class Sandbox : public Mars::Application
{
public:
	Sandbox() {}
	~Sandbox() {}

};

Mars::Application* Mars::CreateApplication()
{
	return new Sandbox();
}
