/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

char	*ft_strdup(const char *s)
{
	int		length;
	int		i;
	char	*ptr;

	i = 0;
	length = strlen(s) + 1;
	ptr = malloc(length * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*int main ()
{
    char *s;
    char *ptr ;
    s="saja";
    ptr =ft_strdup(s);
    if (ptr == NULL)
        return (1);
    printf(":%s \n",s);
    printf(":%s \n",ptr);
    return(0);
}*/