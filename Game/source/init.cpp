#include "../headers/init.hpp"

void init_SDL(void){
	
	// Try to initialize the video driver
	if (SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("Couldn't initialize SDL: %s\n", SDL_GetError());
		exit(1);
	}


	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");


	IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);

}

void cleanup(void){
	IMG_Quit();
}
