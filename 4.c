#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *str);
int main(){
        char a[100];
        scanf("%s",a);
        //printf("%s\n", a);
        my_strlen(a);
        return 0;
}
int my_strlen(char *str){
        for(int a=0;a<=a+1;a++){
                if(*(str+a)=='\0'){
                        printf("%d\n",a);
                        break;
                }

        }
}
