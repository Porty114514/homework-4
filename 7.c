#include<stdio.h>
#include<stdlib.h>
struct S{
        char name[20];
        int number;
        struct S *pnext;
};
int a;
struct S *creat(){
        struct S *phead=NULL;
        struct S *pend,*pnew;
        a = 0;
        pend = pnew =(struct S*)malloc(sizeof(struct S));
        printf("name first , then number\n");
        scanf("%s",pnew->name);
        scanf("%d",&pnew->number);
        while(pnew->number!=0){
        a++;
        if(a==1){
                pnew->pnext=phead;
                pend=pnew;
                phead=pnew;
        }
        else{
                pnew->pnext=NULL;
                pend->pnext=pnew;
                pend=pnew;
        }
        pnew=(struct S*)malloc(sizeof(struct S));
        scanf("%s",pnew->name);
        scanf("%d",&pnew->number);
        }
        free(pnew);
        pnew = NULL;
        return phead;
}
void ease(struct S *phead){
        struct S *b = phead;
        while( b->pnext!=NULL){
                struct S *add = b->pnext;
                free(b);
 b = add;
        }
}

int main(){
        int num;
        struct S *head = creat();
        printf("扣1删除链表\n");
        scanf("%d",&num);
        if(num==1){
                ease(head);
        }
        return 0;
        }
