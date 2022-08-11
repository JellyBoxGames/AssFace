#ifndef _STRUCTS_HPP_
#define _STRUCTS_HPP_
#include <utility>
class AssFaceGame {
	private:
	SDL_Renderer *renderer;
	SDL_Window *window;
	public:
	int up, down, left, right;
	AssFaceGame();
	~AssFaceGame();
	SDL_Window* get_window();
	SDL_Renderer* get_renderer();
};

class LifeForm {
	private:
	int x;
	int y;
	SDL_Texture *texture;
	public:
	LifeForm();
	LifeForm(const char* texture_file, int x, int y);
	~LifeForm();
	void set_location(int x, int y);
	void set_location(std::pair<int, int>* location);
	void set_texture(const char* texture_file);
	std::pair<int, int> get_location();
	SDL_Texture* get_texture();
	// change how we update/animate later
	void update_location();
};
#endif