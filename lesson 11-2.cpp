#include <stdio.h>

main()
{
    int n;
    int mas[100];
    printf("Kolichestvo elementov? ");
    scanf("%i",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%i",&mas[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%1i",mas[i]);  
    }
}