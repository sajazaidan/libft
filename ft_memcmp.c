#include <stdio.h>
#include <string.h>
int ft_memcmp(const void *s1,const void *s2 ,size_t n)
{
    size_t i;
    i=0;
    unsigned char *p1;
    unsigned char *p2;
    p1 = ( unsigned char *)s1;
    p2 = ( unsigned char *)s2 ;
while (i<n)
{
    if (p1[i]!=p2[i])
   {
    return (p1[i]-p2[i]); 
   }
i++;
}
return(0);
}
int main ()
{
    char s1[]="saja";
    char s2[]="sajb";
    printf("the result :%d \n",ft_memcmp(s1,s2,4));
    return(0);

}