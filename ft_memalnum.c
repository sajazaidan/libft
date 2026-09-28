  #include <ctype.h>
  #include <stdio.h>

   int ft_isalnum(int c)
   {
    if((c>='A'&& c<='Z')||(c>='a'&& c<='z')|| (c>='0'&& c<='9'))
    return(1);
    else 
    return(0);
   }
   int main ()
   {
    int letter ='@';
    printf("is it alnnum: %d \n",ft_isalnum(letter));
    return(0);

   }