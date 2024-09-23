#include<stdio.h>
int main()
{
int month,day,res,days;
printf("enter the month");
scanf("%d",&month);
printf("enter the date");
scanf("%d",&day);
switch(month)
{
     case 1:  res=day;
             break;
 case 2: res=31+day;
 break;

 case 3: res=59+day;
 break;
 case 4:res=90+day;
 break;
 case 5:res=120+day;
 break;
 case 6:res=151+day;
 break;
case 7:  res=181+day;
break;
 case 8: res=212+day;
 break;
 case 9: res=243+day;
 break;
 case 10:res=273+day;
 break;
 case 11:res=304+day;
 break;
 case 12:res=334+day;
 break;



}
days=res%7;
switch(days)
{
    case 2:printf("sunday");
            break;
    case 3:printf("monday");
            break;
    case 4:printf("tuesday");
            break;
    case 5:printf("wednesday");
            break;
    case 6:printf("thurday");
            break;
    case 0:printf("friday");
            break;
    case 1:printf("saturday");
            break;
}
}




