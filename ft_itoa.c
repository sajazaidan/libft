#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_nbrlen(int n)
{
    int len =0 ;
    if (n<=0)
    len++;
    while(n != 0)
    {
        n= n/10;
        len++;
    }
    return(len);
}

char *ft_itoa(int n)
{
 long int num=0 ;
 char *str;
 int length=0 ;
length =ft_nbrlen(n);
 str = malloc(length +1);
 if (!str)
    return(NULL);

 num = n;
    if (num ==0)
    str[0] = '0';

 str[length]='\0';

 if (num<0)
 {
    str[0]= '-';
    num=-num ;
 }
 while (num >0)
 {
    --length;
    str[length] = num % 10 +'0';    
    num = num /10;
 }
return(str); 
}
int main ()
{
    int digit ;
    digit = -2147483648;
    char *str2;
    str2 = ft_itoa(digit);
    printf(":%s" , str2);
    free (str2);
    return(0);
}