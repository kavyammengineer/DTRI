#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i=1,digit;
    int res=0;

    while(res<n)
    {
        if(i>=0)
        {
            int ori=i;
            int num=i;
            int orisum=i;
            int count=0;
            while(num!=0)
            {
                num=num/10;
                count++;

            }
            int sum=0;
            while(ori!=0)
            {
                digit=ori%10;
                sum=sum+pow(digit,count);
                ori=ori/10;
            }
            i++;
            if(sum==orisum)
            {
                printf("%d ",orisum);
                res++;
            }

        }

    }
}

