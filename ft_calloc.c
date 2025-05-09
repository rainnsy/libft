#include <libft.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = size * nmemb;
	ptr = malloc(total_size);
	if (nmemb > 0 && total_size / nmemb != size)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
