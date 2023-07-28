// check no. is divisible by 5 or 11 ?
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d\n",&a);
	if(a%5==0  && a%11==0)
	{
		printf("The no. is divisible by 5\n");
	}
	else{
		printf("The no. is divisible by 11\n");
	}
	return 0;
}
