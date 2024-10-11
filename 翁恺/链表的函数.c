#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int value;
     struct node* next;
}node;

typedef struct list{
    node* head;   
}list;//封装

void add(list *alist,int number);
int main()
{
    list alist;
    int number;
    alist.head=NULL;
    do{
        scanf("%d",&number);
        if(number!=-1){
            add(&alist,number);
        }

    }while(number!=-1);
    //链表的搜索
   node*p=NULL;
   for(p=alist.head;p;p=p->next){
    printf("%d\n",p->value);
   }

 
   

    return 0;
}
void add(list *alist,int number){
     node*p =(node*)malloc(sizeof(node));
            p->value=number;
            p->next=NULL;
            node *last=alist->head;
            if(last){
                while (last->next)
                {
                    last=last->next;
                }
                last->next=p;
            }else{
                alist->head=p;
            }

}