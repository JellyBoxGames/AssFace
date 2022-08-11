PROG = AssFace
CC = g++

LDFLAGS += `sdl2-config --libs` -Wall -lSDL2_mixer -lSDL2_image -lSDL2_ttf -lm -lstdc++
$(PROG):
	$(CC) -o $@ ./source/structs.cpp ./source/draw.cpp ./source/init.cpp ./source/input.cpp ./source/main.cpp $(LDFLAGS)
