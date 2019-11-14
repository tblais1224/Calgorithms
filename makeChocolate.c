#include <cs50.h>
#include <stdio.h>

int numberSmallBars(int smallBars, int bigBars, int kiloGoal)
{
    kiloGoal = bigBars * 5 > kiloGoal ? kiloGoal % 5 : kiloGoal - bigBars * 5;
    return kiloGoal > smallBars ? -1 : kiloGoal;
}

int main(void)
{
    int smallBars = get_int("How many small bars: ");
    int bigBars = get_int("How many big bars: ");
    int kiloGoal = get_int("Kilo goal: ");
    printf("%i\n", numberSmallBars(smallBars, bigBars, kiloGoal));
}
