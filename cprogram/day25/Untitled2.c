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
    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int pos=low+((t-a[low])*(high-low))/(a[high]-a[low]);
    if(a[pos]==t)
        return pos;

                else if(a[pos]<t)
                    low= pos+1;
                else
                    high= pos-1;
    }
    return -1;
}
