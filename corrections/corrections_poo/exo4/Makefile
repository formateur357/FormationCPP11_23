# le nom de l'exécutable :
TARGET=a.out # l'espace n'est pas obligatoire

# le reste est "générique"
SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)

CC = g++ -c # la commande de compilation
LD = g++ -o # la commande pour l'édition de liens CFLAGS = -Wall # les options de compilation
LDFLAGS = # les options pour l'édition de liens

.PHONY: clean cleanall

all: $(TARGET) # la cible par défaut est la cible de la première règle trouvée par make (ici all)

$(TARGET): $(OBJ)
	$(LD) $(TARGET) $(LDFLAGS) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.o

cleanall:
	rm -f *.o $(TARGET)

re: cleanall all