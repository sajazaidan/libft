#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{

void  *content;
struct s_list *next ;
} t_list;

unsigned int ft_lstsize(t_list *lst)
{   
    unsigned int i=0;
    while (lst)
        {
            lst = lst ->next;
            i++;
        }
    return(i);
}

int main ()
{
    t_list *head;
    t_list *new;
    t_list *new1;
    t_list *new2;
    unsigned int nbrofnodes;
    
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

    nbrofnodes=ft_lstsize(head);
    printf(":%d",nbrofnodes);
    

}