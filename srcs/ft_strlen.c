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