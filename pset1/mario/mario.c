#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("what is the hight you want: ");
    }
    while (n < 1 || n > 8);
    for (int x = 0 ; x < n ; x++)
    {
        
        for (int f = n - 1; f > x; f--)
        {
            printf(" ");
        }
        for (int j = 0; j <= x; j++)
        {
            
            printf("#");
        }
        printf("  ");
        for (int g = 0; g <= x; g++)
        {
            printf("#");
        }

        //for (int h = n -1 ; h > x; h--)
        //{
        //    printf(".");
        //}
        printf("\n");
    }
}
