#pragma once

#ifdef AL_PLATFORM_WINDOWS

extern Anle::Application* Anle::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Anle::CreateApplication();
	app->Run();
	delete app;
}


#endif 
