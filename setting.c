#include <stdio.h>
#include <stdlib.h>

char map[10][20];
char player = '^';
int x = 3 ,  y = 5;

   void generatemap();
    void displaymap();

int main()
{
    system("cls");
    void generatemap();
    void displaymap();
    return 0;
}

void generatemap(){
    int i,j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 20; j++){
            map[i][j] = '0';
        }
    }
    map [y][x] = player;
}

void displaymap()
{
    int i,j;
    for (i = 0; i < 10; i++)
    {
     for (j = 0; j < 20; j++)
     {
        printf("%c", map[i][j]);
     }
        printf("\n");
    }
    
}