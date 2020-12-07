/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Funciones.c
 * Author: working
 *
 * Created on 1 de diciembre de 2020, 02:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definición del prototipo de función
float multiplica (float,float);
float calculaAreaTriangulo(float,float);
float calculaAreaCirculo(float);
/*
 * 
 */
int main(int argc, char** argv) {
    int x = 0;
    float base, altura, radio;
    printf("Dame la base del trinagulo: ");
    scanf("%f",&base);
    printf("\nDame la altura del trinagulo: ");
    scanf("%f",&altura);
    
    printf("\nEl area del triangulo es: %f ", calculaAreaTriangulo(base,altura));
    
    printf("\nDame el radio del circulo: ");
    scanf("%f",&radio);
    
    printf("\nEl area del circulo es: %f ", calculaAreaCirculo(radio));
    
    return (EXIT_SUCCESS);
}

// función ya esta implementada ()
float multiplica (float x,float y){
    float res = x*y;
    return res;
}

float calculaAreaTriangulo(float base,float altura){
    float area = (base*altura)/2;
    return area;
}

float calculaAreaCirculo(float r){
    float area = pow(r,2)*3.14159;
    return area;
}

