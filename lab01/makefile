sources = za01.c zad02.c zad03.c zad04.c zad05.c zad06.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11 -I /opt/X11/include
LDFLAGS = -L /opt/X11/lib
LDLIBS = -lGL -lGLU -lglut -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
