#include<stdio.h>
void array_merge(int a1[],int a2[],int n1,int n2);
int main()
{
    int n1,n2,i,j;

    printf("enter the first array size:");
    scanf("%d",&n1);
     printf("enter the second array size:");
    scanf("%d",&n2);
    int a1[n1],a2[n2];
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

     array_merge( a1, a2, n1, n2);

}
 void array_merge(int a1[],int a2[],int n1,int n2)
{
    int c[10];
     int index=0,i=0,j=0;
     while(i<n1  &&  j<n2)
     {
         if(a1[i]<a2[j])
         {
             c[index++]=a1[i++];
         }
         else
            {
                c[index++]=a2[j++];
            }
     }
     while(i<n1)
     {
         c[index++]=a1[i++];
     }
       while(j<n2)
     {
         c[index++]=a2[j++];
     }
     for(i=0;i<index;i++)
     {
         printf("%d ",c[i]);
     }
}

