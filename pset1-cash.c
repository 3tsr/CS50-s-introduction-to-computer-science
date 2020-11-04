#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change: ");
    }
    while (dollars <= 0);
    // dollars to cents
    int cents = round(dollars * 100);
    int coins = 0;
    // do I need quarters?
    while (cents >= 25)
    {
        coins ++;
        cents -= 25;
    }
    // do I need dimes?
    while (cents >= 10)
    {
        coins ++;
        cents -= 10;
    }
    // do I need nickels?
    while (cents >= 5)
    {
        coins ++;
        cents -= 5;
    }
    // do I need pennies?
    while (cents >= 1)
    {
        coins ++;
        cents -= 1;
    }
    printf("I have %i coin(s)\n)", coins);
}
