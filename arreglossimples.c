/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arreglossimples.c
 * Author: working
 *
 * Created on 19 de noviembre de 2020, 02:55 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    // definirlo 
    int arreglo[5];
    int x = 4;
        
    arreglo[0] = 2;
    arreglo[1] = 5;
    arreglo[2] = 11;
    arreglo[3] = 67;
    arreglo[4] = -4;
    
    
   
   
    for (x;x>=0;x=x-1){
        printf("%d\n",arreglo[x]);    
    }
   
    
    return (EXIT_SUCCESS);
}

