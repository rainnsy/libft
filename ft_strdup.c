/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioronoz- <ioronoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:21:20 by ioronoz-          #+#    #+#             */
/*   Updated: 2025/05/12 18:03:57 by ioronoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_mem;

	dup_mem = malloc(ft_strlen(s) + 1);
	if (!dup_mem)
		return (NULL);
	ft_strlcpy(dup_mem, s, (ft_strlen(s) + 1));
	return (dup_mem);
}
