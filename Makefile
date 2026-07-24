# Makefile para Final-AyED-Ejercicios
# Cada .cpp tiene su propio main(), asi que cada uno se compila
# como un ejecutable independiente dentro de bin/

CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -g
BINDIR   := bin

SRCS := $(wildcard *.cpp)
BINS := $(patsubst %.cpp,$(BINDIR)/%,$(SRCS))

# make            -> compila todos los ejercicios
all: $(BINDIR) $(BINS)

$(BINDIR):
	mkdir -p $(BINDIR)

$(BINDIR)/%: %.cpp | $(BINDIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# make run-1      -> compila y ejecuta Ejercicio1 (idem para main -> run-main)
run-%: $(BINDIR)/Ejercicio%
	./$(BINDIR)/Ejercicio$*

run-main: $(BINDIR)/main
	./$(BINDIR)/main

run-archivo: $(BINDIR)/archivo
	./$(BINDIR)/archivo
run-archivoBinario: $(BINDIR)/archivoBinario
	./$(BINDIR)/archivoBinario
run-funcionesArchivos: $(BINDIR)/funcionesArchivos
	./$(BINDIR)/funcionesArchivos

run-agregarOeliminar: $(BINDIR)/agregarOeliminar
	./$(BINDIR)/agregarOeliminar
run-ordenarConVectores: $(BINDIR)/ordenarConVectores
	./$(BINDIR)/ordenarConVectores
run-structs: $(BINDIR)/structs
	./$(BINDIR)/structs

run-vectores: $(BINDIR)/vectores
	./$(BINDIR)/vectores
run-vectoresNodos: $(BINDIR)/vectoresNodos
	./$(BINDIR)/vectoresNodos

run-listasConPilas: $(BINDIR)/listasConPilas
	./$(BINDIR)/listasConPilas
run-listasConColas: $(BINDIR)/listasConColas
	./$(BINDIR)/listasConColas

# make clean      -> borra los binarios generados
clean:
	rm -rf $(BINDIR)

.PHONY: all clean run-main