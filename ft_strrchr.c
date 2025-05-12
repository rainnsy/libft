#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *last_occurrence;
	size_t i;
	size_t len;

	last_occurrence = NULL;
	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (char)c)
			last_occurrence = &s[i];
		i++;
	}
	return ((char *)last_occurrence);
}
