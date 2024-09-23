#include<stdio.h>
#define pi 3.14
float volume_sphere(float  );
int main()
{
    float r,result;

     printf("enter the int number");
    scanf("%f",&r);
    result=volume_sphere(r);

    printf("the  volume of the sphere is %f",result);

}
 float volume_sphere(float r )

 {

float volume=(4.0/3.0)*pi*r*r*r ;
 return volume ;


 }
