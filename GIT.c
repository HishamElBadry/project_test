#include <stdio.h>
#include <stdlib.h>

#include "GIT.h"
error_state mult (int x,int y,int *value){

if (value != NULL){

*value = (x*y);

return ERROR_OK;

    }else return ERROR_NOK;

};


error_state sum_values (int x,int y,int * value ){
    if (value !=NULL){

*value = (x+y);

return ERROR_OK;

    }else return ERROR_NOK;

}
