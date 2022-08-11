#include "common.hpp"

extern void blit(LifeForm* lf);
extern void cleanup(void);
extern void do_input(void);
extern void init_SDL(void);
extern void prepare_scene(void);
extern void present_scene(void);

AssFaceGame afg;
LifeForm lf;
