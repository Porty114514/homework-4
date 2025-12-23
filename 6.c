#include<stdio.h>
struct S {
        char *name[1];
        int score;
};
int main(){
        struct S a[3];
        struct S *p = a;
        (*p).name[0] = "woshifangrenshu";
        (*(p+1)).name[0] = "xiewangkai";
        (*(p+2)).name[0] = "yuanshen";
        (*p).score = 114514;
        (*(p+1)).score = 1919810;
        (*(p+2)).score = 11451419;
        for(int b=0;b<=2;b++){
                printf("%s得了%d分\n",(*(p+b)).name[0],(*(p+b)).score);
        }//这个叫遍历吗？
        int max = (*p).score;
        struct S *q = a;
        for(int c=1;c<=2;c++){
                if(max<=(*(p+c)).score){
                        max = (*(p+c)).score;
                        q = &a[c];
                        //printf("%s\n",(*q).name[0]);
                }
                //printf("%s\n",(*q).name[0]);
        }
        printf("最高分是%d,是%s考的\n",max,(*q).name[0]);

}
