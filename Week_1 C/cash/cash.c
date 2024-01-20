#include <stdio.h>

// Functions prototypes
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int sum;

    // Get the input of how much change is owed
    cents = 0;
    do
    {
        printf("Change owed:");
        while (scanf("%i", &cents) != 1 || cents < 0)
        {
            printf("Invalid input. Please enter a non-negative integer.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    }
    while (cents < 0);

    // Continuously minus the amount of cents till it reaches 0
    quarters = calculate_quarters(cents);
    cents = cents - (quarters *25);
    dimes = calculate_dimes(cents);
    cents = cents - (dimes *10);
    nickels = calculate_nickels(cents);
    cents = cents - (nickels *5);
    pennies = calculate_pennies(cents);
    cents = cents - (pennies *1);
    sum = quarters + dimes + nickels + pennies;

    // Prints the total amount of coins needed
    printf("The amount of minimum coins needed is : %i\n", sum);
    return (0);
}

// Calculate how many quarters is needed
int calculate_quarters(int cents)
{
    int quarters;

    quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return (quarters);
}

// Calculate how many dimes is needed
int calculate_dimes(int cents)
{
    int dimes;

    dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return (dimes);
}

// Calculate how many nickels is needed
int calculate_nickels(int cents)
{
    int nickels;

    nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return (nickels);
}

// Calculate how many pennies is needed
int calculate_pennies(int cents)
{
    int pennies;

    pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return (pennies);
}

