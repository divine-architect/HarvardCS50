#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    // TODO: Prompt for end size
    int e;
    do
    {
        e = get_int("Ending size: ");
    }
    while (e < n);
    // TODO: Calculate number of years until we reach threshold
    int years;
    for(int i = 1; n<e ; i++){

        n = n + (n/3) - (n/4);


        years = i;
    }
    printf("Years: %i\n",years);

    // TODO: Print number of years

}
