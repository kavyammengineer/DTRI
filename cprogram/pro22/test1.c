#include<stdio.h>
void square_number(int num);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    square_number(num);
}
void square_number(int num)
{
    for(int i=0;;i++)
    {
        int squarenum=0;
        squarenum=i*i;
        if(squarenum>=num)
        {
            printf("%d",squarenum);
            break;
        }

    }
}

