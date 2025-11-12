char	*ft_strcpy(char *dest,char *src)
{
	int	dumb;

	dumb = 0;
	while(src[dumb] != '\0')
	{
		dest[dumb] = src[dumb];
		dumb++;
	}
	dest[dumb] = '\0';
	return (dest);
}
