 // Find maximum no.betweeen 10 number by if else statement?
 #include<stdio.h>
 int main()
 {
 	int a;
 	printf("Enter the numbers %d\n");
 	scanf("%d\n",&a);
	while(a<=10)
	{
		printf("%d\n",a);
		a++;
	}
 	if(a>50)
 	{
 		printf("The number is maximum %d\n",a);
	 }
	 else{
	 	printf("The number is minimum %d\n",a);
	 }
 }
 
