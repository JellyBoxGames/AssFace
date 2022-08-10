#include "../headers/main.h"

int main(int argc, char* argv[]){
	
	memset(&afg, 0, sizeof(AssFaceGame));
	memset(&lf, 0, sizeof(LifeForm));
	
	init_SDL();
	
	lf.x = 100;
	lf.y = 100;
	lf.texture = load_texture("gfx/AssFace1.png");

	atexit(cleanup);

	while(1){
		prepare_scene();

		do_input();

		blit(lf.texture, lf.x, lf.y);

		present_scene();
		
		SDL_Delay(16);
	}
	return 0;
}
