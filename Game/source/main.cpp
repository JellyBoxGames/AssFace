#include "../headers/main.hpp"

int main(int argc, char* argv[]){
	
	init_SDL();
	
	lf.set_location(100, 100);
	lf.set_texture("gfx/AssFace1.png");

	atexit(cleanup);

	while(1){
		prepare_scene();

		do_input();

		lf.update_location();

		blit(&lf);

		present_scene();
		
		SDL_Delay(16);
	}
	return 0;
}
