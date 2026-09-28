#include <stdio.h>
#include <string.h>

void ft_bzero(void *s ,size_t n)
{
    size_t i;
    i=0;
    while (i<n)
    {
    ((unsigned char *)s)[i] =0;
    i++;
    }
}
int main ()
{
    char str[]="saja";
    ft_bzero(str+2,2);
    printf("the str after:%s \n",str);
    return(0);

}