#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putendl_fd(char *s, int fd)
{
if (!s)
return ;

if(*s)
{ 
write (fd,s ,strlen(s));
write (fd ,"\n",1);
}
}
int main ()
{
    char str [10] = "saja";
    ft_putendl_fd(str ,1);
    return(0);
}