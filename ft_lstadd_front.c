#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{

void  *content;
struct s_list *next ;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;

new ->next = *lst ;
*lst =new ;

}
int main ()
{
    t_list *head;
    t_list *new;
    head =malloc (sizeof (t_list));
    new  =malloc (sizeof (t_list));
    head ->content = "wael";
    head -> next =NULL;

    new ->content = "saja";
    new -> next =NULL;

    printf(":%s \n",(char *) head -> content);
    ft_lstadd_front(&head ,new);
    printf(":%s\n",(char *)head ->content);
    printf(":%s\n",(char *)head ->next ->content);
    free (head ->next);
    free (head);

    return(0);
      
}