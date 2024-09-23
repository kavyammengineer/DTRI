#include<stdio.h>
#include<string.h>
 char* binarytosum(char *a,char *b);
int main()
{
   char a[]="1010";
   char b[]="0100";
char* result=binarytosum(a,b);
   printf(" the sum is %s",result);
   getchar();
   return 0;

}
 char* binarytosum(char *a,char *b)
 {
     int lena=strlen(a);
     int lenb=strlen(b);
    int  maxlen=(lena>lenb)?lena:lenb;
     char* res = (char*)malloc((maxlen + 2) * sizeof(char));
     int i,j;
     int carry=0;
     for(i=lena-1,j=lenb-1,maxlen--;maxlen >= 0;i--,j--,maxlen--)
     {
          int sum=carry;
          if(i>=0)
            sum=sum+a[i]-'0';
        if(j>=0)
           sum=sum+b[j]-'0';
            res[maxlen+1]=sum%2+'0';
           carry =sum/2;

     }
     if(carry)
     {
         res[0]='1';
         return res;
     }
     return res + 1;
 }
