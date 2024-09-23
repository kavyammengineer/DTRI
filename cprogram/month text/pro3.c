#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("enter the string");
    scanf("%[^\n]s",s1);
    int output =1,i,length,count=0,n;

    n=strlen(s1);
    printf("the length is %d\n",n);
    for(i=0; i<n; i++)
    {
        if(s1[i]>='A' && s1[i]<='z')
        {
            if(s1[i+1]==' ')
            {
                output++;
            }
        }
    }
    printf(" the output is %d",output);

}
