#include <stdio.h>

int sudan(int x, int y, int z)
{
    if (z == 0)
    {
        return x + y;
    }
    else if (z > 0 && y == 0)
    {
        return x;
    }
    else
    {
        return sudan(sudan(x, y - 1, z), sudan(x, y - 1, z) + y, z - 1);
    }
}

int main(int argc, const char *argv[])
{
    // Deklarieren der Variablen
    int x, y, z;

    printf("x\\y|");

    for (y = 0; y <= 5; y++)
    {
        printf("%6d", y);
    }

    printf("\n----------------------------------------\n");

    for (x = 0; x <= 5; x++)
    {
        printf(" %d |", x);

        for (y = 0; y <= 5; y++)
        {
            z = 1;
            int result = sudan(x, y, z);

            printf("%6d", result);
        }

        printf("\n");
    }

    return 0;
}