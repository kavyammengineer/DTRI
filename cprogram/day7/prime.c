#include <stdio.h>

int main()
 {
    int n, i, flag = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        {
        printf("%d is not a prime number\n", n);
        return 0;
        }
    else
     {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        {
        printf("%d is a prime number\n", n);
        }
    else
        {
        printf("%d is not a prime number\n", n);
        }
    return 0;
}



