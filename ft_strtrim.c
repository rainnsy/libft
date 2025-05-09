#include <libft.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	trim_len;
	char	*trimmed;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	end = ft_strlen(s1) - 1;
	while (end >= i && ft_strchr(set, s1[end]))
	{
		end--;
	}
	trim_len = (end >= i) ? (end - i + 1) : 0;
	trimmed = malloc(trim_len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + i, trim_len + 1);
	return (trimmed);
}
