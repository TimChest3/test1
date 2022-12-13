#include <stdio.h>

main()
{
	int d,m,y;
	
	printf("Day? ");
	scanf("%i",&d);
	printf("Month? ");
	scanf("%i",&m);
	printf("Year? ");
	scanf("%i",&y);
	
	if((d>31)||(m>12)||(y<1))
	{
	printf("input error");	
	}
	else
	{
	int a=y%4;
	
	if(a!=0)
	{
		printf("Vi rodilis ne v visokosnii god");
	}
	else
	{
		printf("Vi rodilis v visokosnii god");
	}

	int b=y%12;
	
	switch(b)
	{
		case 0:
			{
			printf(" Monkey");
		    }
		    break;
		case 1:
			{
			printf(" Rooster");
		    }
		    break;
		case 2:
			{
			printf(" Dog");
		    }
		    break;
		case 3:
			{
			printf(" Pig");
		    }
		    break;
		case 4:
			{
			printf(" Rat");
		    }
		    break;
		case 5:
			{
			printf(" Ox");
		    }
		    break;
		case 6:
			{
			printf(" Tiger");
		    }
		    break;
		case 7:
			{
			printf(" Rabbit");
		    }
		    break;
		case 8:
			{
			printf(" Dragon");
		    }
		    break;
		case 9:
			{
			printf(" Snake");
		    }
		    break;
		case 10:
			{
			printf(" Horse");
		    }
		    break;
		case 11:
			{
			printf(" Sheep");
		    }
		    break;
    }
    
    if(((m==3)&&(d>20))||((m==4)&&(d<21)))
    {
    	printf(", Oven");
	}
    else
    {
    	if(((m==4)&&(d>20))||((m==5)&&(d<22)))
    	{
    		printf(", Telec");
		}
		else
		{
			if(((m==5)&&(d>21))||((m==6)&&(d<22)))
			{
				printf(", Blizneci");
			}
			else
			{
			    if(((m==6)&&(d>21))||((m==7)&&(d<23)))
			    {
			    	printf(", Rak");
			    }	
			    else
			    {
			    	if(((m==7)&&(d>22))||((m==8)&&(d<22)))
			    	{
			    		printf(", Leo");
					}
					else
					{
						if(((m==8)&&(d>21))||((m==9)&&(d<24)))
						{
							printf(", Deva");
						}
						else
						{
							if(((m==9)&&(d>23))||((m==10)&&(d<24)))
							{
									printf(", Vesi");
							}
							else
							{
								if(((m==10)&&(d>23))||((m==11)&&(d<23)))
								{
									printf(", Scorpion");
								}
								else
								{
									if(((m==11)&&(d>22))||((m==12)&&(d<23)))
									{
										printf(", Strelec");
									}
									else
									{
										if(((m==12)&&(d>22))||((m==1)&&(d<21)))
										{
											printf(", Kozerog");
										}
										else
										{
											if(((m==1)&&(d>20))||((m==2)&&(d<20)))
											{
												printf(", Vodolei");
											}
											else
											{
												printf(", Ribi");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
    
    
    }
	
	
}

