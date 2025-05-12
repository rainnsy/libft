#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*dup_mem;

	dup_mem = malloc(ft_strlen(s) + 1);
	if (!dup_mem)
		return (NULL);
	ft_strlcpy(dup_mem, s, (ft_strlen(s) + 1));
	return (dup_mem);
}
