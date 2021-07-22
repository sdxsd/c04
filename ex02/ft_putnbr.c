#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
}

int main()
{
    ft_putnbr(17349287);
}
