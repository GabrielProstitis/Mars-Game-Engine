#pragma once
//
// The includes are the same of Sandbox.cpp
//

#ifdef MR_PLATFORM_WINDOWS

extern Mars::Application* Mars::CreateApplication();

int main(int argc, char** argv)
{ 
	Mars::Log::Init();
	MR_FATAL("Initialized Log!");
	MR_INFO("This is the Client Log!");

	auto app = Mars::CreateApplication();
	app->Run();
	delete app;
}

#endif