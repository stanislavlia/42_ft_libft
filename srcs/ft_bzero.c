void    ft_bzero(void *p, unsigned long size)
{
    int             i;
    unsigned char   *p_byte;

    i = 0;
    p_byte = (unsigned char *)p;
    while (i < size)
    {
        *p_byte = 0;
        p_byte++;
        i++;
    }
}