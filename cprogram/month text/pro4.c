#include<stdio.h>
int main()
{
    int n,i,newsize,t;

    int num1[4]= {1,5,12,15};
    n=sizeof(num1)/sizeof(num1[0]);
    int num2[7]= {0,1,1,3,14,15,20};
    newsize=sizeof(num2)/sizeof(num2[0]);
    int* output=(int*) calloc(n*newsize,sizeof(int));
    t=n*newsize;
    printf("enter the output");
    for(i=0; i<t-1; i++)
    {
        printf("%d",ouput[i]);
    }
    /*printf("enter the size2");
     scanf("%d",&newsize);
    int* num2=(int*)calloc(newsize,sizeof(int));
      printf("enter the num1");
    for(i=0;i<newsize;i++)
    {
       scanf("%d",&num2[i]);
    }
    for(i=0;i<newsize;i++)
    {
       printf("%d",num2[i]);
    }
    int* output=(int*)realloc(newsize,n*sizeof(int));
      printf("the output is:");
    for(i=0;i<newsize;i++)
    {
       scanf("%d",&output[i]);
    }
    for(i=0;i<newsize;i++)
    {
       printf("%d",output [i]);
    }*/


}

