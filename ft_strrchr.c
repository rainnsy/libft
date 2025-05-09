#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *last_ocurrence;

	i = 0;
	last_ocurrence = 0;
	while(*s != '\0')
	{
		if(s[i] == (char)c)
			last_ocurrence = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last_ocurrence);
}