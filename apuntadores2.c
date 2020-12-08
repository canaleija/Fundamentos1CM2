/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   apuntadores2.c
 * Author: working
 *
 * Created on 8 de diciembre de 2020, 03:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

void ejemplo(int);
void ejemplo2(int*);
/*
 * 
 */
int main(int argc, char** argv) {
    int x = 45;
    ejemplo2(&x);
    printf("%d\n",x);
    return (EXIT_SUCCESS);
}
// paso de parametros por valor
void ejemplo(int x){
    x++;
    printf("%d\n",x);
}
// paso de parametros por referencia
void ejemplo2(int *x){
   printf("%d\n",*x);
   *x = 34;
}

