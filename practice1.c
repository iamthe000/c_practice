#include <stdio.h>

int main(void){
    printf("Hello,World!\n");
    printf("これは2行目です\n");
    
    /*
    四則演算
    「  "%d\n",計算式  」
    で計算結果を表せれる
    */
    printf("%d\n",1+1);
    printf("%d\n",2-1);
    printf("%d\n",2*2);
    printf("%d\n",4/2);
    printf("%d\n",6*2/2+10);

    //変数
    int x;
    x = 5;

    printf("%d\n",x*2);
    /*
    変数ではchar,short,int,longの4種類が整数を格納できる。それぞれ
    charは -128~127
    shortは -32768~32767
    intは -2147483648~2147483647
    longでは +-21億~+-900京ほどまで
    */
    char x2;
    x2 = 100;
    short x3;
    x3 = 30000;
    int x4;
    x4 = 2000000000;

    // 文字列を格納するためには、char型配列を使う
    char txt[] = "hello!"; 
    // 関数名は printf で、文字列出力には "%s\n" を使う
    printf("%s\n", txt); 

    return 0;
}
