#include "../headers/draw.hpp"

void prepare_scene(void){
	SDL_SetRenderDrawColor(afg.get_renderer(), 76, 120, 240, 240);
	SDL_RenderClear(afg.get_renderer());
}

void present_scene(void){
	SDL_RenderPresent(afg.get_renderer());
}

void blit(LifeForm* lf){
	SDL_Rect destination;
	std::pair<int, int> location = lf->get_location();
	destination.x = location.first;
	destination.y = location.second;
	SDL_QueryTexture(lf->get_texture(), NULL, NULL, &destination.w, &destination.h);

	SDL_RenderCopy(afg.get_renderer(), lf->get_texture(), NULL, &destination);
}
