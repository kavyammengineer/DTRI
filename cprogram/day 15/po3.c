#include<stdio.h>
int main()
{
    int a[10];
    int n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    int *pa=&ea;
    for(i=0;i<n;i++)
    {
        scanf("%d",pa+i);
    }
      for(i=0;i<n;i++)
    {
        printf("%d",*(pa+i));
    }

return 0;
}
