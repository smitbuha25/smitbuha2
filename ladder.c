#include<stdio.h>

main()

{
	int num;
	printf("Enter your number=");
	scnf("%d",num);
	if(num<0)
	{
		printf("Num is Negtive number");
	}
	
	else if (num==0)
	{
		printf("Num is Neutral number");
	}
	
	else if(num>0)
	{
		printf("Num is Positive number");
	}
}
