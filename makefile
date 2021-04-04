
# make files 

CC  = gcc
CXX = g++
RM  = rm -f

SYSYEMS := systems 

SRC := source 

ENTITES := entites 

RENDER := render 

3RDLIB = 3rdparty_lib

EXEC := main_01.cpp 

CXX_FLAGS := -std=c++20 -Wall -Wextra


.PHONY = all clean


LINKERFLAG = -lm -lSDL2 -lSDL2_image -lSDL2_ttf -lGL


rez_mobile : main.o engine.o render.o entitez.o

 main.o : 

 engine.o :

 render.o :

 entitez.o : 




clean:
    $(RM) $(OBJS)

distclean: clean
    $(RM) tool