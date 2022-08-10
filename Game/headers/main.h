#include "common.h"

extern void blit(SDL_Texture *texture, int x, int y);
extern void cleanup(void);
extern void do_input(void);
extern void init_SDL(void);
extern SDL_Texture* load_texture(char* texture_file);
extern void prepare_scene(void);
extern void present_scene(void);

AssFaceGame afg;
LifeForm lf;
