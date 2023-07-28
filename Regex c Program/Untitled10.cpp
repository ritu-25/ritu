#include<stdio.h>
int main()
{
	int a =582;
	int rem,sum=0;
	while(a>0){
		rem= a%10;
		sum = sum*10+rem;
		a=a/10;
		printf(sum);
	}
	//printf(sum);
	
}
