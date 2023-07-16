unsigned int	ft_strlen(char *string)
{
	unsigned int	len;

	len = 0;
	while (*string != '\0')
	{
		len++;
		string++;
	}
	return (len);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    const char *test_strings[] = {
        "Hello, world!",
        "1234567890",
        "A string with spaces",
        "",
        "A very, very, very, very, very, very, very, very, very, very long string",
        NULL
    };

    for (int i = 0; test_strings[i] != NULL; ++i)
    {
        const char *s = test_strings[i];
        if (strlen(s) == ft_strlen(s))
        {
            printf("PASS: \"%s\"\n", s);
        }
        else
        {
            printf("FAIL: \"%s\"\n", s);
        }
    }

    return 0;
}

