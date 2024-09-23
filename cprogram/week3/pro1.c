#include<stdio.h>
int reversenumber(int num);
int main()
{
    int num,res;
    printf("enter the number:");
    scanf("%d",&num);
    res= reversenumber( num);
    printf("the reverse value is: %d",res);

}
int reversenumber(int num)
{
    int ori;
    ori=num;
    int rev,sum=0;
    num=(ori<0)?-(num):num;
    while(num>0){
    rev=num%10;
    sum=sum*10+rev;
    num=num/10;
    }
    sum=(ori<=0)?-(sum):sum;

    return sum;
}
