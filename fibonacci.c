/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fibonacci.c
 * Author: working
 *
 * Created on 10 de noviembre de 2020, 02:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n= 8;
    //número de elementos que queremos
    int x= 0;
    int p= 0; 
    int u= 1; 
    int a= 1; // controla las iteraciones del while
      
    printf ("0, ");
    // 1,2,3,4,5,6,7,8
    while (a<n){ 
    
        p=u;
        u=x;
        x=p+u;
        a=a+1;
            
        printf ("%d, ",x);
    }
    return (EXIT_SUCCESS);
}

