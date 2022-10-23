#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("A program to calculate the average\n");
	printf("enter a 1st number\n");
    scanf("%d",&a);
	printf("enter a 2nd number\n");
    scanf("%d",&b);
    printf("enter a 3th number\n");
	scanf("%d",&c);
	printf("enter a 4th number\n");
	scanf("%d",&d);
	printf("enter a 5th number\n");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("The average of the above numbers is:%d",f);
	return 0;
}
