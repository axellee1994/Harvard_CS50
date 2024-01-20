#include <stdio.h>

void    ft_print_bricks(int n);

int main(void)
{
        int height;

        do
        {
        printf("What is the height of the pyramid: ");
        scanf("%i", &height);
        }
        while (height < 1 || height > 8);

        ft_print_bricks(height);

        return (0);
}

void    ft_print_bricks(int n)
{
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                    if (i + j < n - 1)
                        printf(" ");
                    else
                        printf("#");
            }
            printf("\n");
        }
}

