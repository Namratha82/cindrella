#include<stdio.h>
int main()
{
int choice=0;
printf("enter your choice");
scanf("%d",&choice);
if(choice==1)
{
printf(" Food item - Pasta \n Price- Rs 179 ");
}
else if(choice==2)
{
printf(" Food item - French Fries \n Price- Rs 99 ");
}
else if(choice==3)
{
printf(" Food item - Sandwich \n Price- Rs 149 ");
}
else if(choice==4)
{
printf(" Food item - Burger \n Price- Rs 129 ");
}
else
{
printf(" Food item - Pizza \n Price- Rs 239 ");
}
}
