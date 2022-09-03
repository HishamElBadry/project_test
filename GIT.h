#ifndef GIT_H_INCLUDED
#define GIT_H_INCLUDED


typedef enum {
ERROR_OK,
ERROR_NOK
}error_state;

error_state mult (int x,int y,int * value);


error_state sum_values (int x,int y,int * value );
#endif // GIT_H_INCLUDED
