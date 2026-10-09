#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
void  *content;
struct s_list *next ;
} t_list;

void f(void *content)
{
    printf("the content of the node:%s \n",(char*) content);
}
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;

    while (lst)
    {
        f(lst ->content);
        lst =lst ->next;
    }
}
int main ()
{
    t_list *head;
    t_list *new1;
    t_list *new2;
     
    head =malloc (sizeof (t_list));
    new1  =malloc (sizeof (t_list));
    new2  =malloc (sizeof (t_list));
    head ->content = "saja";
    head -> next =new1;
    new1 ->content = "wael";
    new1 -> next =new2;
    new2 ->content = "zaidan";
    new2 -> next =NULL;
    ft_lstiter(head,f);
    
}