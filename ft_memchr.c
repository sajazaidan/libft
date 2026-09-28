#include <stdio.h>
#include <string.h>
void * ft_memchr(const void *s ,int c ,size_t n)
{
size_t i;
i=0;
unsigned char *p1;
p1 =(unsigned char *)s;
while (i<n)
{
    if (p1[i] == (unsigned char)c)
    return(&p1[i]);
i++;
}
return(NULL);
}
int main ()
{
    char s[]="zaidan";
    printf("the address is :%p \n",ft_memchr(s,'q',6));
    return(0);

}