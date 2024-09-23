#include<stdio.h>
int* array_merge(int a1[],int a2[],int n1,int n2,int a);
int main()
{
    int n1,n2,i,j;

    printf("enter the first array size:");
    scanf("%d",&n1);
     printf("enter the second array size:");
    scanf("%d",&n2);
    int a1[n1],a2[n2];
     int a=n1+n2;
    printf("enter the first array");
     for(i=0;i<n1;i++)
     {
         scanf("%d",&a1[i]);
     }
     printf("enter the second array");
     for(i=0;i<n2;i++)
     {
         scanf("%d",&a2[i]);
     }

     int *res=array_merge( a1, a2, n1, n2,a);
      for(i=0;i<a;i++)
     {
         printf("%d ",res[i]);
     }
free(res);
}
 int * array_merge(int a1[],int a2[],int n1,int n2,int a)
{

    int *c=malloc(a*sizeof(int));
     int k=0,i=0,j=0;
     while(i<n1  &&  j<n2)
     {
         if(a1[i]<a2[j])
         {
             c[k++]=a1[i++];
         }
         else
            {
                c[k++]=a2[j++];
            }
     }
     while(i<n1)
     {
         c[k++]=a1[i++];
     }
       while(j<n2)
     {
         c[k++]=a2[j++];
     }
    return c;
}


