sources = main.c drugi.h funk1.c funk2.c funk3.c globalne.h pierwszy.h trzeci.h

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

main.o : main.c pierwszy.h
	cc -c main.c $(CFLAGS) $(LDLIBS)
funk1.o : funk1.c drugi.h globalne.h
	cc -c funk1.c $(CFLAGS) $(LDLIBS)
funk2.o : funk2.c trzeci.h globalne.h
	cc -c funk2.c $(CFLAGS) $(LDLIBS)
funk3.o : funk3.c globalne.h
	cc -c funk3.c $(CFLAGS) $(LDLIBS)
main : main.o funk1.o funk2.o funk3.o 
	cc -o main main.o funk1.o funk2.o funk3.o  $(CFLAGS) $(LDLIBS)

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
