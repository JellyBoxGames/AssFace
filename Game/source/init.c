#include "../headers/init.h"

void init_SDL(void){
	int renderer_flags = SDL_RENDERER_ACCELERATED;
	int window_flags = 0;
	// Try to initialize the video driver
	if (SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("Couldn't initialize SDL: %s\n", SDL_GetError());
		exit(1);
	}

	afg.window = SDL_CreateWindow("Ass Face", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, window_flags);

	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

	afg.renderer = SDL_CreateRenderer(afg.window, -1, renderer_flags);

	IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);

}

void cleanup(void){
	IMG_Quit();

	SDL_DestroyRenderer(afg.renderer);

	SDL_DestroyWindow(afg.window);
}
