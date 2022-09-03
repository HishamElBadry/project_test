#include <stdio.h>
#include <stdlib.h>
#define NULL (void*)(0)
#include "GIT.h"


int main()
{
    int x=10;
    int y=20;
    int sum=0;int multiplication =0;


    if (sum_values(x,y,&sum)== ERROR_OK){
    printf("sum of %d & %d =%d\n",x,y,&sum);
    }else  printf("invalid address");


     if (mult(x,y,&multiplication)== ERROR_OK){

    printf("multiply of %d & %d =%d\n",x,y,&mult);
    }else  printf("invalid address");
    return 0;
}
