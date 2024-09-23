#include<stdio.h>
#include<string.h>

#pragma pack(2)
union student {
    char s[10];
int id;
int ma;
};
int main()

{
    union student data1,data2;
printf(" the t%d",sizeof(union student));
    data1.id=90;
    data2.id=65;
    printf("enter the string name:");
     scanf("%s",data1.s);
     scanf("%s",data2.s);
     data1.ma=2;
    data2.ma=1;
     printf(" 1id is %d\n",data1.id) ;
   printf(" 1str is %s\n",data1.s) ;
   // printf("%d\n",data2.id) ;
   printf(" 2str %s\n",data2.s) ;
   printf("  ma 1 is %d\n",data1.ma) ;
     printf(" id 1 is %d\n",data2.id) ;
   printf("  ma 2 is %d\n",data2.ma) ;
   return 0;
}
