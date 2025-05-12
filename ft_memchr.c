/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioronoz- <ioronoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:20:56 by ioronoz-          #+#    #+#             */
/*   Updated: 2025/05/12 17:57:44 by ioronoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ptr_c;
	const unsigned char	*ptr_s;

	ptr_s = (const unsigned char *)s;
	ptr_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == ptr_c)
			return ((void *)(ptr_s + i));
		i++;
	}
	return (NULL);
}
