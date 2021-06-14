#include <cs50.h>
#include <stdio.h>
#include <math.h>



int main(void)
{
    // Many of you are probably wondering why digit2 = digit1.
    // The key to understanding how this works is right below
    // that line — since digit1 is assigned AFTER its value's
    // assigned to digit2, it means it will always contain
    // the value of digit1 from the previous loop iteration.
    // Therefore, after completing all iterations it will
    // hold last but one value processed — the second digit
    // since we progress from the end to the start of the number.
    long long Number = get_long_long("Number:");
    int digit1 = 0, digit2 = 0, num_digits = 0, sumodd = 0, sumeven = 0;
    while (Number > 0)
    {
        digit2 = digit1;
        digit1 = Number % 10;
    
        if (num_digits % 2 == 0)
        {
            sumeven += digit1;
        }
        else
        {
            int mult = 2 * digit1;
            sumodd += (mult / 10) + (mult % 10);
        }
        Number /= 10;
        num_digits++;
    }
    bool is_valid = (sumeven + sumodd) % 10 == 0;
    int tow = (digit1 * 10) + digit2;
    
    if (digit1 == 4 && num_digits >= 13 && num_digits <= 16 && is_valid)
    {
        printf("VISA\n");
    }
    else if (tow >= 51 && tow <= 55 && num_digits == 16 && is_valid)
    {
        printf("MASTERCARD\n");
    }
    else if ((tow == 34 || tow == 37) && num_digits == 15 && is_valid)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
