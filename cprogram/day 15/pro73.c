#include<stdio.h>
int main()
{
    char s[10],a[10],r[10];
    int i,length;
    int n=0,count_not=0,count=0,count_ori=0;
    printf("enter the string:");
    scanf("%s",s);
      for(i=0;s[i]!='\0';i++)
        {
            a[i]=s[i];
        }
        printf(" the value is %s",a);
    for(i=0;s[i]!='\0';i++)
    {
         length=i;
         count_ori++;
    }
    printf(" the length and count%d\n%d\n",length,count_ori);

    for(i=length;i>=0;i--)
    {
        r[n]=s[i];
        n++;
    }
    r[n]='\0';
    printf(" the reverse %s",r);
    for(i=0;i<=length;i++)
        {
            if(a[i]==r[i])
            {
                count++;
            }
            else
                {
                   count_not++;
                }
        }

       if((length+1)==count)//(count_ori==count)
           printf("the string is palindrome");
        else
            printf("the string is not palindrome");
}

