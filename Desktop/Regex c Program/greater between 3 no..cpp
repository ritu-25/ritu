#include<stdio.h>
int main()
{
	int a =50,b=40 ,c=77;
	if(a>b && a>c )
	{
		printf("The value a greater then b and c %d",a);
	}
	else if(b>a && b>c)
	{
		printf("The value b greater then a and c %d",b);
	}
	else{
		printf("The value c greater then a and b %d",c);
	}
	
}
