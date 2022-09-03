#include <stdio.h>
#include <stdlib.h>
#include "GIT.h"


int main()
{
    int x=10;
    int y=20;
    printf("sum of %d & %d =%d\n",x,y,sum_values(x,y));
    printf("multiply of %d & %d =%d\n",x,y,mult(x,y));
    return 0;
}
