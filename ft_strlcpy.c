/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioronoz- <ioronoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:21:29 by ioronoz-          #+#    #+#             */
/*   Updated: 2025/05/12 18:02:46 by ioronoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	size_t	j;

	i = 0;
	srclen = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
		srclen++;
	}
	if (dstsize == 0)
		return (srclen);
	while (j < srclen && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (srclen);
}
