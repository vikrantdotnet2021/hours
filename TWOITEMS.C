#include<stdio.h>
#include<conio.h>
void main()
{
float weight1,weight2,purchase1,purchase2,average;
clrscr();
printf("weight of item1");
scanf("%f",&weight1);
printf("weight of item2");
scanf("%f",&weight2);
printf("purchase of item1");
scanf("%f",&purchase1);
printf("purchase of item2");
scanf("%f",&purchase2);
average=((weight1*purchase1)+(weight2*purchase2)) /(purchase1+purchase2);
printf("\naverage value = %f",average);
getch();
}




