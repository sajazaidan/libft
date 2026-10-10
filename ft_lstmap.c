#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct s_list
{
void  *content;
struct s_list *next ;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list *node;
    node = malloc (sizeof (t_list));
    if (!node)
        return(NULL);
    node ->content = content;
    node ->next =NULL;
    return(node);

}
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

void *to_upper(void *c)
{
    char *str;

    str = malloc(2);
    if (!str)
        return (NULL);
    str[0] = ft_toupper(*(char *)c);
    str[1] = '\0';
    return (str);
}
void del(content)
{
    free(content);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *firstptr;
    t_list *newnode;
    if (!f || !del)
        return ;
    
    firstptr =NULL;
    while (lst)
    {
        newnode = (ft_lstnew ((*f) (lst ->content)))

        if (!newnode)
            {
                while (firstptr)
                {
                    newnode = firstptr ->next ;
                    (*del)(firstptr ->content);
                    free(firstptr);
                    firstptr = newnode;
                }
                return(NULL);
            }
            ft_lstadd_back(&firstptr,newnode);
            lst = lst ->next;
        }
    return(firstptr);
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

    