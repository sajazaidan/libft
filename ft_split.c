
#include <unistd.h>
#include <stdlib.h>

int count_word(char const *s ,char c)
{
    int i=0;
    int count =0;
    while (s[i])
    {
        while (s[i] == c)
        i++;
        if (s[i])
        {
        count ++;
        while(s[i] != c && s[i])
            i++;

        }
    }
    return(count);
}
int wordlength(char *s)
{
    int i=0;
    while (s[i])
        i++;
    return(i);
}

char **ft_split(char const *s, char c)
{
    char **str;
    int count;
    int i=0;
    int length =0;
    count =count_word(s,c);
    str =malloc((count +1) * sizeof(char*));
    if (!str)
        return(NULL);
    while (s[i]==c)
        i++;
    if (s[i])
    {
        length =wordlength;
        str[i] = malloc ((length+1) *sizeof(char*));
        
    }
    str[i] =='\0';
    }