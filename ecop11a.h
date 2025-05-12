#ifndef ECOP11A_H
#define ECOP11A_H

#include <stdio.h>
#include <stdlib.h>

// Definições de constantes
#define SUCCESS 0
#define ERROR -1

// Declarações de funções
void readFile(const char *filename);
void printMessage(const char *message);

// Funções para cálculo de volumes
float cubo(float aresta);
float paralelepipedo(float largura, float profundidade, float altura);
float esfera(float raio);
float cilindro(float raio, float altura);
float piramide(float largura, float profundidade, float altura);

#endif // ECOP11A_H