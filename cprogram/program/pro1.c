
#include <stdio.h>

inline int maxi(int a, int b)
 {
    return (a > b) ? a : b;
}

int main() {
    int x = 5;
    int y = 10;
    int result = maxi(x, y);
    printf("The maximum value is: %d\n", result);
    return 0;
}
