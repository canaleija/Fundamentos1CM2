/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   while.c
 * Author: working
 *
 * Created on 9 de noviembre de 2020, 11:07 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x  = 1;
    // 0,1,2,3,4,5
    int t = 1;
    int tope = 10;
    
    while(x<=tope){
        printf("%d X %d = %d\n",t,x,t*x);
        x = x + 1;
       
    }
    
    
  
   
    // tarea hacer varias tablas
    //con while pero anidado
       
    return (EXIT_SUCCESS);
}

