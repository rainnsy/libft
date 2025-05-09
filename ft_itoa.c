# include "libft.h"

int ft_count_digits(int n)
{
	int len;
	long num;

	num = n;
	len = 0;
	if (num <= 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char	*c;
	int		len;
	int		sign;
	long	num;

	sign = 1;
	len = ft_count_digits(n);
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	c[len] = '\0';
	if (n < 0)
	{
		sign = -1;
		c[0] = '-';
	}
	num = n;
	if (sign == -1)
		num = -num;
	while (len > 0 && c[len - 1] != '-')
	{
		len--;
		c[len] = (num % 10) + '0';
		num /= 10;
	}
	return (c);
}
