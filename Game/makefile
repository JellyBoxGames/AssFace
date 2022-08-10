PROG = AssFace
CC = gcc

LDFLAGS += `sdl2-config --libs` -lSDL2_mixer -lSDL2_image -lSDL2_ttf -lm
$(PROG):
	$(CC) -o $@ ./source/draw.c ./source/init.c ./source/input.c ./source/main.c $(LDFLAGS)
