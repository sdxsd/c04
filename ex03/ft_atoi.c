int	odd_even(int x)
{
	if (x % 2)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	iterator;
	int	minus_count;
	int	nbr;

	nbr = 0;
	iterator = 0;
	minus_count = 0;
	while (str[iterator] != '\0')
	{
		if (str[iterator] == '-')
			++minus_count;
		else if (str[iterator] == ' ')
			;
		else if (str[iterator] >= '0' && str[iterator] <= '9')
		{
			nbr *= 10;
			nbr += (int)str[iterator] - '0';
		}
		else
			break ;
		++iterator;
	}
	if (odd_even(minus_count) == 1)
		nbr = nbr - (nbr * 2);
	return (nbr);
}
