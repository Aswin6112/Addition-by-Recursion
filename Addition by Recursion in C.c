#include<stdio.h>
addition();
int main()
{
    addition();
    return 0;
}
int addition(int n)
{   
    int a,b,c,d;
    int sum;
	printf("ENTER THE FOUR NUMBERS TO BE ADDED: \t");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum=a+b+c+d;
	printf("SUM=%d",sum);
}
