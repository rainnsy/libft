#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char ptr_c = (unsigned char)c;
    const unsigned char *ptr_s = (const unsigned char *)s;

    i = 0;
    while (i < n)
    {
        if (ptr_s[i] == ptr_c)
            return ((void *)(ptr_s + i));
        i++;
    }
    return (NULL);
}
