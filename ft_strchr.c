/*#include <stdio.h>
#include <string.h>*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*int main ()
{
    char   *str ="saja zaidan";
    printf(":%p \n",ft_strchr(str ,'a'));
    return(0);
}*/