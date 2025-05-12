#include "ecop11a.h"

// Função para calcular o volume de um cubo
float cubo(float aresta) {
    return aresta * aresta * aresta;
}

// Função para calcular o volume de um paralelepípedo
float paralelepipedo(float largura, float profundidade, float altura) {
    return largura * profundidade * altura;
}

// Função para calcular o volume de uma esfera
float esfera(float raio) {
    return (4.0f / 3.0f) * 3.14159f * raio * raio * raio;
}

// Função para calcular o volume de um cilindro
float cilindro(float raio, float altura) {
    return 3.14159f * raio * raio * altura;
}

// Função para calcular o volume de uma pirâmide
float piramide(float largura, float profundidade, float altura) {
    return (largura * profundidade * altura) / 3.0f;
}

