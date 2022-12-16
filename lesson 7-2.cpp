#include <stdio.h>

main()
{
    int i=0;
    while(i<15)
    {
      printf("%i ",i);
      i=i+1;
    }
    
    int a=0;
    while(a<15)
    {
        if(a%2==0)
        {
        printf("%i ",a);    
        }
        
        a=a+1;
    }
}