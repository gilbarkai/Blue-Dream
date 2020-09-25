#pragma once

#ifdef BD_PLATFORM_WINDOWS

extern Dream::Application* Dream::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Dream::CreateApplication();
	app->Run();
	delete app;
}

#endif
