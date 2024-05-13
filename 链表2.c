#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int value;
     struct node* next;
}node;
int main()
{
    node* head=NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
            //add to linked-list
            node*p =(node*)malloc(sizeof(node));
            p->value=number;
            p->next=NULL;
            node *last=head;
            //find the last
            if(last){
                while(last->next)//last 指的地址存在就下一个实现了遍历
                {
                    last=last->next;

                }
                last->next=p;
            }else{
                head=p;
            }
            
        } 

    }while(number!=-1);
    return 0;
}