#include "game.h"
void manu()
{
    printf("*****************************\n");
    printf("************1.play***********\n");
    printf("************0.exit***********\n");
    printf("*****************************\n");
}
void initboard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i=0;
    int j=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            board[i][j]=set;
        }
    }
}
void displayboard(char board[ROWS][COLS],int row,int col)
{
    int i=0;
    int j=0;
    printf("************扫雷************\n");
    for(j=0;j<=col;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%d ",i);
        for(j=1;j<=col;j++)
        {
            printf("%c ",board[i][j]);  
        }
        printf("\n");
    }
    printf("************扫雷************\n");
}
void setmine(char board[ROWS][COLS],int row,int col)
{
    int count=easy_count;
    while(count)
    {
        int x=rand()%row+1;
        int y=rand()%col+1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        }
    }
}
int get_mine_count(char board[ROWS][COLS],int x,int y)//字符1减去字符0就是数字1，字符0减去字符0就是数字0 ACSII
{
    return board[x-1][y]+board[x-1][y-1]+board[x][y-1]+board[x+1][y-1]+board[x+1][y]+board[x+1][y+1]+board[x][y+1]+board[x-1][y+1]-8*'0';
}
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;
    int win=0;
    while(win<row*col-easy_count)
    {
        printf("输入排查的坐标\n");
        scanf("%d%d",&x,&y);
        if(x>=1&&x<=row&&y>=1&&y<=col)
        {
            if(show[x][y]!='*')
            {
                printf("该坐标已被输入\n");
            }
            else
            {
                //是雷
                if(mine[x][y]=='1')
                {
                    printf("游戏失败\n");
                    displayboard(mine,ROW,COL);
                    break;
                }
                else
                {
                    win++;
                    int count=get_mine_count(mine,x,y);
                    show[x][y]=count+'0';
                    displayboard(show,ROW,COL);
                }
            }
        }
        else
        {
            printf("输入错误\n");
        }
    }
    if(win==row*col-easy_count)
    {
        printf("游戏胜利\n"); 
        displayboard(mine,ROW,COL);
    }
}