#include "../headers/draw.h"

void prepare_scene(void){
	SDL_SetRenderDrawColor(afg.renderer, 76, 120, 240, 240);
	SDL_RenderClear(afg.renderer);
}

void present_scene(void){
	SDL_RenderPresent(afg.renderer);
}

SDL_Texture* load_texture(char* texture_file){
	SDL_Texture* texture;
	SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", texture_file);
	
	texture = IMG_LoadTexture(afg.renderer, texture_file);
	return texture;
}

void blit(SDL_Texture* texture, int x, int y){
	SDL_Rect destination;

	destination.x = x;
	destination.y = y;
	SDL_QueryTexture(texture, NULL, NULL, &destination.w, &destination.h);

	SDL_RenderCopy(afg.renderer, texture, NULL, &destination);
}
