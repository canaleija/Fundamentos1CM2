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


    int x = 0;
    int n;
    // & = dirección de memoria
    printf("Ingrese el valor de n: ");
    scanf("%d",&n);
    
        // definirlo 
    float arreglo[n];
    // almacenamos de manera iterativa dentro del arreglo
    for(x; x<n; x++){
         printf("Ingrese el nuevo valor : ");
         scanf("%f",&arreglo[x]);
    }
    // iniciamos x en 0 para volver a iterar con x
    x = 0;
    float min = arreglo[0];
    float max = arreglo[0];
    for(x; x<n; x++){
        if (arreglo[x]<min){
            min = arreglo[x];
        }
        if(arreglo[x]>max){
            max = arreglo[x];
        }
    
    }
    
    printf("\nel valor minimo es: %f",min);
    printf("\nel valor maximo es: %f",max);
    
    
    
   
    
    return (EXIT_SUCCESS);
}

