/*#include <stdio.h>
#include <string.h>*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*letter;

	i = 0;
	letter = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			letter = (char *)&s[i];
		}
		i++;
	}
	return (letter);
}
/*int main ()
{
    char   *str ="saja zaidan";
    printf(":%p \n",ft_strrchr(str ,'a'));
    return(0);
}*/