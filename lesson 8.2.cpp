#include <stdio.h>

main()
{
	int a=0;
	while(a!=7)
	{
		scanf("%i",&a);
		if(a>7)
		{
			printf("bolshe nyjnogo\n");	
		}
		else
		{
			if(a<7)
			{
			printf("menshe nyjnogo\n");	
			}
		}
		
		if(a>10)
		{
			printf("bolshe 10\n");	
		}
		else
		{
			if(a<10)
			{
			printf("menshe 10\n");	
			}
			else
			{
				printf("ravno 10\n");
			}
		}
		
		int b=a%2;
		int c=a%3;
		if(b==0)
		{
			printf("delitsa na 2\n");	
		}
		else
		{
			printf("ne delitsa na 2\n");
		}
		
		if(c==0)
		{
			printf("delitsa na 3\n");	
		}
		else
		{
			printf("ne delitsa na 3\n");
		}
		
	}
	printf("OK");
}

