/*#include <stdio.h>
#include <string.h>
#include <stddef.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = strlen(src);
	if (dsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*int main ()
{
    char dst[5];
    printf(":%zu \n",ft_strlcpy(dst,"saja",5));
    printf(":%s \n",dst);
    return(0);
    
}*/




