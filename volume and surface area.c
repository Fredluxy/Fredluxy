//c program to find volume and surface area of a cylinder
#include<stdio.h>
int main()
{
    int radius,height;
    int surface_area,volume;
    
    printf("enter value of radius and height of cylinder");
    scanf("%d%d",&radius,&height);
    surface_area =2*(22/7)*radius*(radius+height);
    volume=(22/7)*radius*radius*height;
    printf("surface_area of cylinder is %d \n",surface_area);
    printf("volume of cylinder is %d \n",volume);
}