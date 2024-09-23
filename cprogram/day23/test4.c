#include<stdio.h>
int main()
{
    int n,newsize,* a ;
    printf("enter the size of the array");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter the array:");
    for(int i=0;i<n;i++)

        scanf("%d",a+i);

    printf("the array is:");
    for(int i=0;i<n;i++)

        printf("%d ",*(a+i));

     printf("enter the size of the array");
    scanf("%d",&newsize);
     int *b=(int*)realloc(a,newsize*sizeof(int));
    printf("enter the array:");
    for(int i=n;i<newsize;i++)

        scanf("%d",b+i);

    printf("the array is:");
    for(int i=0;i<newsize;i++)

        printf("%d ",*(b+i));


}
