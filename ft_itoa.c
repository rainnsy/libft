#include "libft.h"

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

}
