#pragma once

#ifdef MR_PLATFORM_WINDOWS

extern Mars::Application* Mars::CreateApplication();

int main(int argc, char** argv)
{
	printf("Mars is running");
	auto app = Mars::CreateApplication();
	app->Run();
	delete app;
}

#endif