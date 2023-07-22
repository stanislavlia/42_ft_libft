void    *ft_memcpy(void *dest, const void *src, unsigned long n)
{
    unsigned char   *ptr_d;
    unsigned char   *ptr_s;
    int             i;

    ptr_d = (unsigned char *)dest;
    ptr_s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        *ptr_d = *ptr_s;
        ptr_d++;
        ptr_s++;
        i++;
    }
    return (dest);
}