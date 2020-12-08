/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   apuntadores.c
 * Author: working
 *
 * Created on 8 de diciembre de 2020, 02:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    // variable: espacio de memoria
    // el tipo de dato que guarda
    // lo que contiene
    // ¿dónde se encuentra? ---> dirección fisica de memoria * / &
    
    int x = 4;
    float b = 67;
    printf("%d\n",x);
    printf("%p\n",&x);
    x = 45;
    printf("%d\n",x);
    printf("%p\n",&x);
    // variable aux de tipo apuntador que apunta a la dirección 
    // fisica de un contenedor que tiene un valor de tipo entero
    int *aux = &x;
    printf("%p\n",aux);
    printf("%d\n",*aux);
    
    x = 67;
    *aux = 67;
    printf("%d\n",x);
    
    
    return (EXIT_SUCCESS);
}

