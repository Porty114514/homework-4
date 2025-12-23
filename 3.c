#include<stdio.h>
void swap(int *a , int *b){
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}
int main(){
        int a = 13,b = 78;
        int *p = &a,*q = &b;
        swap(p,q);
        printf("a=%d,b=%d\n",a,b);
        return 0;
}
