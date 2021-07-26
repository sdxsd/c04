int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != 0)
		++iterator;
	return (iterator);
}
