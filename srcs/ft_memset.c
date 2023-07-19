void    *ft_memset(void *ptr, int val, unsigned long num)
{
    unsigned char   val_to_set;
    int             i;
    unsigned char   *char_p;

    char_p = (char *)ptr;
    i = 0;
    while (i < num)
    {
        *char_p = (unsigned char)val_to_set;
        char_p++;
        i++;
    }
    return (ptr);
}