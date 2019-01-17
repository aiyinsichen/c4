#include <stdio.h>
char arr[1024];
int index = 0;


int main(){

    printf("jinruminganciguanlixitong\n");
    while(1){
       printf("tianjiayigeminganci\n");
       printf("shanchuyiduanminganci\n");
       printf("xianshisuoyouminganci\n");
       printf("tianhuanminganci\n");
       printf("tuichu\n");
       
       printf("qingshuruxiangyingdegongnengbianhao\n");
       int code;
       scanf("%d",&code);

       if(code == 1){
           printf("qingshuruyaotianjiademinganzifu\n");
           char m;
           scanf("%c",&m);
           scanf("%c",&m);
           arr[index] = m;
           index++;
           printf("tianjiachenggong,dianjihuyichejixu\n");
           char x;
           scanf("%c",&x);
           scanf("%c",&x);



       }
        if(code == 2){
            printf("shancuzuihouyigeminganzifu\n");
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
           char x;
           scanf("%c",&x);
           scanf("%c",&x);
        }
        if(code == 3){
           
       }
        if(code == 4){
           
       }
        if(code == 5){
           
       }


    }

    return 0;

}