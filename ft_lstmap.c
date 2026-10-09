#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct s_list
{
void  *content;
struct s_list *next ;
} t_list;

void *f(void *content)
{
   
}
void del(*content)
{
    free(content);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;

    if (!lst)
        return ;

    new =malloc(sizeof(t_list));

    if(!new)
        return(NULL);

    while(lst)
    {
        
    }
}
int main ()
{
     t_list *head;
    t_list *node1;
    t_list *node2;

    head = malloc(sizeof(t_list));
    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));

    head ->content = malloc (5);
    strcpy(head ->content ,"saja");
    head ->next = node1;

    node1 ->content =malloc (5);
    strcpy(node1 ->content ,"wael");
    node1 ->next =node2;

    node2 ->content = malloc(7);
    strcpy(node2 ->content ,"zaidan");
    node2 ->next =NULL;
}