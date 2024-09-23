#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,newsize,*ptr;
    printf("enter the size:");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    printf("enter the elements:");
    for(i=0;i<size;i++)
        scanf("%d",ptr+i);
         printf(" the elements are:");
     for(i=0;i<size;i++)
        printf("%d",*(ptr+i));

        printf("enter the newsize:");
        scanf("%d",&newsize);
        ptr=(int*)realloc(ptr,newsize*sizeof(int));
         printf("enter the  new elements:");
    for(i=size;i<newsize;i++)
        scanf("%d",ptr+i);
         printf(" the elements are:");
     for(i=0;i<newsize;i++)
        printf("%d",*(ptr+i));

        getchar();
        return 0;
}

