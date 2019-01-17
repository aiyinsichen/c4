#include <stdio.h>
char arr[1024];
int index = 0;


int main(){

    printf("jinruminganciguanlixitong\n");
    
    while(1){
       printf("1--tianjiayigeminganci\n");
       printf("2--shanchuyiduanminganci\n");
       printf("3--xianshisuoyouminganci\n");
       printf("4--tianhuanminganci\n");
       printf("5--tuichu\n");
       
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
           printf("xianshisuoyouyijingtianjiademinganzifu\n");
            for (int i = 0; i < index; i++){
                scanf("%c\n", arr[i]);
            }
            printf("xianshichenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
       }
        if(code == 4){
           
       }
        if(code == 5){
           printf("tuichuchenggong\n");
           break;
       }


    }

    return 0;

}