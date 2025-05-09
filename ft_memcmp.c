#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;
    i = 0;
    while (i < n && ptr1[i] == ptr2[i])
        i++;
    if (i < n)
        return (ptr1[i] - ptr2[i]);
    else
        return (0);
}