#include "game.h"
#include "game.c"
void game()
{
    char mine[ROWS][COLS]={0};
    char show[ROWS][COLS]={0};
    initboard(mine,ROWS,COLS,'0');
    initboard(show,ROWS,COLS,'*');
    setmine(mine,ROW,COL);
    //displayboard(mine,ROW,COL);
    displayboard(show,ROW,COL);
    findmine(mine,show,ROW,COL);
}
int main()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        manu();
        printf("请选择\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("游戏开始\n");
                game();
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("错误\n");
                break;
        }
    }
    while(input);
    return 0;
}