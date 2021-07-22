int ft_strlen(char *str)
{
    int iterator;
    while (str[iterator] != 0)
        ++iterator;
    return (iterator);
}
