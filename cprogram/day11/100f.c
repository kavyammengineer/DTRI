#include<stdio.h>
 int second_largest(int a[],int n);
int main()
{
    int a[6],i,n;
    printf("enter the number of columns");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

            scanf("%d",&a[i]);
    }
    second_largest(a,n);
    printf("the second largest value %d",second_largest(a,n));


}
  int second_largest(int a[],int n)
  {
      int second=a[0],largest=a[0],i;
      for(i=1;i<n;i++)
      {
          if(a[i]>largest){
            second=largest;
          largest=a[i];
          }
          else if(a[i]>second && a[i]<largest)
          {
             second=a[i];
          }
      }
      return second;

  }

