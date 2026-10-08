#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{

void  *content;
struct s_list *next ;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (!lst || !new)
        return ;
    if (!*lst)
        *lst=new;
    
    last = *lst;
    while(last -> next)
        last = last ->next;
    new -> next = NULL;
    last ->next = new;
}


int main ()
{
    t_list *node1;
    t_list *new;
    t_list *node2;
    t_list *node3;
    node1 =malloc (sizeof (t_list));
    new  =malloc (sizeof (t_list));
    node2  =malloc (sizeof (t_list));
    node3  =malloc (sizeof (t_list));

    node1 ->content = "saja";
    node1-> next = node2;

    new ->content = "wael";
    new -> next =NULL;

    node2 ->content = "zaidan";
    node2 -> next = node3;
    node3 ->content = "in 42";
    node3 -> next =NULL;
    printf(":%s \n",(char *) node3 ->content);
    ft_lstadd_back(&node1 ,new);
    printf(":%s\n",(char *) node3 ->next ->content);
    return(0);
      
}