#include <stdio.h>

main()
{
	int a,b;
	printf("Vvedite pervoe chislo ");
	scanf("%i",&a);
	printf("Vvedite vtoroe chislo ");
	scanf("%i",&b);
	
	if(a>b)
	{
		printf("Bolshe");
	}
	else
	{
		if(a==b)
		{
			printf("Ravni");
		}
		else
		{
		printf("Menshe");	
		}
	}
}
