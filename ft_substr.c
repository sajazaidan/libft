#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    char *substr;
    size_t  j;
    size_t length;

    length = strlen(s);
    substr = malloc (len +1 );
    if (!substr)
        return(NULL);

    if (start > length)
        return(substr);
    j=0;
    while (s[start]!='\0' && j<len)
    {
        substr[j]=s[start];
        start++;
        j++;
    }
    substr[j]='\0';
    return(substr);
}
int main ()
{
    char * str;
    char * substr;
    str ="sajazaidan";
    substr = ft_substr(str,5,3);
    printf(":%s",substr);
    free (substr);
    return(0);

}