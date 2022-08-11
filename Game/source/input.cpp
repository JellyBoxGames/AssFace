#include "../headers/input.hpp"
// We are going to change the way movement works later.
// This is just to test out how we can make something move generally.

void do_key_down(SDL_KeyboardEvent *event){

	if (event->repeat == 0){
		
		if (event->keysym.scancode == SDL_SCANCODE_UP) afg.up = 1;
		if (event->keysym.scancode == SDL_SCANCODE_DOWN) afg.down = 1;
		if (event->keysym.scancode == SDL_SCANCODE_RIGHT) afg.right = 1;
		if (event->keysym.scancode == SDL_SCANCODE_LEFT) afg.left = 1;
	}
}

// Again, this is stupid. We will make this more intuitive later.
void do_key_up(SDL_KeyboardEvent *event){

	if (event->repeat == 0){

		if (event->keysym.scancode == SDL_SCANCODE_UP) afg.up = 0;
		if (event->keysym.scancode == SDL_SCANCODE_DOWN) afg.down = 0;
		if (event->keysym.scancode == SDL_SCANCODE_RIGHT) afg.right = 0;
		if (event->keysym.scancode == SDL_SCANCODE_LEFT) afg.left = 0;
	}
}


void do_input(void){
	SDL_Event event;
	while (SDL_PollEvent(&event)){
		switch(event.type){
			case SDL_QUIT:
				exit(0);
				break;
			case SDL_KEYDOWN:
				do_key_down(&event.key);
				break;
			case SDL_KEYUP:
				do_key_up(&event.key);
			default:
				break;
		}
	}
}
