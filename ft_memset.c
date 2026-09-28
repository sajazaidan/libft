#include <stdio.h>
#include <string.h>

void    *ft_memset(void *s ,int c ,size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = c;
            i++;
    }
    return (s);
}
int main(void)
{
    char str[5]="saja";
    ft_memset(str,'q',3);
    printf ("the str after:%s",str);
    return(0);
}