#include <stdio.h>
#include <stdlib.h>

void f (unsigned int i, char *s)
{
        if(s[i] >= 'a' && s[i]<= 'z')
            s[i] = s[i] -32 ;
        
}
void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
   int i ;

   i=0;

    if (!s || !f)
        return ;

     while(s[i]!='\0')
    {
        f(i,s);
        i++;
    }
}
int main ()
{

   char string[] ="saja zaidan ";
    
    printf("before:%s \n",string);
    ft_striteri(string,f);
    printf("after:%s \n",string);
    return(0);
}