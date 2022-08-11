#include "../headers/init.hpp"

AssFaceGame::AssFaceGame(){
    this->window = SDL_CreateWindow("Ass Face", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    this->renderer = SDL_CreateRenderer(afg.get_window(), -1, SDL_RENDERER_ACCELERATED);
}
AssFaceGame::~AssFaceGame(){
    SDL_DestroyRenderer(this->renderer);
    SDL_DestroyWindow(this->window);
}
SDL_Renderer* AssFaceGame::get_renderer(){
    return this->renderer;
}
SDL_Window* AssFaceGame::get_window(){
    return this->window;
}

LifeForm::LifeForm(){
    this->texture = nullptr;
    this->x = -1;
    this->y = -1;
}
LifeForm::LifeForm(const char* texture_file, int x, int y){
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", texture_file);
    this->texture = IMG_LoadTexture(afg.get_renderer(), texture_file);
    this->x = x;
    this->y = y;
}

LifeForm::~LifeForm(){
    return;
}
void LifeForm::set_location(int x, int y){
    this->x = x;
    this->y = y;
}
void LifeForm::set_location(std::pair<int, int>* location){
    this->x = location->first;
    this->y = location->second;
}
void LifeForm::set_texture(const char* texture_file){
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", texture_file);
    this->texture = IMG_LoadTexture(afg.get_renderer(), texture_file);
}
std::pair<int, int> LifeForm::get_location(){
    return std::pair<int, int>(this->x, this->y);
}
SDL_Texture* LifeForm::get_texture(){
    return this->texture;
}

// This is temporary kinda. Same idea, but different implementation later.
void LifeForm::update_location(){
    if (afg.up) this->y -= 4;
    if (afg.down) this->y += 4;
    if (afg.left) this->x -= 4;
    if (afg.right) this->x += 4;
}