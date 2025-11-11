#include <stdio.h>
int x;
int likeNumber;

int main(void){
    x = 10;
    if(x == 9 || x == 10){
        printf("x is 10\n");
    }
    else{
        printf("x isn't 10\n");
    }
    /*
    ifの条件は以下の書き方をする
    [OR]-[||]
    [AND]-[&&]
    [NOT]-[!]
    */

    printf("好きな整数を入力してください\n");
    scanf("%d", &likeNumber);
    printf("あなたの好きな整数は%dです\n",likeNumber);

    /*
    printf,scanfの型指定子
    ーーーーーーーーーーーー
    [%d]-10進数の整数-[int]
    [%f]-浮動小数点数-[float]
    [%lf]-倍精度誘導小数点数-[double]
    [%c]-1文字-[char]
    [%s]-文字列(単語)-[char](配列)
    */


    //名前入力の例
    char name[50];//先に用意する枠の文字数を決めておく
    printf("名前を入力してください\n");
    scanf("%s",name);
    printf("hello %s!\n",name);


    return 0;
}
