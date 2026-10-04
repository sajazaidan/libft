#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int s;//where the word start
    int e; // where it ends
    char *str2;
    int i;

    s=0;
    e = strlen(s1);
    while (s1[s] != '\0' && strchr(set,s1[s]))
        s++;
    while(e > s && strchr(set,s1[e-1]))
        e--;
    str2=malloc ((e-s)+1);
    if (!str2)
        return(NULL);
    i=0;
    while(s1[i]!='\0' && s<e)
    {
        str2[i]=s1[s];
        s++;
        i++;
    }
    str2[i]='\0';
    return(str2);
}
int main ()
{
    
    char *final;
   

    final =ft_strtrim("xxxsajaxxxxzaidanxxx","x");
    printf(":%s",final);
    free(final);
    return(0);
}