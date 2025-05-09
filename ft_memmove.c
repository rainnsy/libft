#include <libft.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr_dest;
    const unsigned char *ptr_src;

    if (dest == NULL || src == NULL)
        return ;
    ptr_dest = (unsigned char *)dest;
    ptr_src = (const unsigned char *)src;
    if (ptr_dest > ptr_src && ptr_src + n > ptr_dest) {
        i = n;
        while (i > 0) {
            i--;
            ptr_dest[i] = ptr_src[i];
        }
    } else {
        i = 0;
        while (i < n) {
            ptr_dest[i] = ptr_src[i];
            i++;
        }
    }
    return (dest);
}
