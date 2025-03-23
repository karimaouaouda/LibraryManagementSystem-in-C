/**
 * @author KarimAouaouda@karimaouaouda.officiel@gmail.com
 * @version 1.0
 * @date 2021-01-01
 * @brief main file
 */

#include <stdio.h>

void hello(){
    printf("hello world");
}

int main(int argc, char const *argv[])
{
    void (*ptr)() = &hello;

    ptr();
    return 0;
}
 