unsigned long   ft_strlcpy(char *dest, char *src, unsigned long size)
{
    unsigned long i;

    i = 0;
    while (i < (size - 1) && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}