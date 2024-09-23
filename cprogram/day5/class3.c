#include<stdio.h>
int main()
{
    char day;
    printf(" enter the day:");
    scanf(" %c",&day);
    switch(day)
    {
        case 'a':printf("monday");
            break;
        case 'b':printf("tuesday");
            break;
        case 'c':printf("wednesday");
            break;
        case 'd':printf("thrusday");
            break;
        case 'e':printf("friday");
            break;
        case 'f':printf("saturday");
            break;
        case 'g':printf("sunday");
            break;
        default:printf("no day");

    }
}
