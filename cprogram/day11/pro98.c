#include<stdio.h>
float averageofarray(int a[],int size);
int main()
{
    int i,a[5],size=5;
    float res;
    for(i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }

    res=averageofarray(a,sizeof(a)/sizeof(a[0]));
    printf(" the average value is %f",averageofarray(a,sizeof(a)/sizeof(a[0])));
    printf(" the average value is %f",res);
    getchar();
    return 0;


}
float averageofarray(int a[],int size)
{
      int i;
      float sum=0;

        for(i=0;i<size;i++)
        {
             sum=sum+a[i];
        }


    return sum/size;

}
