#include<stdio.h>
int fun1(int n,int a[n],int t);
int main()
{
     int a[10],t,n,i;
     printf("enter the array size:");
     scanf("%d",&n);
      printf("enter the target:");
     scanf("%d",&t);
     printf("enter the arrays :");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     int res=fun1( n,a,t);
     printf("%d",res);

}
int fun1(int n,int a[n],int t)
{
    int i=0;
    if(a[n-1]==t)
     {
         return n-1;
     }
     else
     {
         a[n-1]=t;
     }
     while(1)
     {
         if(a[i]==t)
         {
          if(i!=n-1)
            return i;
          else
            return -1;
         }
         i++;
     }
     return -1;

}
