#include<stdio.h>
#define S "DEBUG_EN"
int main()
{
    #ifdef S
    printf("Hello World");
    #endif
    #ifndef S
    printf("Goodbye");
    #endif
}
