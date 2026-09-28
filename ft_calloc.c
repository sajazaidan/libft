/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

void * ft_calloc(size_t nmemb ,size_t size)
{
    void * ptr;

    ptr = malloc (size * nmemb);
    if (ptr == NULL)
    return(NULL);
    bzero(ptr ,size * nmemb);
        return(ptr);

}
/*int main ()
{
	int	*p;
	int	i;

	p = ft_calloc(8, sizeof(int));
	if (p == NULL)
		return (1);
	i = 0;
	while (i < 8)
	{
		printf("%d", p[i]);
		i++;
	}
	free(p);
	return (0);
}*/