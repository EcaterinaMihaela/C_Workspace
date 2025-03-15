/*
Author:Căpățînă Ecaterina-Mihaela
Date:07.10.2023

Description:Tiparirea modelului un dreptunghi care e format din stelute care sunt vizibile doar de deasupra diagonalei secundare

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int m=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || j==0 || (i+j==n-1) || (i==1 && j==1) || (i==1 && j==2) || (i==2 && j==1) ){
                printf("* ");
            } else{
                printf(" ");
            }
        } printf("\n");
    }
    return 0;
}
