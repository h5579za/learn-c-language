#include "game.h"
#include "game.c"
void menu()
{
    printf("******************************\n");
    printf("*******1.play  0.exit*********\n");
    printf("******************************\n");
}


void game()
{
    char ret=0;
    char board[ROW][COL]={0};
    initboard(board,ROW,COL);
    displayboard(board,ROW,COL);
    while(1)
    {
        playermove(board,ROW,COL);
        ret=iswin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        displayboard(board,ROW,COL);
        computermove(board,ROW,COL);
        ret=iswin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        displayboard(board,ROW,COL);
    }
    if(ret=='*')
    {
        printf("玩家赢\n");
    }
    else if(ret=='#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
    displayboard(board,ROW,COL);
}


int main()
{
    srand((unsigned int)time(NULL));
    int input=0;
    do
    {
        menu();
        printf("请选择");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("错误\n");
                break;
        }
    } while (input);
    return 0;
}