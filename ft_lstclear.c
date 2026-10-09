#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
void  *content;
struct s_list *next ;
} t_list;

void del(void *content)
{
    free(content);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr1;
    t_list *ptr2;
    if(!*lst)
        return ;
    ptr1 =*lst;
    while(ptr1)
    {
        ptr2 = ptr1->next;
        del(ptr1->content);
        free(ptr1);
        ptr1 = ptr2;
    }
    *lst =NULL;

}
    int main(void)
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
    printf("node 1 content :%s\n",(char*)node1 ->content );
    printf("node 2 content :%s\n",(char*)node2 ->content );
    ft_lstclear(&node1,del);
    printf("head content :%s\n",(char*)head ->content );
    if(node1 ==NULL)
        printf("there is no content inside \n");
    return(0);
}