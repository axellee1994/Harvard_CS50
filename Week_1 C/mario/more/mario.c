#include <stdio.h>

void    ft_print_bricks(int n);

int main(void)
{
    int height;

    // Get height of pyramid
    do
    {
        printf("What is the height of the pyramid: ");
        scanf("%i", &height);
    }
    while (height < 1 || height > 8);

    // Call in prototype to print
    ft_print_bricks(height);
    return (0);
}

void    ft_print_bricks(int n)
{
    // Print Rows
    for (int i = 0; i < n; i++)
    {
        // Print Columns
        for(int j = 0; j < i+n+3; j++)
        {
            // Print Spaces
            if (j == n || j == n + 1 || i + j < n - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}

