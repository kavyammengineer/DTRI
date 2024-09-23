#include<stdio.h>
#include<stdlib.h>
char* columnalphabet(int num);

int main()
{
    int num,i,j;
    printf("enter the number");
    scanf("%d",&num);
    char*res=columnalphabet(num);
     printf("%s ",res);

}
char* columnalphabet(int num)
{
    int col,i=0,j,r=0;
    char* res = (char*)malloc(10 * sizeof(char));

    while(num>0)
    {

        col=(num-1)%26;
        res[i++]='A'+(col);
        num=(num-1)/26;
    }
    char *val=malloc((i+1)*sizeof(char));
    for(j=i-1; j>=0; j--)
{
    //char *val=malloc(1*sizeof(char));
    val[r++] = res[j];
}
val[r]='\0';

return val;

}
