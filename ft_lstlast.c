#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{

void  *content;
struct s_list *next ;
} t_list;

t_list *ft_lstlast(t_list *lst)
{
    while(lst)
    {
        if (!lst ->next)
            return(lst);
    lst = lst ->next ;
    }
    return(lst);
}


int main ()
{
    t_list *head;
    t_list *new;
    t_list *new1;
    t_list *new2;
    
    head =malloc (sizeof (t_list));
    new  =malloc (sizeof (t_list));
    new1  =malloc (sizeof (t_list));
    new2  =malloc (sizeof (t_list));
    head ->content = "wael";
    head -> next =new;

    new ->content = "saja";
    new -> next =new1;
    new1 ->content = "wael";
    new1 -> next =new2;
    new2 ->content = "zaidan";
    new2 -> next =NULL;

    printf(":%s",(char *)ft_lstlast(head)->content);
    

}