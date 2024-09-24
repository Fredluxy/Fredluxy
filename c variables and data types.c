//c variables and data types
#include<stdio.h>
int main(){
    char a;
    char name[]={};
    int age;
    float area;
    double salary;
    
    printf("enter character:");
    scanf("%c",&a);
    printf("the character is %c \n",a);
    
    printf("enter name:");
    scanf("%s",&name);
    printf("the string is %s \n",name);
    
    printf("enter age:");
    scanf("%d",&age);
    printf("the age is %d years \n",age);
    
    printf("enter area:");
    scanf("&f",&area);
    printf("the area is %f \n",&area);
    
    printf("enter salary:");
    scanf("%lf",&salary);
    printf("the salary is %lf \n",salary);
}