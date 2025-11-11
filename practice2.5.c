// 前回のコードの機能を関数で分けてみる
#include <stdio.h>
int count;
void countSheep(int likeNumber);
void pray(int JesusNumber);

int main(void){
    int x;
    int likeNumber;
    int JesusNumber;

    x = 10;
    if(x == 9 || x == 10){
        printf("x is 10\n");
    }
    else{
        printf("x isn't 10\n");
    }

    printf("好きな整数を入力してください\n");
    scanf("%d", &likeNumber);
    printf("あなたの好きな整数は%dです\n",likeNumber);

    //名前入力の例
    char name[50];//先に用意する枠の文字数を決めておく
    printf("名前を入力してください\n");
    scanf("%s",name);
    printf("hello %s!\n",name);

    countSheep(likeNumber);


    printf("何回祈りますか？");
    scanf("%d", &JesusNumber);
    pray(JesusNumber);

    return 0;
}

void countSheep(int likeNumber){
    count = 0;
    while (count < likeNumber)
    {
        printf("ひつじが%d匹\n",count + 1);
        count ++;
    }
}

void pray(int JesusNumber){

    if(JesusNumber <= 0){
        printf("WTF!?\n");
    }
    else{
        for (size_t i = 0; i < JesusNumber; i++)
        //このsize_tには負の数(マイナスの値)が入らないから、iをintなどではなくsize_tで置くことでエラーを予防している
        {
            printf("oh my god!");
        }
        printf("\n");
    }
}
