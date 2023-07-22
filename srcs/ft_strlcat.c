#include "libft.h"

unsigned long   ft_strlcat(char *dst, char *src, unsigned long size)
{
    unsigned long i;
    unsigned long d_len;

    d_len = ft_strlen(dst);
    i = 0;
    while (i + d_len < size)
    {
        dst[d_len + i] = src[i];
        i++;
    }

    return (d_len + ft_strlen(src));
}