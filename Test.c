#include<stdio.h>

int prime(int n,int i);
int main()
{
	int num,result;
	printf("Enter the number: ");
	scanf("%d",&num);
	result=prime(num,num/2);
	if(result==1)
	printf("\n %d is a prime number",num);
	else
	printf("\n %d is not a prime number",num);
	return 0;
}
 int prime(int n,int i)
{
	if(i==1)
		return 1;
	else if(n==1)
		return 0;
	else
	{
		if(n%i==0)
			return 0;
		else
			return prime(n,i-1);
	}
}
