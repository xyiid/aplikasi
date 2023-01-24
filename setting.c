#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char map[10][20];
char player = '^';
int x=3, y=5;

//void generatemap();


void main()
{
    int score;
    char move;
    
    do
    {
        system("cls");
        generatemap();
        displaymap();
        move = getch();

        switch(move)
        {
            case 'w' :
            y--;
            break;
            case 's' :
            y++;
            break;
            case 'a' :
            x--;
            break;
            case 'd' :
            x++;
            break;
        }
    }while(score < 10);
}

int generatemap() 
{
    system("cls");
    int i,j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 20; j++)
        {
            map[i][j] = ' ';
        }
        printf("\n");
    }
    map[x][y] = player;
}

void displaymap()
{
    int i,j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 20; j++)
        {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}