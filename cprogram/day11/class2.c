#include<stdio.h>
int main()
{
  int a[10],i,j,size,temp;


  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]);

  }
  for(i=0;i<5;i++)
  {
      for(j=0;j<4-i;j++)
      {
         if( a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
      }
  }
    for (i = 0; i < 5; i++)
        {
        printf("%d ", a[i]);

}
return 0;
}
