#include <stdio.h>
// FIXME: この関数の昨日不要かもしれないから後で確認しておく
int main(int argc, char *argv[])
{
    // HACK: なんかPRの前に確認しておく
    printf("dekita環境最低限はできた\n");

    int a = 0;
    if (a == 0)
    {
        printf("この機能めちゃんこ便利な気がする\n");
        if (a == -1)
        { // BUG:ここエラーがでるようになっている
            printf("suiminnjikangahoshiina\n");
            if (a == 2)
            {
                // TODO: check
                printf("そんなことさえ愛しいと思える\n");
                // TODO: ちゃんと実装しておく
            }
        }
    }
    return 0;
}