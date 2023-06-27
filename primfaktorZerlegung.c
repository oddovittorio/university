#include <stdio.h>

int main()
{
    int d = 2, x, n, original_n;
    
    printf("Geben Sie eine Zahl ein: \n");
    scanf("%d", &n);
    
    original_n = n;
    
    printf("%d = ", original_n);
    
    while(n>1)
    {
        x = n % d;
        if(x == 0)
        {
            printf("%d * ", d);
            n = n/d;
        }
        else
        {
            d++;
        }
    }
    return 0;
}