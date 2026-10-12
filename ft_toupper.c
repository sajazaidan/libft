#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
// int main ()
// {
// 	char letter ='A' ;
// 	printf(":%d\n" ,ft_toupper(letter));
// 	return(0);
// }
