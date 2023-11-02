#pragma once

#ifdef AL_PLATFORM_WINDOWS

extern Anle::Application* Anle::CreateApplication();

int main(int argc, char** argv)
{
	Anle::Log::Init();
	AL_CORE_ERROR("ERROR Log!");
	AL_INFO("hello");

	auto app = Anle::CreateApplication();
	app->Run();
	delete app;
}


#endif 
