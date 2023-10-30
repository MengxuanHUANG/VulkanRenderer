#include <iostream>

#include <string>

#include <SDL/include/SDL.h>
#include <SDL/include/SDL_vulkan.h>

int main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_VIDEO);

	SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_VULKAN);


	SDL_Window* window = SDL_CreateWindow(
		"Vulkan Hello Triangle",
		500, 500, 680, 680, window_flags
	);

	SDL_Event e;
	bool bQuit = false;

	while (!bQuit)
	{
		//Handle events on queue
		while (SDL_PollEvent(&e) != 0) {
			//close the window when user alt-f4s or clicks the X button			
			if (e.type == SDL_QUIT) bQuit = true;
		}
	}

	SDL_DestroyWindow(window);

	return 0;
}