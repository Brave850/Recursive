#include<stdio.h>
sum(int n);
int main()
{
	int num,result;
	printf("Enter the number: ");
	scanf("%d",&num);
	result=sum(num);
	printf("Sum of digit is: %d\n",result);
	return 0;
}
sum(int n)
{
	if(n!=0)
		return (n%10+sum(n/10));
	else
		return 0;
}
