#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *join ;
    int size1;
    int size2;
    int i ;
    int j ;

    size1 = strlen(s1);
    size2 = strlen(s2);
    join = malloc(size1 + size2 +1);
    if (!join)
    return (NULL);
    i=0;
    while (i<size1)
    {
        join[i]=s1[i];
        i++;
    }
    j=0 ;
    while (j<size2)
    {
        join[i+j]=s2[j];
        j++;
    }
    join[i+j]='\0';
    return(join);

}
int main ()
{
    char *str1;
    char *str2;
    str1 ="saja  ";
    str2 ="zaidan";
    char *final ;

    final = ft_strjoin(str1,str2);
    printf(":%s \n",final);
    free (final);
    return(0);
}