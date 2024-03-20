#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while(*str!='\0')
    {
        len++;
        str++;
    }
    return len;
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = ft_strlen(src);
	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_strcpy(duplicate, src);
	duplicate[len] = '\0';
	return (duplicate);
}