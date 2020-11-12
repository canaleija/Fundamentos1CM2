/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tablaswhile.c
 * Author: working
 *
 * Created on 12 de noviembre de 2020, 02:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int t = 1;
    int j = 1;
    int x = 3;
    int y = 4;
    while (t<=x){
        j = 1;
        while (j<=y){
            printf("%d X %d = %d\n",t,j,t*j);
            j = j + 1;
        }
        printf("----------\n");
        t = t + 1;
    }
    
    
    return (EXIT_SUCCESS);
}

