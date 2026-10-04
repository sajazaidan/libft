#include <unistd.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{
    char c =0;
    if (n == -2147483648)
    write (fd , "-2147483648",11);
    if (n<0 && (n != -2147483648))
    {
        write (fd ,"-",1);
        n =-n;

    }
    if (n>=10)
    { ft_putnbr_fd( n/10,fd);}

c = (n%10) + '0';
write(fd,&c,1);
 
}
int main ()
{
    int num ;
    num =2147;
     ft_putnbr_fd(num, 1);
     return(0);
}