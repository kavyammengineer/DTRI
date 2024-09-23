#include<stdio.h>
void triangular_pattern(int width);
int main()
{
    int width;
    printf("enter the width:");
    scanf("%d",&width);
    triangular_pattern( width);
    return 0;
}
 void triangular_pattern(int width)
{
    int i,j ,k;
    for (i=0;i<width;i++)
    {
        for(k=width-1;k>i;k--)
            printf(" ");
        {
            for(j=0;j<=i;j++)
            printf("* ");
        }
      printf("\n");
    }

}

