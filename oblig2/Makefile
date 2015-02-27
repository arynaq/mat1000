GPP=g++
LIBDIR =  /home/arynaq/HioA/DigsysII/lib/
LIBS = lib
GPPOPT=-std=c++11

OBJ= newtonsmetode

all: $(OBJ)


newtonsmetode:
	$(GPP) $(GPPOPT) -I$(LIBDIR) $(OBJ).c $(foreach _lib, $(LIBS), $(LIBDIR)$(_lib).c) -o  $@


clean: 
	-$(RM) $(OBJ)