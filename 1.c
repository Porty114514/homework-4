#include<stdio.h>
int main(){
        int a=1,b=114;
        int *p;
        p=&a;
        printf("a=%d,address=%p,p=%p,*p=%d\n",a,p,p,*p);
        p=&b;
        b= *p + 10;
        printf("b=%d\n",b);
        return 0;
}
