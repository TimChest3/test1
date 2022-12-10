#include <stdio.h>

main()
{
	int pin1,pin2;
	printf("login: ");
	scanf("%i",&pin1);
	printf("password: ");
	scanf("%i",&pin2);
	
	if(((pin1==111)&&(pin2==222))||((pin1==333)&&(pin2==444))||((pin1==555)&&(pin2==666)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}
