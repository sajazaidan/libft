#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest ,const void *src, size_t n)
{
    size_t i;
    i=0;
    while (i<n)
    {
        ((unsigned char*)dest)[i]=((const unsigned char*)src)[i];
        i++;
    }
    return(dest);
}
int main ()
{
    char src[]="saja";
    char dest[]="zaidan";
    printf("the dest before: %s \n",dest);
    ft_memcpy(dest,src,3);
    printf("the dest after: %s\n",dest);
    return(0);

}
