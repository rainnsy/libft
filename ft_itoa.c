/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioronoz- <ioronoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:20:53 by ioronoz-          #+#    #+#             */
/*   Updated: 2025/05/12 17:59:02 by ioronoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_str(char *str, long num, int len, int neg)
{
	str[len + neg] = '\0';
	if (neg)
		str[0] = '-';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		len--;
		str[len + neg] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;
	int		neg;

	num = n;
	neg = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	len = ft_count_digits(num);
	str = (char *)malloc(sizeof(char) * (len + neg + 1));
	if (!str)
		return (NULL);
	ft_fill_str(str, num, len, neg);
	return (str);
}
