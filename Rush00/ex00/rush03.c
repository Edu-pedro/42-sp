#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int x, int y)
{
    int l; // i = linha
    int c; // j = coluna

    l   = 1;

    if  (x <= 0  y <= 0)
        return ;
    while   (l <= y)
    {
        c = 1;
        while   (c <= x)
        {
            if  ((l == 1 && c == 1)  (l == y && c == 1))
                ft_putchar('A');
            else if ((l == 1 && c == x)  (l == y && c == x))
                ft_putchar('C');
            else if (l == 1  l == y  c == 1  c == x)
                ft_putchar('B');
            else
                ft_putchar(' ');
            c++;
        }
        ft_putchar('\n');
        l++;
    }
}
