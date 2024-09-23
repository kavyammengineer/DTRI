#include<stdio.h>
#include<math.h>
float discreminate(int a,int b,int c);

int main()
{
   int a,b,c,res;
   float x,x1,x2;
   printf(" enter the 3 number :");
   scanf("%d%d%d",&a,&b,&c);
res=discreminate( a, b, c);
   if(res==0)
   {
       x=-b/(2*a);
       printf(" the equation is real root %d",x);
   }
   else if(res>0)
   {
       x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a*c);
       x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a*c);
       printf("has distinct real roots %d\n %d\n",x1,x2);

   }
   else
   {
       printf(" the equation has two complex roots");
   }


}
float discreminate(int a,int b,int c)
{
    int d;
    d=(b*b)-(4*a*c);
    return d;
}
