



void    *ft_memset(void *ptr, int val, unsigned long num)
{
    unsigned char   val_to_set;
    int i;
    unsigned char *char_p;

    char_p = (char *)ptr;
    val_to_set = val % 256;
    i = 0;
    while (i < num)
    {
        *char_p = val_to_set;
        char_p++;
        i++;
    }
    
    return (ptr);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char    str[10];
    int     i;

    //ft_memset(str, 77, sizeof(char) * 3 );  // Initialize all elements of arr[] to 0
    memset(str, 77, sizeof(char) * 3 );

    // Print the array
    for (i=0; i < 10; i++)
    {
        printf("%d \n", str[i]);
    }

    return 0;
}
*/