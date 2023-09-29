#include <stdio.h>

#include "liba.h"
#include "libb.h"

int app(int a)
{
    liba_func();
    libb_func();

    printf("[%s] input is  a  =%d\n", __func__, a);
    printf("[%s] output is a+1=%d\n", __func__, a+1);
    
    return (a+1);
}