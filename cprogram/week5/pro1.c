#include<stdio.h>
int main()
{
    int a[]={1,2,5,2,9,2,6,4,6,8,9};
     int n=sizeof(a)/sizeof(a[0]);
     int count =0,output=0,i,j;
     for(i=0;i<n;i+=count)
       {
           if(a[i]==0)
           {
               return -1;
           }
        output++;
        count =0;
         int value=a[i];
         for(j=value;j>0;j--)
         {
              count++;
         }
       }

     printf(" the value is %d",output);
     getchar();
     return 0;
}
