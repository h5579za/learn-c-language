#include "game.h"
void initboard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}

void displayboard(char board[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        int j=0;
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i<row-1)
        {
            int j=0;
            for(j=0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void playermove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家下棋\n");
    while(1)
    {
        printf("请输入坐标");
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='*';
                break;
            }
            else
            {
                printf("坐标被占用，不能下棋\n");
            }
        }
        else
        {
            printf("坐标违法，请重新输入");
        }
    }
}

void computermove(char board[ROW][COL],int row,int col)
{
    printf("电脑下棋\n");
    int x=0;
    int y=0;
    while(1)
    {
        x=rand()%row;
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}
int isfull(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(board[i][j]==' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char iswin(char board[ROW][COL],int row,int col)
{
    int i=0;
    //判断行
    for(i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]&& board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //判断列
    int j=0;
    for(j=0;j<col;j++)
    {
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[1][j]!=' ')
        {
            return board[1][j];
        }
    }
    //对角线
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //平局
    if(isfull(board,row,col))
    {
        return 'q';
    }
    //游戏继续
    return 'c';
}