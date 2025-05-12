#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr_dest;
    unsigned char *ptr_src;

    if (dest == NULL || src == NULL)
        return ;
    i = 0;
    ptr_dest = (unsigned char *)dest;
    ptr_src = (unsigned char *)src;
    while (i < n)
    {
       ptr_dest[i] = ptr_src[i];
       i++;
    }
    return (dest);
}
