#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if(needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while(haystack[i] != '\0' && i < len)
	{
		int j;

		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && i + j < len)
    	    j++;
		if (needle[j] == '\0')
        	return ((char *)&haystack[i]);
		i++;
	}

	return (NULL);
}
