#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char f (unsigned int, char letter)
{
        if(letter >= 'a' && letter <= 'z')
            return(letter - 32);
        
        return(letter);
}

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
   char *str2 ;
   int i ;
   int length;
   i=0;
    if (!s || !f)
        return(NULL);

   length = strlen(s);
   str2 = malloc(length + 1);

    if(!str2)
        return(NULL);

    while(s[i]!='\0')
    {
        str2[i] = f(i,s[i]);
        i++;
    }
    str2[i]='\0';
    return(str2);
}
int main ()
{
    char *string ;
    char *final;

    string = "SAJA ZAIDAN";
    final = ft_strmapi(NULL ,f);
    printf(":%s",final);
    free(final);
    return(0);
}