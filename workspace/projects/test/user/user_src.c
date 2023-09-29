#include <stdio.h>

#include "app.h"

void user_func(void)
{
    int b = app(1);

    printf("[%s] b=%d\n", __func__, b);
}