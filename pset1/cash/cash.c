#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    //declare the value of the change
    int quarters = 25;
    int dimes = 10;
    int nickets = 5;
    int pennies = 1;
    float x;
    int number = 0;
    do
    {
        x = get_float("what is the number: ");
    }
    while (x <= 0);
    //round to not have many numbers after decimals
    int g = round(x * 100);
    do
    {
        if (g >= quarters)
        {
            g = g - quarters;
            number++;
            //printf("g:%i\n", g);
        }
        else if (g >= dimes)
        {
            g = g - dimes;
            number++;
            //printf("d: %i\n", g);
        }
        else if (g >= nickets)
        {
            g = g - nickets;
            number++;
            //printf("n: %i\n",g);
        }
        else if (g >= pennies)
        {
            g = g - pennies;
            number++;
            //printf("p: %i\n",g);
        }

    }
    while (g > 0);
    printf("%i\n", number);
}
