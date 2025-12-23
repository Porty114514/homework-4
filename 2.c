#include<stdio.h>
int main(){
        int a[5];
        for(int b=0;b<=4;b++){
                printf("输入第%d个整数\n",b+1);
                scanf("%d",&a[b]);
        }
        int *p=NULL;
        for(int c=0;c<=4;c++){
                p = &a[c];
                printf("a[%d]=%d,address is %p\n",c,*(p+c),p);
        }
        return 0;
}
