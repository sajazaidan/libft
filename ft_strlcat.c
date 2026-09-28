/*#include <stdio.h>
#include <string.h>
#include <stddef.h>*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_dst = strlen(dst);
	len_src = strlen(src);
	i = 0;
	j = 0;
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (len_dst + len_src);
}
/*int main ()
{
    char dst[10] ="saja";
    char src[] ="zaidan";
    printf(":%zu \n",ft_strlcat (dst ,src,6));
    printf(":%s \n",dst);

    return(0);
}*/